#ifndef org_orekit_models_earth_ionosphere_KlobucharIonoModel_H
#define org_orekit_models_earth_ionosphere_KlobucharIonoModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace frames {
      class TopocentricFrame;
    }
    namespace bodies {
      class GeodeticPoint;
      class FieldGeodeticPoint;
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
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScale;
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

          class KlobucharIonoModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e1f4b15468f5564a,
              mid_init$_c9965c971ad94126,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_pathDelay_28325ab4dabb069a,
              mid_pathDelay_bea489d08473aa2e,
              mid_pathDelay_9d8059e615e4302f,
              mid_pathDelay_2787d703045bd2bf,
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
