#ifndef org_orekit_models_earth_atmosphere_NRLMSISE00_H
#define org_orekit_models_earth_atmosphere_NRLMSISE00_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace bodies {
      class BodyShape;
    }
    namespace time {
      class TimeScale;
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class NRLMSISE00;
          class NRLMSISE00InputParameters;
          class Atmosphere;
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
        namespace atmosphere {

          class NRLMSISE00 : public ::java::lang::Object {
           public:
            enum {
              mid_init$_95485d1ebb7911a0,
              mid_init$_3782e04c41242f72,
              mid_getDensity_f7d7785230311c38,
              mid_getDensity_b79d75c1a8af7374,
              mid_getFrame_b86f9f61d97a7244,
              mid_withSwitch_61652ce4abe178ec,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NRLMSISE00(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NRLMSISE00(const NRLMSISE00& obj) : ::java::lang::Object(obj) {}

            NRLMSISE00(const ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::BodyShape &);
            NRLMSISE00(const ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::BodyShape &, const ::org::orekit::time::TimeScale &);

            jdouble getDensity(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &) const;
            ::org::hipparchus::CalculusFieldElement getDensity(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &) const;
            ::org::orekit::frames::Frame getFrame() const;
            NRLMSISE00 withSwitch(jint, jint) const;
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
        namespace atmosphere {
          extern PyType_Def PY_TYPE_DEF(NRLMSISE00);
          extern PyTypeObject *PY_TYPE(NRLMSISE00);

          class t_NRLMSISE00 {
          public:
            PyObject_HEAD
            NRLMSISE00 object;
            static PyObject *wrap_Object(const NRLMSISE00&);
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
