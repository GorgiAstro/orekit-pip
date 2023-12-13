#ifndef org_orekit_estimation_measurements_modifiers_AberrationModifier_H
#define org_orekit_estimation_measurements_modifiers_AberrationModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class AngularRaDec;
        class EstimationModifier;
        class EstimatedMeasurementBase;
        class EstimatedMeasurement;
        class GroundStation;
      }
    }
    namespace frames {
      class FieldTransform;
      class Frame;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class AberrationModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_fieldNaturalToProper_3d83526a19e21371,
              mid_fieldProperToNatural_3d83526a19e21371,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_modify_f784f7724d44a90a,
              mid_modifyWithoutDerivatives_308087fabc1d7f66,
              mid_naturalToProper_901c3791391f487f,
              mid_properToNatural_901c3791391f487f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AberrationModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AberrationModifier(const AberrationModifier& obj) : ::java::lang::Object(obj) {}

            AberrationModifier();

            static JArray< ::org::hipparchus::analysis::differentiation::Gradient > fieldNaturalToProper(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > &, const ::org::orekit::frames::FieldTransform &, const ::org::orekit::frames::Frame &);
            static JArray< ::org::hipparchus::analysis::differentiation::Gradient > fieldProperToNatural(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > &, const ::org::orekit::frames::FieldTransform &, const ::org::orekit::frames::Frame &);
            ::java::util::List getParametersDrivers() const;
            void modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement &) const;
            void modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
            static JArray< jdouble > naturalToProper(const JArray< jdouble > &, const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &);
            static JArray< jdouble > properToNatural(const JArray< jdouble > &, const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          extern PyType_Def PY_TYPE_DEF(AberrationModifier);
          extern PyTypeObject *PY_TYPE(AberrationModifier);

          class t_AberrationModifier {
          public:
            PyObject_HEAD
            AberrationModifier object;
            static PyObject *wrap_Object(const AberrationModifier&);
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
