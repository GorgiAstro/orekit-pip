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
              mid_getAcross_f88961cca75a2c0a,
              mid_getAcrossIndex_412668abc8d889e9,
              mid_getAlong_f88961cca75a2c0a,
              mid_getAlongIndex_412668abc8d889e9,
              mid_getS2P_0ba7e0560ff59fd8,
              mid_getV_f88961cca75a2c0a,
              mid_isEnabled_89b302893bdbe1f1,
              mid_isInside_89b302893bdbe1f1,
              mid_move_0ed238223dd4eabc,
              mid_setEnabled_0640e6acf969ed28,
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
