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
    namespace time {
      class TimeScale;
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class TopocentricFrame;
    }
    namespace bodies {
      class GeodeticPoint;
      class FieldGeodeticPoint;
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
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
              mid_init$_0d03c8a1d7f56f02,
              mid_init$_3a8146127c0aa9ca,
              mid_getParametersDrivers_a6156df500549a58,
              mid_pathDelay_78d4f8498e981bf5,
              mid_pathDelay_c824fdb3e595a2ae,
              mid_pathDelay_eb8eb219f7351702,
              mid_pathDelay_a1a627c36b60b756,
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
