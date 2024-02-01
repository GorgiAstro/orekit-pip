#ifndef org_orekit_models_earth_tessellation_ConstantAzimuthAiming_H
#define org_orekit_models_earth_tessellation_ConstantAzimuthAiming_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
    }
    namespace models {
      namespace earth {
        namespace tessellation {
          class TileAiming;
        }
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          class ConstantAzimuthAiming : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4a8b2a0e42b8245c,
              mid_alongTileDirection_73bb6a45361007eb,
              mid_getSingularPoints_d751c1a57012b438,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConstantAzimuthAiming(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConstantAzimuthAiming(const ConstantAzimuthAiming& obj) : ::java::lang::Object(obj) {}

            ConstantAzimuthAiming(const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);

            ::org::hipparchus::geometry::euclidean::threed::Vector3D alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::bodies::GeodeticPoint &) const;
            ::java::util::List getSingularPoints() const;
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
          extern PyType_Def PY_TYPE_DEF(ConstantAzimuthAiming);
          extern PyTypeObject *PY_TYPE(ConstantAzimuthAiming);

          class t_ConstantAzimuthAiming {
          public:
            PyObject_HEAD
            ConstantAzimuthAiming object;
            static PyObject *wrap_Object(const ConstantAzimuthAiming&);
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
