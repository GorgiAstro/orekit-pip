#ifndef org_hipparchus_geometry_euclidean_twod_hull_ConvexHullGenerator2D_H
#define org_hipparchus_geometry_euclidean_twod_hull_ConvexHullGenerator2D_H

#include "org/hipparchus/geometry/hull/ConvexHullGenerator.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Euclidean2D;
          namespace hull {
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

            class ConvexHullGenerator2D : public ::org::hipparchus::geometry::hull::ConvexHullGenerator {
             public:
              enum {
                mid_generate_031b48e42873ea77,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ConvexHullGenerator2D(jobject obj) : ::org::hipparchus::geometry::hull::ConvexHullGenerator(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ConvexHullGenerator2D(const ConvexHullGenerator2D& obj) : ::org::hipparchus::geometry::hull::ConvexHullGenerator(obj) {}

              ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D generate(const ::java::util::Collection &) const;
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
            extern PyType_Def PY_TYPE_DEF(ConvexHullGenerator2D);
            extern PyTypeObject *PY_TYPE(ConvexHullGenerator2D);

            class t_ConvexHullGenerator2D {
            public:
              PyObject_HEAD
              ConvexHullGenerator2D object;
              static PyObject *wrap_Object(const ConvexHullGenerator2D&);
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
