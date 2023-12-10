#ifndef org_hipparchus_geometry_euclidean_twod_hull_AbstractConvexHullGenerator2D_H
#define org_hipparchus_geometry_euclidean_twod_hull_AbstractConvexHullGenerator2D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
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
                mid_generate_031b48e42873ea77,
                mid_getTolerance_dff5885c2c873297,
                mid_isIncludeCollinearPoints_b108b35ef48e27bd,
                mid_findHullVertices_e6702ab1f73fd997,
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
