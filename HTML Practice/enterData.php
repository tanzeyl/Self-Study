<html>
  <head>
    <title>Enter Data</title>
    <?php
      if (isset($_POST["submit"]))
      {
        $con = mysqli_connect("localhost", "root", "", "students") or die(mysqli_error($con));
        $name = $_POST["name"];
        $email = $_POST["email"];
        $query = "INSERT INTO `users` (`name`, `email`) VALUES ('$name', '$email')";
        $query_res = mysqli_query($con, $query) or die(mysqli_error($con));
        echo "Data entered successfully.";
      }
    ?>
  </head>
  <body>
    <form action="" method="POST">
      <label for="name">Name</label>
      <input type="text" name="name" id="name"><br>
      <label for="email">Email</label>
      <input type="text" name="email" id="email"><br>
      <input type="submit" name="submit" value="Submit">
    </form>
    <?php
      $con = mysqli_connect("localhost", "root", "", "students") or die(mysqli_error($con));
      $data = "SELECT * FROM `users`";
      $data = mysqli_query($con, $data) or die(mysqli_error($con));
      while ($row = mysqli_fetch_array($data)) { echo "Name: " . $row[0] . " Email: " . $row[1] . "<br />"; }
    ?>
  </body>
</html>
