#ifndef org_orekit_models_earth_ionosphere_NeQuickModel_H
#define org_orekit_models_earth_ionosphere_NeQuickModel_H

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
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScale;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
    namespace frames {
      class TopocentricFrame;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace models {
      namespace earth {
        namespace ionosphere {
          class IonosphericModel;
        }
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          class NeQuickModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a71c45509eaf92d1,
              mid_init$_4c4171e8001c118b,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_pathDelay_d2f5e0e8b7e00e80,
              mid_pathDelay_c84aeff9124fe654,
              mid_stec_e7bdbe1bb960bc0e,
              mid_stec_4b0f268997a4a1b8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NeQuickModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NeQuickModel(const NeQuickModel& obj) : ::java::lang::Object(obj) {}

            NeQuickModel(const JArray< jdouble > &);
            NeQuickModel(const JArray< jdouble > &, const ::org::orekit::time::TimeScale &);

            ::java::util::List getParametersDrivers() const;
            jdouble pathDelay(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::frames::TopocentricFrame &, jdouble, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement pathDelay(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::frames::TopocentricFrame &, jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble stec(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::GeodeticPoint &) const;
            ::org::hipparchus::CalculusFieldElement stec(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::bodies::FieldGeodeticPoint &, const ::org::orekit::bodies::FieldGeodeticPoint &) const;
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
        namespace ionosphere {
          extern PyType_Def PY_TYPE_DEF(NeQuickModel);
          extern PyTypeObject *PY_TYPE(NeQuickModel);

          class t_NeQuickModel {
          public:
            PyObject_HEAD
            NeQuickModel object;
            static PyObject *wrap_Object(const NeQuickModel&);
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
