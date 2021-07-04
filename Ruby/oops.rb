class Student
  def initialize(name, roll_no, city)
    @name = name
    @roll_no = roll_no
    @city = city
    @is_enrolled = false
  end

  def enroll
    @is_enrolled = true
  end

  def is_enrolled?
    @is_enrolled
  end

  # Getter
  def name
    @name
  end

  # Getter
  def roll_no
    @roll_no
  end

  def city
    @city
  end
end

class Course
  def initialize(name, students)
    @name = name
    @students = students
  end

  def enroll(new_student)
    @students.push(new_student)
  end

  def is_student_enrolled?(roll_no)
    @students.any? {|student| student.roll_no == roll_no }
  end

  def get_student(roll_no)
    @students.find {|student| student.roll_no == roll_no }
  end
end

saas = Course.new("SaaS", [Student.new("Tanzeel", "61", "Knapur"), Student.new("Khizra", "22", "Kanpur")])
puts saas.is_student_enrolled?(61)   # true
puts saas.is_student_enrolled?(99)   # false
saas.enroll(Student.new("Ned", 800, "New York"))
puts saas.is_student_enrolled?(800)   # true
puts saas.get_student(800).name
