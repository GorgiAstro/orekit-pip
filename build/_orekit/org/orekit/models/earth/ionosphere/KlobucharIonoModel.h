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

          class KlobucharIonoModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_64100e41ba74de8f,
              mid_init$_24ca2746f3be6434,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_pathDelay_c84aeff9124fe654,
              mid_pathDelay_d2f5e0e8b7e00e80,
              mid_pathDelay_c3e1ecc00df5a08c,
              mid_pathDelay_090a1c7812c03bfb,
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
