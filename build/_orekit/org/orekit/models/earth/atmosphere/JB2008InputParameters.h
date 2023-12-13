#ifndef org_orekit_models_earth_atmosphere_JB2008InputParameters_H
#define org_orekit_models_earth_atmosphere_JB2008InputParameters_H

#include "java/io/Serializable.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          class JB2008InputParameters : public ::java::io::Serializable {
           public:
            enum {
              mid_getDSTDTC_fd347811007a6ba3,
              mid_getF10_fd347811007a6ba3,
              mid_getF10B_fd347811007a6ba3,
              mid_getMaxDate_c325492395d89b24,
              mid_getMinDate_c325492395d89b24,
              mid_getS10_fd347811007a6ba3,
              mid_getS10B_fd347811007a6ba3,
              mid_getXM10_fd347811007a6ba3,
              mid_getXM10B_fd347811007a6ba3,
              mid_getY10_fd347811007a6ba3,
              mid_getY10B_fd347811007a6ba3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JB2008InputParameters(jobject obj) : ::java::io::Serializable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JB2008InputParameters(const JB2008InputParameters& obj) : ::java::io::Serializable(obj) {}

            jdouble getDSTDTC(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getF10(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getF10B(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::time::AbsoluteDate getMaxDate() const;
            ::org::orekit::time::AbsoluteDate getMinDate() const;
            jdouble getS10(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getS10B(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getXM10(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getXM10B(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getY10(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getY10B(const ::org::orekit::time::AbsoluteDate &) const;
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
        namespace atmosphere {
          extern PyType_Def PY_TYPE_DEF(JB2008InputParameters);
          extern PyTypeObject *PY_TYPE(JB2008InputParameters);

          class t_JB2008InputParameters {
          public:
            PyObject_HEAD
            JB2008InputParameters object;
            static PyObject *wrap_Object(const JB2008InputParameters&);
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
