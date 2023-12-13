#ifndef org_orekit_files_ccsds_definitions_Units_H
#define org_orekit_files_ccsds_definitions_Units_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        class Unit;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          class Units : public ::java::lang::Object {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Units(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Units(const Units& obj) : ::java::lang::Object(obj) {}

            static ::org::orekit::utils::units::Unit *DEG_PER_S;
            static ::org::orekit::utils::units::Unit *DEG_PER_S_1_2;
            static ::org::orekit::utils::units::Unit *DEG_PER_S_3_2;
            static ::org::orekit::utils::units::Unit *HECTO_PASCAL;
            static ::org::orekit::utils::units::Unit *HZ_PER_S;
            static ::org::orekit::utils::units::Unit *KG_M2;
            static ::org::orekit::utils::units::Unit *KM2;
            static ::org::orekit::utils::units::Unit *KM2_PER_S;
            static ::org::orekit::utils::units::Unit *KM2_PER_S2;
            static ::org::orekit::utils::units::Unit *KM3_PER_S2;
            static ::org::orekit::utils::units::Unit *KM_PER_S;
            static ::org::orekit::utils::units::Unit *KM_PER_S2;
            static ::org::orekit::utils::units::Unit *M2;
            static ::org::orekit::utils::units::Unit *M2_PER_KG;
            static ::org::orekit::utils::units::Unit *M2_PER_S;
            static ::org::orekit::utils::units::Unit *M2_PER_S2;
            static ::org::orekit::utils::units::Unit *M2_PER_S3;
            static ::org::orekit::utils::units::Unit *M2_PER_S4;
            static ::org::orekit::utils::units::Unit *M3_PER_KG;
            static ::org::orekit::utils::units::Unit *M3_PER_KGS;
            static ::org::orekit::utils::units::Unit *M3_PER_KGS2;
            static ::org::orekit::utils::units::Unit *M4;
            static ::org::orekit::utils::units::Unit *M4_PER_KG;
            static ::org::orekit::utils::units::Unit *M4_PER_KG2;
            static ::org::orekit::utils::units::Unit *M_PER_S;
            static ::org::orekit::utils::units::Unit *M_PER_S2;
            static ::org::orekit::utils::units::Unit *NANO_TESLA;
            static ::org::orekit::utils::units::Unit *NB_PER_Y;
            static ::org::orekit::utils::units::Unit *N_M;
            static ::org::orekit::utils::units::Unit *N_M_S;
            static ::org::orekit::utils::units::Unit *ONE_PER_ER;
            static ::org::orekit::utils::units::Unit *ONE_PER_S;
            static ::org::orekit::utils::units::Unit *REV_PER_DAY;
            static ::org::orekit::utils::units::Unit *REV_PER_DAY2_SCALED;
            static ::org::orekit::utils::units::Unit *REV_PER_DAY3_SCALED;
            static ::org::orekit::utils::units::Unit *W_PER_KG;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          extern PyType_Def PY_TYPE_DEF(Units);
          extern PyTypeObject *PY_TYPE(Units);

          class t_Units {
          public:
            PyObject_HEAD
            Units object;
            static PyObject *wrap_Object(const Units&);
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
