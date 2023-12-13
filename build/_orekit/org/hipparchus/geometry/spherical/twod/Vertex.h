#ifndef org_hipparchus_geometry_spherical_twod_Vertex_H
#define org_hipparchus_geometry_spherical_twod_Vertex_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          class S2Point;
          class Edge;
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

          class Vertex : public ::java::lang::Object {
           public:
            enum {
              mid_getIncoming_e042a987ddce5121,
              mid_getLocation_cf0fa877996d1fcc,
              mid_getOutgoing_e042a987ddce5121,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Vertex(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Vertex(const Vertex& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::geometry::spherical::twod::Edge getIncoming() const;
            ::org::hipparchus::geometry::spherical::twod::S2Point getLocation() const;
            ::org::hipparchus::geometry::spherical::twod::Edge getOutgoing() const;
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
          extern PyType_Def PY_TYPE_DEF(Vertex);
          extern PyTypeObject *PY_TYPE(Vertex);

          class t_Vertex {
          public:
            PyObject_HEAD
            Vertex object;
            static PyObject *wrap_Object(const Vertex&);
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
