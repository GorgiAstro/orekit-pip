#ifndef org_orekit_estimation_measurements_modifiers_AberrationModifier_H
#define org_orekit_estimation_measurements_modifiers_AberrationModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class GroundStation;
        class EstimationModifier;
        class AngularRaDec;
      }
    }
    namespace frames {
      class Frame;
      class FieldTransform;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
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
              mid_init$_7ae3461a92a43152,
              mid_fieldNaturalToProper_6a041d6881c9cde9,
              mid_fieldProperToNatural_6a041d6881c9cde9,
              mid_getParametersDrivers_a6156df500549a58,
              mid_modify_a5896dbcbe782924,
              mid_modifyWithoutDerivatives_811f96960c94c1de,
              mid_naturalToProper_65b57dcd88b61033,
              mid_properToNatural_65b57dcd88b61033,
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
