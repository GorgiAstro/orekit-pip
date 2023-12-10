#ifndef org_orekit_models_earth_tessellation_Mesh$Node_H
#define org_orekit_models_earth_tessellation_Mesh$Node_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          class S2Point;
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
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          class Mesh$Node : public ::java::lang::Object {
           public:
            enum {
              mid_getAcross_d52645e0d4c07563,
              mid_getAcrossIndex_570ce0828f81a2c1,
              mid_getAlong_d52645e0d4c07563,
              mid_getAlongIndex_570ce0828f81a2c1,
              mid_getS2P_fe1c7ad511d8448b,
              mid_getV_d52645e0d4c07563,
              mid_isEnabled_b108b35ef48e27bd,
              mid_isInside_b108b35ef48e27bd,
              mid_move_490efaeb06700c2c,
              mid_setEnabled_0fa09c18fee449d5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Mesh$Node(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Mesh$Node(const Mesh$Node& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::geometry::euclidean::threed::Vector3D getAcross() const;
            jint getAcrossIndex() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getAlong() const;
            jint getAlongIndex() const;
            ::org::hipparchus::geometry::spherical::twod::S2Point getS2P() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getV() const;
            jboolean isEnabled() const;
            jboolean isInside() const;
            ::org::hipparchus::geometry::spherical::twod::S2Point move(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void setEnabled() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {
          extern PyType_Def PY_TYPE_DEF(Mesh$Node);
          extern PyTypeObject *PY_TYPE(Mesh$Node);

          class t_Mesh$Node {
          public:
            PyObject_HEAD
            Mesh$Node object;
            static PyObject *wrap_Object(const Mesh$Node&);
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
