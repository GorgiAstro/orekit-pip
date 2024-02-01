#ifndef org_orekit_estimation_measurements_modifiers_AberrationModifier_H
#define org_orekit_estimation_measurements_modifiers_AberrationModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class AngularRaDec;
        class GroundStation;
        class EstimationModifier;
        class EstimatedMeasurement;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class FieldTransform;
      class Frame;
    }
    namespace utils {
      class ParameterDriver;
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
              mid_init$_ff7cb6c242604316,
              mid_init$_e28302a82adb77ed,
              mid_fieldNaturalToProper_db60b87585b707cf,
              mid_fieldNaturalToProper_243bb54e25d47339,
              mid_fieldProperToNatural_db60b87585b707cf,
              mid_fieldProperToNatural_243bb54e25d47339,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_modify_0f0ae9411e47b72e,
              mid_modifyWithoutDerivatives_ecce216dce506020,
              mid_naturalToProper_817775721aeb0d8f,
              mid_naturalToProper_0c85e773c8161eac,
              mid_properToNatural_817775721aeb0d8f,
              mid_properToNatural_0c85e773c8161eac,
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
            AberrationModifier(const ::org::orekit::data::DataContext &);

            static JArray< ::org::hipparchus::analysis::differentiation::Gradient > fieldNaturalToProper(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > &, const ::org::orekit::frames::FieldTransform &, const ::org::orekit::frames::Frame &);
            static JArray< ::org::hipparchus::analysis::differentiation::Gradient > fieldNaturalToProper(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > &, const ::org::orekit::frames::FieldTransform &, const ::org::orekit::frames::Frame &, const ::org::orekit::data::DataContext &);
            static JArray< ::org::hipparchus::analysis::differentiation::Gradient > fieldProperToNatural(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > &, const ::org::orekit::frames::FieldTransform &, const ::org::orekit::frames::Frame &);
            static JArray< ::org::hipparchus::analysis::differentiation::Gradient > fieldProperToNatural(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > &, const ::org::orekit::frames::FieldTransform &, const ::org::orekit::frames::Frame &, const ::org::orekit::data::DataContext &);
            ::java::util::List getParametersDrivers() const;
            void modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement &) const;
            void modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
            static JArray< jdouble > naturalToProper(const JArray< jdouble > &, const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &);
            static JArray< jdouble > naturalToProper(const JArray< jdouble > &, const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &, const ::org::orekit::data::DataContext &);
            static JArray< jdouble > properToNatural(const JArray< jdouble > &, const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &);
            static JArray< jdouble > properToNatural(const JArray< jdouble > &, const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &, const ::org::orekit::data::DataContext &);
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
