#ifndef org_orekit_models_earth_atmosphere_JB2008_H
#define org_orekit_models_earth_atmosphere_JB2008_H

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
          class JB2008InputParameters;
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

          class JB2008 : public ::java::lang::Object {
           public:
            enum {
              mid_init$_938553a282dca92f,
              mid_init$_1be121049dfb39fb,
              mid_getDensity_b79d75c1a8af7374,
              mid_getDensity_f7d7785230311c38,
              mid_getDensity_8f9ca6bae567f561,
              mid_getDensity_5801af748a6e81b4,
              mid_getFrame_b86f9f61d97a7244,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JB2008(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JB2008(const JB2008& obj) : ::java::lang::Object(obj) {}

            JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::BodyShape &);
            JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::BodyShape &, const ::org::orekit::time::TimeScale &);

            ::org::hipparchus::CalculusFieldElement getDensity(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &) const;
            jdouble getDensity(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &) const;
            jdouble getDensity(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
            ::org::hipparchus::CalculusFieldElement getDensity(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(JB2008);
          extern PyTypeObject *PY_TYPE(JB2008);

          class t_JB2008 {
          public:
            PyObject_HEAD
            JB2008 object;
            static PyObject *wrap_Object(const JB2008&);
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
