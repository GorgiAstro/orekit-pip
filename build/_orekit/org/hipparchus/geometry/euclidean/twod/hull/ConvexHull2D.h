#ifndef org_hipparchus_geometry_euclidean_twod_hull_ConvexHull2D_H
#define org_hipparchus_geometry_euclidean_twod_hull_ConvexHull2D_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
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
          class Segment;
          class Euclidean2D;
        }
      }
      namespace partitioning {
        class Region;
      }
      namespace hull {
        class ConvexHull;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
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

            class ConvexHull2D : public ::java::lang::Object {
             public:
              enum {
                mid_init$_47d19e3a4a08b3a4,
                mid_createRegion_9552c312bc09a7e5,
                mid_getLineSegments_4bc91cd0e314a202,
                mid_getVertices_420b11245beef53d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ConvexHull2D(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ConvexHull2D(const ConvexHull2D& obj) : ::java::lang::Object(obj) {}

              ConvexHull2D(const JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > &, jdouble);

              ::org::hipparchus::geometry::partitioning::Region createRegion() const;
              JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > getLineSegments() const;
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > getVertices() const;
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
            extern PyType_Def PY_TYPE_DEF(ConvexHull2D);
            extern PyTypeObject *PY_TYPE(ConvexHull2D);

            class t_ConvexHull2D {
            public:
              PyObject_HEAD
              ConvexHull2D object;
              static PyObject *wrap_Object(const ConvexHull2D&);
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