#ifndef org_orekit_gnss_metric_parser_Units_H
#define org_orekit_gnss_metric_parser_Units_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        class Unit;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

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

            static ::org::orekit::utils::units::Unit *KM_PER_S;
            static ::org::orekit::utils::units::Unit *KM_PER_S2;
            static ::org::orekit::utils::units::Unit *MM;
            static ::org::orekit::utils::units::Unit *MM_PER_S;
            static ::org::orekit::utils::units::Unit *MM_PER_S2;
            static ::org::orekit::utils::units::Unit *NS;
            static ::org::orekit::utils::units::Unit *SEMI_CIRCLE;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
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
