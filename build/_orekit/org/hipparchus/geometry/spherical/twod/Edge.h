#ifndef org_hipparchus_geometry_spherical_twod_Edge_H
#define org_hipparchus_geometry_spherical_twod_Edge_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          class Circle;
          class Vertex;
        }
      }
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          class Edge : public ::java::lang::Object {
           public:
            enum {
              mid_getCircle_7e98cfa0ffbe686f,
              mid_getEnd_3a3b22b9c96e532e,
              mid_getLength_557b8123390d8d0c,
              mid_getPointAt_20de5f9d51c6611f,
              mid_getStart_3a3b22b9c96e532e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Edge(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Edge(const Edge& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::geometry::spherical::twod::Circle getCircle() const;
            ::org::hipparchus::geometry::spherical::twod::Vertex getEnd() const;
            jdouble getLength() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getPointAt(jdouble) const;
            ::org::hipparchus::geometry::spherical::twod::Vertex getStart() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          extern PyType_Def PY_TYPE_DEF(Edge);
          extern PyTypeObject *PY_TYPE(Edge);

          class t_Edge {
          public:
            PyObject_HEAD
            Edge object;
            static PyObject *wrap_Object(const Edge&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
