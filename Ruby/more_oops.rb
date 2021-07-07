class Department
  def initialize(name, classrooms_count)
    @name = name
    @classrooms_count = classrooms_count
    @teachers = []
  end

  def add_teacher(teacher)
    @teachers.push(teacher)
  end

  def rooms_info
    "Classrooms count: #{@classrooms_count}"
  end

  def teachers_info
    "Number of teachers: #{@teachers.length}"
  end

  def department_info
    "Department: #{@name}. #{rooms_info} #{teachers_info}"
  end
end

class ComputerDepartment < Department
  def initialize(name, classrooms_count, labs_count, conf_count)
    super(name, classrooms_count)
    @labs_count = labs_count
    @conf_count = conf_count
  end

  def rooms_info
    "Rooms count -- classrooms: #{@classrooms_count}, labs: #{@labs_count}, conference rooms: #{@conf_count}"
  end
end

c = ComputerDepartment.new("Computer Science & Engineering", 3, 2, 1)
c.add_teacher("Teacher 1")
c.add_teacher("Teacher 2")
puts c.department_info
