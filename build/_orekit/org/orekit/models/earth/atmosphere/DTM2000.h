#ifndef org_orekit_models_earth_atmosphere_DTM2000_H
#define org_orekit_models_earth_atmosphere_DTM2000_H

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
          class DTM2000InputParameters;
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

          class DTM2000 : public ::java::lang::Object {
           public:
            enum {
              mid_init$_58cc3d6f9c6a0dd1,
              mid_init$_e1b599b0430d755c,
              mid_getDensity_0c5821935d445848,
              mid_getDensity_65e73ef68b3713d0,
              mid_getDensity_d08bf03ff29ff983,
              mid_getDensity_65bb98ccbc3acfcf,
              mid_getFrame_cb151471db4570f0,
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
