#ifndef org_hipparchus_stat_descriptive_rank_Percentile$EstimationType_H
#define org_hipparchus_stat_descriptive_rank_Percentile$EstimationType_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class KthSelector;
    }
    namespace stat {
      namespace descriptive {
        namespace rank {
          class Percentile$EstimationType;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          class Percentile$EstimationType : public ::java::lang::Enum {
           public:
            enum {
              mid_evaluate_410ace8c42ca117d,
              mid_valueOf_e716c3c8388eb5c6,
              mid_values_77b1215abe0ed765,
              mid_evaluate_d070edde8081c1de,
              mid_estimate_5a36c9138b3295b6,
              mid_index_156ae9d72f1c8533,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Percentile$EstimationType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Percentile$EstimationType(const Percentile$EstimationType& obj) : ::java::lang::Enum(obj) {}

            static Percentile$EstimationType *LEGACY;
            static Percentile$EstimationType *R_1;
            static Percentile$EstimationType *R_2;
            static Percentile$EstimationType *R_3;
            static Percentile$EstimationType *R_4;
            static Percentile$EstimationType *R_5;
            static Percentile$EstimationType *R_6;
            static Percentile$EstimationType *R_7;
            static Percentile$EstimationType *R_8;
            static Percentile$EstimationType *R_9;

            jdouble evaluate(const JArray< jdouble > &, jdouble, const ::org::hipparchus::util::KthSelector &) const;
            static Percentile$EstimationType valueOf(const ::java::lang::String &);
            static JArray< Percentile$EstimationType > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {
          extern PyType_Def PY_TYPE_DEF(Percentile$EstimationType);
          extern PyTypeObject *PY_TYPE(Percentile$EstimationType);

          class t_Percentile$EstimationType {
          public:
            PyObject_HEAD
            Percentile$EstimationType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Percentile$EstimationType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Percentile$EstimationType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Percentile$EstimationType&, PyTypeObject *);
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
