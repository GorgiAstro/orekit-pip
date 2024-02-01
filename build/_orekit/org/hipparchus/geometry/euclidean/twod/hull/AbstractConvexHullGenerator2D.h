#ifndef org_hipparchus_geometry_euclidean_twod_hull_AbstractConvexHullGenerator2D_H
#define org_hipparchus_geometry_euclidean_twod_hull_AbstractConvexHullGenerator2D_H

#include "java/lang/Object.h"

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
          namespace hull {
            class ConvexHullGenerator2D;
            class ConvexHull2D;
          }
        }
      }
    }
    namespace exception {
      class MathIllegalStateException;
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

            class AbstractConvexHullGenerator2D : public ::java::lang::Object {
             public:
              enum {
                mid_generate_7454961d4f202a9b,
                mid_getTolerance_9981f74b2d109da6,
                mid_isIncludeCollinearPoints_eee3de00fe971136,
                mid_findHullVertices_ca6e223ef3eef34f,
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
