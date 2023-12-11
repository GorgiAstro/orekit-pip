#ifndef org_orekit_models_earth_displacement_OceanLoading_H
#define org_orekit_models_earth_displacement_OceanLoading_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class BodiesElements;
    }
    namespace models {
      namespace earth {
        namespace displacement {
          class OceanLoadingCoefficients;
          class StationDisplacement;
        }
      }
    }
    namespace frames {
      class Frame;
    }
    namespace bodies {
      class OneAxisEllipsoid;
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
        namespace displacement {

          class OceanLoading : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8d9958c18bab9055,
              mid_displacement_2092c3958d15642d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OceanLoading(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OceanLoading(const OceanLoading& obj) : ::java::lang::Object(obj) {}

            OceanLoading(const ::org::orekit::bodies::OneAxisEllipsoid &, const ::org::orekit::models::earth::displacement::OceanLoadingCoefficients &);

            ::org::hipparchus::geometry::euclidean::threed::Vector3D displacement(const ::org::orekit::data::BodiesElements &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
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
        namespace displacement {
          extern PyType_Def PY_TYPE_DEF(OceanLoading);
          extern PyTypeObject *PY_TYPE(OceanLoading);

          class t_OceanLoading {
          public:
            PyObject_HEAD
            OceanLoading object;
            static PyObject *wrap_Object(const OceanLoading&);
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
