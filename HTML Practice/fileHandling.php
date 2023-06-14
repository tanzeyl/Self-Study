<html>
  <head>
    <title>File Handling</title>
    <?php
      if (isset($_POST["submit"]))
      {
        $text = $_POST["text"];
        $file = fopen("file.txt", "w") or die("Unable to open file!");
        fwrite($file, $text);
        fclose($file);
        echo "Successfully updated the file.";
      }
    ?>
  </head>
  <body>
    <form action="" method="POST">
      <label for="text">Enter the text:</label>
      <textarea name="text" id="text" cols="30" rows="10"></textarea><br>
      <input type="submit" name="submit" value="SUBMIT">
    </form>
    <?php
      $file = fopen("file.txt", "r");
      while (!feof($file)) { echo fgets($file) . "<br />"; }
      fclose($file);
    ?>
  </body>
</html>
