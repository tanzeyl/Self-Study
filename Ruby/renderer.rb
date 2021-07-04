node1 = {
  :tag => "h1",
  :text => "**** WELCOME TO SAAS 2021 ****"
}

node2 = {
  :tag => "div",
  :children => [
      {
        :tag => "h2",
        :text => "** The Ruby language **"
      },
      {
        :tag => "p",
        :text => "Ruby is an amazing tool."
      }
  ]
}

html = {
  :tag => "div",
  :children => [node1, node2]
}

def render(node)
  if node[:tag] == "p"
    puts node[:text]
  elsif node[:tag] == "h1"
    puts node[:text]
  elsif node[:tag] == "h2"
    puts node[:text]
  elsif node[:tag] == "div"
    children = node[:children]
    children.each {|child| render(child)}
  end
end

render(html)
