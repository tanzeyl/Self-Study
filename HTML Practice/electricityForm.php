<html>
  <head>
    <title>Electricity Form</title>
    <?php
      if (isset($_POST['submit']))
      {
        $prev = $_POST['prev'];
        $current = $_POST['current'];
        $bill = ($current - $prev) * 50;
        echo "The bill is: ".$bill;
      }
    ?>
  </head>
  <body>
    <form action="" method="POST">
      <label for="prev">Previous Reading</label>
      <input type="text" name="prev" id="prev"><br>
      <label for="current">Current Reading</label>
      <input type="text" name="current" id="current"><br>
      <input type="submit" value="Submit" name="submit">
    </form>
  </body>
</html>
