node = {
  :tag => "p",
  :text => "This is a paragraph."
}

html = {
  :tag => "div",
  :children => [node]
}

def render(node)
  if node[:tag] == "p"
    puts "P: "
    puts node[:text]
  elsif node[:tag] == "div"
    children = node[:children]
    children.each {|child| render(child)}
  end
end

render(html)
