import reapy
from reapy import reascript_api as RPR

project = reapy.Project()
# reapy.print(f"BPM: { project.bpm }")
# reapy.print(f"Length: { project.length }")

tracks = project.tracks
for track in tracks:
  reapy.print(track.name)

def add_track_to_project(project = reapy.Project(), index = -1, track_name = "Track"):
  new_track = project.add_track(index)
  if track_name == "Track":
    track_name += f"{ index }"
  new_track.name = track_name
  RPR.insert
  print(f"A new track has been added at position { index } and it's name is { track_name }")
  return new_track.id

def add_media_to_track(track, file, position):
  item = RPR.AddMediaItemToTrack(track)
  take = RPR.AddTakeToMediaItem(item)
  source = RPR.PCM_Source_CreateFromFile(file)
  length = RPR.GetMediaSourceLength(source, 2)[0]
  RPR.SetMediaItemTake_Source(take, source)
  RPR.SetMediaItemInfo_Value(item, 'D_POSITION', position)
  RPR.SetMediaItemInfo_Value(item, 'D_LENGTH', length)
  RPR.UpdateArrange()

add_track_to_project(project, 0, "Track")
# add_track_to_project(project, 1)

add_media_to_track(project.tracks[0].id, "tracks/instasamka.mp3", 0)

project.play()
