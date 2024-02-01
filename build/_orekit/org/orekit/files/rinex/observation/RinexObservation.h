#ifndef org_orekit_files_rinex_observation_RinexObservation_H
#define org_orekit_files_rinex_observation_RinexObservation_H

#include "org/orekit/files/rinex/RinexFile.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          class ObservationDataSet;
          class RinexObservationHeader;
        }
      }
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
    namespace files {
      namespace rinex {
        namespace observation {

          class RinexObservation : public ::org::orekit::files::rinex::RinexFile {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_addObservationDataSet_d75e9b743ecf20cb,
              mid_getObservationDataSets_d751c1a57012b438,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexObservation(jobject obj) : ::org::orekit::files::rinex::RinexFile(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexObservation(const RinexObservation& obj) : ::org::orekit::files::rinex::RinexFile(obj) {}

            RinexObservation();

            void addObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationDataSet &) const;
            ::java::util::List getObservationDataSets() const;
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
      namespace rinex {
        namespace observation {
          extern PyType_Def PY_TYPE_DEF(RinexObservation);
          extern PyTypeObject *PY_TYPE(RinexObservation);

          class t_RinexObservation {
          public:
            PyObject_HEAD
            RinexObservation object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_RinexObservation *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const RinexObservation&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const RinexObservation&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
