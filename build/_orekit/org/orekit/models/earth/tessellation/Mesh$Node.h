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
              mid_getAcross_17a952530a808943,
              mid_getAcrossIndex_f2f64475e4580546,
              mid_getAlong_17a952530a808943,
              mid_getAlongIndex_f2f64475e4580546,
              mid_getS2P_71b7da0eb14488b0,
              mid_getV_17a952530a808943,
              mid_isEnabled_e470b6d9e0d979db,
              mid_isInside_e470b6d9e0d979db,
              mid_move_039d1d912b9705b9,
              mid_setEnabled_7ae3461a92a43152,
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
