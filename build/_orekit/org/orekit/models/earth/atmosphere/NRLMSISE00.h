#ifndef org_orekit_models_earth_atmosphere_NRLMSISE00_H
#define org_orekit_models_earth_atmosphere_NRLMSISE00_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScale;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
          class NRLMSISE00;
          class NRLMSISE00InputParameters;
        }
      }
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
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
              mid_init$_5e248e4ef8b5d9ef,
              mid_init$_377f58be6b5b618e,
              mid_getDensity_65e73ef68b3713d0,
              mid_getDensity_0c5821935d445848,
              mid_getFrame_cb151471db4570f0,
              mid_withSwitch_155371b30aaef921,
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
