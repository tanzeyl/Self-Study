require "./connect_db.rb"
connect_db!

class User < ActiveRecord::Base

  # to format data
  def to_displayable_string
    "#{name} #{email} #{password}"
  end

  # to format all elements of the list
  def self.to_displayable_list
    all.map { |user| user.to_displayable_string }
  end

  def self.add_user(user_object)
    name = user_object[:name]
    email = user_object[:email]
    password = user_object[:password]
    User.create!(name: name, email: email, password: password)
  end
end
