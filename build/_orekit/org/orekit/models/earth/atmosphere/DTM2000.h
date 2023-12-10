#ifndef org_orekit_models_earth_atmosphere_DTM2000_H
#define org_orekit_models_earth_atmosphere_DTM2000_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class TimeScale;
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace bodies {
      class BodyShape;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class DTM2000InputParameters;
          class Atmosphere;
        }
      }
    }
    namespace utils {
      class PVCoordinatesProvider;
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

          class DTM2000 : public ::java::lang::Object {
           public:
            enum {
              mid_init$_678bd395a429449e,
              mid_init$_7b1e93ecc13cdcd9,
              mid_getDensity_e3f5c4474b151066,
              mid_getDensity_ee5ac6667b0d4b90,
              mid_getDensity_1c189ae3dfeda23c,
              mid_getDensity_a56c9f22c00d48b9,
              mid_getFrame_c8fe21bcdac65bf6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DTM2000(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DTM2000(const DTM2000& obj) : ::java::lang::Object(obj) {}

            DTM2000(const ::org::orekit::models::earth::atmosphere::DTM2000InputParameters &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::BodyShape &);
            DTM2000(const ::org::orekit::models::earth::atmosphere::DTM2000InputParameters &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::BodyShape &, const ::org::orekit::time::TimeScale &);

            ::org::hipparchus::CalculusFieldElement getDensity(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &) const;
            jdouble getDensity(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &) const;
            jdouble getDensity(jint, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
            ::org::hipparchus::CalculusFieldElement getDensity(jint, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble) const;
            ::org::orekit::frames::Frame getFrame() const;
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
          extern PyType_Def PY_TYPE_DEF(DTM2000);
          extern PyTypeObject *PY_TYPE(DTM2000);

          class t_DTM2000 {
          public:
            PyObject_HEAD
            DTM2000 object;
            static PyObject *wrap_Object(const DTM2000&);
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
