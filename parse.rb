inf=File.read("main.c")
updfile=File.read("main.c").split("\n")
i=0
inf.each_line do |line|
  if /\A(.+)\.(.+);/.match line.strip
    obj=$1
    fname=$2
    updfile[i]="#{" "*line.index(/[^ ]/)}#{obj}->#{fname}(#{obj})"
  end
  i+=1
end
f=File.open("main.c","a")
f.puts
f.puts
f.print updfile.join("\n")
f.close
