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
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace bodies {
      class GeodeticPoint;
      class FieldGeodeticPoint;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace frames {
      class TopocentricFrame;
    }
    namespace models {
      namespace earth {
        namespace ionosphere {
          class IonosphericModel;
        }
      }
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
              mid_init$_cc18240f4a737f14,
              mid_init$_dbb457b725e3379e,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_pathDelay_e09499dc3d690830,
              mid_pathDelay_8fbdb07bb0b935f0,
              mid_stec_680ec225edbd0868,
              mid_stec_65692c27b4e040bd,
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
