#ifndef org_orekit_models_earth_ionosphere_KlobucharIonoModel_H
#define org_orekit_models_earth_ionosphere_KlobucharIonoModel_H

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

          class KlobucharIonoModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ab4840ba016ef1da,
              mid_init$_efb1066fada7736f,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_pathDelay_8fbdb07bb0b935f0,
              mid_pathDelay_e09499dc3d690830,
              mid_pathDelay_0adf42b9a5e45618,
              mid_pathDelay_5ede7c721db1b6ab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KlobucharIonoModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KlobucharIonoModel(const KlobucharIonoModel& obj) : ::java::lang::Object(obj) {}

            KlobucharIonoModel(const JArray< jdouble > &, const JArray< jdouble > &);
            KlobucharIonoModel(const JArray< jdouble > &, const JArray< jdouble > &, const ::org::orekit::time::TimeScale &);

            ::java::util::List getParametersDrivers() const;
            ::org::hipparchus::CalculusFieldElement pathDelay(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::frames::TopocentricFrame &, jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble pathDelay(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::frames::TopocentricFrame &, jdouble, const JArray< jdouble > &) const;
            jdouble pathDelay(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::bodies::GeodeticPoint &, jdouble, jdouble, jdouble, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement pathDelay(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::bodies::FieldGeodeticPoint &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
          extern PyType_Def PY_TYPE_DEF(KlobucharIonoModel);
          extern PyTypeObject *PY_TYPE(KlobucharIonoModel);

          class t_KlobucharIonoModel {
          public:
            PyObject_HEAD
            KlobucharIonoModel object;
            static PyObject *wrap_Object(const KlobucharIonoModel&);
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
