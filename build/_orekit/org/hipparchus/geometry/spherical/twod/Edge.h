#ifndef org_hipparchus_geometry_spherical_twod_Edge_H
#define org_hipparchus_geometry_spherical_twod_Edge_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
      namespace spherical {
        namespace twod {
          class Circle;
          class Vertex;
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
              mid_getCircle_15409f4dd57c6afd,
              mid_getEnd_729ee436c51c3951,
              mid_getLength_456d9a2f64d6b28d,
              mid_getPointAt_5f993a721a1d8c59,
              mid_getStart_729ee436c51c3951,
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
