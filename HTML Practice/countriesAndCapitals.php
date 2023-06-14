<?php
  $arr = array("India" => "Delhi", "USA" => "Washington DC", "Paris" => "France", "C" => "A");
  asort($arr);
  foreach ($arr as $key => $value)
  {
    echo "Country: ". $key . " Capital: " . $value;
    echo "<br />";
  }
?>
