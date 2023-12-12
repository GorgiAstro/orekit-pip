#ifndef org_hipparchus_geometry_euclidean_twod_hull_AbstractConvexHullGenerator2D_H
#define org_hipparchus_geometry_euclidean_twod_hull_AbstractConvexHullGenerator2D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            class ConvexHullGenerator2D;
            class ConvexHull2D;
          }
          class Vector2D;
        }
      }
    }
    namespace exception {
      class MathIllegalStateException;
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            class AbstractConvexHullGenerator2D : public ::java::lang::Object {
             public:
              enum {
                mid_generate_b7d73bd07a9bc56d,
                mid_getTolerance_557b8123390d8d0c,
                mid_isIncludeCollinearPoints_89b302893bdbe1f1,
                mid_findHullVertices_6472a4633751d554,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractConvexHullGenerator2D(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractConvexHullGenerator2D(const AbstractConvexHullGenerator2D& obj) : ::java::lang::Object(obj) {}

              ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D generate(const ::java::util::Collection &) const;
              jdouble getTolerance() const;
              jboolean isIncludeCollinearPoints() const;
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
            extern PyType_Def PY_TYPE_DEF(AbstractConvexHullGenerator2D);
            extern PyTypeObject *PY_TYPE(AbstractConvexHullGenerator2D);

            class t_AbstractConvexHullGenerator2D {
            public:
              PyObject_HEAD
              AbstractConvexHullGenerator2D object;
              static PyObject *wrap_Object(const AbstractConvexHullGenerator2D&);
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
