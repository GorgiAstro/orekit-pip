#ifndef org_hipparchus_geometry_euclidean_twod_hull_MonotoneChain_H
#define org_hipparchus_geometry_euclidean_twod_hull_MonotoneChain_H

#include "org/hipparchus/geometry/euclidean/twod/hull/AbstractConvexHullGenerator2D.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Vector2D;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            class MonotoneChain : public ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_init$_ed2afdb8506b9742,
                mid_init$_de678bc36ddd2b6a,
                mid_findHullVertices_6472a4633751d554,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MonotoneChain(jobject obj) : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MonotoneChain(const MonotoneChain& obj) : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(obj) {}

              MonotoneChain();
              MonotoneChain(jboolean);
              MonotoneChain(jboolean, jdouble);

              ::java::util::Collection findHullVertices(const ::java::util::Collection &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            extern PyType_Def PY_TYPE_DEF(MonotoneChain);
            extern PyTypeObject *PY_TYPE(MonotoneChain);

            class t_MonotoneChain {
            public:
              PyObject_HEAD
              MonotoneChain object;
              static PyObject *wrap_Object(const MonotoneChain&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
