<?php
  $a = 33;
  echo gettype($a);
  echo "<br />";
  $b = "33";
  settype($b, "integer");
  echo gettype($b);
  echo "<br />";
  $name = "Tanzeel";
  if (isset($name)) echo "name is set.";
  else echo "name is not set.";
  echo "<br />";
  unset($name);
  if (isset($name)) echo "name is set.";
  else echo "name is not set.";
  echo "<br />"
?>
