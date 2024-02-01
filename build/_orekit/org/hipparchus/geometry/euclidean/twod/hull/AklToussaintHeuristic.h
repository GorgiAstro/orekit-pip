#ifndef org_hipparchus_geometry_euclidean_twod_hull_AklToussaintHeuristic_H
#define org_hipparchus_geometry_euclidean_twod_hull_AklToussaintHeuristic_H

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

            class AklToussaintHeuristic : public ::java::lang::Object {
             public:
              enum {
                mid_reducePoints_ca6e223ef3eef34f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AklToussaintHeuristic(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AklToussaintHeuristic(const AklToussaintHeuristic& obj) : ::java::lang::Object(obj) {}

              static ::java::util::Collection reducePoints(const ::java::util::Collection &);
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
            extern PyType_Def PY_TYPE_DEF(AklToussaintHeuristic);
            extern PyTypeObject *PY_TYPE(AklToussaintHeuristic);

            class t_AklToussaintHeuristic {
            public:
              PyObject_HEAD
              AklToussaintHeuristic object;
              static PyObject *wrap_Object(const AklToussaintHeuristic&);
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
