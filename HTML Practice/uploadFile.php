<html>
  <head>
    <title>File Upload</title>
    <?php
      if (isset($_POST['submit']))
      {
        if ($_FILES['file']['name'])
        {
          $name = $_FILES['file']['name'];
          $tempName = $_FILES['file']['tmp_name'];
          $ext = strtolower(pathinfo($name, PATHINFO_EXTENSION));
          $allowed = array("jpg", "jpeg", "png", "gif");
          if (in_array($ext, $allowed))
          {
            $uploadDir = "T:\Documents";
            $newName = uniqid() . "." . $ext;
            if (move_uploaded_file($tempName, $uploadDir.$newName)) { echo "File uploaded."; }
            else { echo "Error."; }
          }
          else { echo "Extension not allowed."; }
        }
        else { echo "No file selected."; }
      }
    ?>
  </head>
  <form action="" method="POST" enctype="multipart/form-data">
    <input type="file" name="file">
    <input type="submit" name="submit" value="Submit">
  </form>
</html>
