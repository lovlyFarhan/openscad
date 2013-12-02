#ifndef CGALWORKER_H_
#define CGALWORKER_H_

#include <QObject>
#include "memory.h"

class CGALWorker : public QObject
{
	Q_OBJECT;
public:
	CGALWorker();
	virtual ~CGALWorker();

public slots:
	void start(const class Tree &tree);

protected slots:
	void work();

signals:
	void done(shared_ptr<const class CGAL_Nef_polyhedron>);

protected:

	class QThread *thread;
	const class Tree *tree;
};

#endif
