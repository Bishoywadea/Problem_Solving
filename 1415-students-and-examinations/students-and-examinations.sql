-- Write your PostgreSQL query statement below
SELECT Students.student_id, student_name, Subjects.subject_name, COALESCE(COUNT(Examinations.subject_name), 0) AS attended_exams
FROM Students CROSS JOIN Subjects
LEFT JOIN Examinations 
ON Students.student_id = Examinations.student_id AND Subjects.subject_name = Examinations.subject_name
GROUP BY Students.student_id, student_name, Subjects.subject_name
ORDER BY Students.student_id, Subjects.subject_name;