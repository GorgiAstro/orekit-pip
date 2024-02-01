#ifndef org_orekit_files_ccsds_section_Segment_H
#define org_orekit_files_ccsds_section_Segment_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Metadata;
          class Data;
        }
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
    namespace files {
      namespace ccsds {
        namespace section {

          class Segment : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6c1a2ee615847bb0,
              mid_getData_22e854ccc3ba3151,
              mid_getMetadata_3af04d0d4d9a14d0,
              mid_setMetadata_c117834a0067c87c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Segment(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Segment(const Segment& obj) : ::java::lang::Object(obj) {}

            Segment(const ::org::orekit::files::ccsds::section::Metadata &, const ::org::orekit::files::ccsds::section::Data &);

            ::org::orekit::files::ccsds::section::Data getData() const;
            ::org::orekit::files::ccsds::section::Metadata getMetadata() const;
            void setMetadata(const ::org::orekit::files::ccsds::section::Metadata &) const;
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
        namespace section {
          extern PyType_Def PY_TYPE_DEF(Segment);
          extern PyTypeObject *PY_TYPE(Segment);

          class t_Segment {
          public:
            PyObject_HEAD
            Segment object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_Segment *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Segment&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Segment&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
