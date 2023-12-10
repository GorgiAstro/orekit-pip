#ifndef org_orekit_models_earth_ionosphere_NeQuickModel_H
#define org_orekit_models_earth_ionosphere_NeQuickModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
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
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
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
    namespace models {
      namespace earth {
        namespace ionosphere {

          class NeQuickModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_fa9d415d19f69361,
              mid_init$_544c95b15198d0bf,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_pathDelay_bea489d08473aa2e,
              mid_pathDelay_28325ab4dabb069a,
              mid_stec_d290e0e343b87314,
              mid_stec_1bddb8d30c8be0d0,
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
            ::org::hipparchus::CalculusFieldElement stec(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::bodies::FieldGeodeticPoint &, const ::org::orekit::bodies::FieldGeodeticPoint &) const;
            jdouble stec(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::GeodeticPoint &) const;
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
