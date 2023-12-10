#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmParser::class$ = NULL;
              jmethodID *ApmParser::mids$ = NULL;
              bool ApmParser::live$ = false;

              jclass ApmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_bbe3a1c434f459ae] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Apm;");
                  mids$[mid_finalizeData_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_58c0f76fc10a27f5] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_inData_b108b35ef48e27bd] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_b108b35ef48e27bd] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_b108b35ef48e27bd] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_b108b35ef48e27bd] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Apm ApmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Apm(env->callObjectMethod(this$, mids$[mid_build_bbe3a1c434f459ae]));
              }

              jboolean ApmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_b108b35ef48e27bd]);
              }

              jboolean ApmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_b108b35ef48e27bd]);
              }

              jboolean ApmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_b108b35ef48e27bd]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader ApmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_58c0f76fc10a27f5]));
              }

              jboolean ApmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_b108b35ef48e27bd]);
              }

              jboolean ApmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_b108b35ef48e27bd]);
              }

              jboolean ApmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_b108b35ef48e27bd]);
              }

              jboolean ApmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_b108b35ef48e27bd]);
              }

              jboolean ApmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_b108b35ef48e27bd]);
              }

              jboolean ApmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_b108b35ef48e27bd]);
              }

              void ApmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_e250621f009e45db], a0.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {
              static PyObject *t_ApmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmParser_of_(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_build(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_getHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_reset(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_get__header(t_ApmParser *self, void *data);
              static PyObject *t_ApmParser_get__parameters_(t_ApmParser *self, void *data);
              static PyGetSetDef t_ApmParser__fields_[] = {
                DECLARE_GET_FIELD(t_ApmParser, header),
                DECLARE_GET_FIELD(t_ApmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmParser__methods_[] = {
                DECLARE_METHOD(t_ApmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmParser)[] = {
                { Py_tp_methods, t_ApmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ApmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(ApmParser, t_ApmParser, ApmParser);
              PyObject *t_ApmParser::wrap_Object(const ApmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_ApmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmParser *self = (t_ApmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_ApmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_ApmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmParser *self = (t_ApmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_ApmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmParser), &PY_TYPE_DEF(ApmParser), module, "ApmParser", 0);
              }

              void t_ApmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "class_", make_descriptor(ApmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "wrapfn_", make_descriptor(t_ApmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmParser::initializeClass, 1)))
                  return NULL;
                return t_ApmParser::wrap_Object(ApmParser(((t_ApmParser *) arg)->object.this$));
              }
              static PyObject *t_ApmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmParser_of_(t_ApmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ApmParser_build(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Apm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::apm::t_Apm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_ApmParser_finalizeData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_ApmParser_finalizeHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_ApmParser_finalizeMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_ApmParser_getHeader(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_ApmParser_inData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_ApmParser_inHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_ApmParser_inMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_ApmParser_prepareData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_ApmParser_prepareHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_ApmParser_prepareMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_ApmParser_reset(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_ApmParser_get__parameters_(t_ApmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_ApmParser_get__header(t_ApmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/SearchInterval.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *SearchInterval::class$ = NULL;
        jmethodID *SearchInterval::mids$ = NULL;
        bool SearchInterval::live$ = false;

        jclass SearchInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/SearchInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getMax_dff5885c2c873297] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_dff5885c2c873297] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getStartValue_dff5885c2c873297] = env->getMethodID(cls, "getStartValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SearchInterval::SearchInterval(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        SearchInterval::SearchInterval(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        jdouble SearchInterval::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_dff5885c2c873297]);
        }

        jdouble SearchInterval::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_dff5885c2c873297]);
        }

        jdouble SearchInterval::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_dff5885c2c873297]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        static PyObject *t_SearchInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SearchInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SearchInterval_init_(t_SearchInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SearchInterval_getMax(t_SearchInterval *self);
        static PyObject *t_SearchInterval_getMin(t_SearchInterval *self);
        static PyObject *t_SearchInterval_getStartValue(t_SearchInterval *self);
        static PyObject *t_SearchInterval_get__max(t_SearchInterval *self, void *data);
        static PyObject *t_SearchInterval_get__min(t_SearchInterval *self, void *data);
        static PyObject *t_SearchInterval_get__startValue(t_SearchInterval *self, void *data);
        static PyGetSetDef t_SearchInterval__fields_[] = {
          DECLARE_GET_FIELD(t_SearchInterval, max),
          DECLARE_GET_FIELD(t_SearchInterval, min),
          DECLARE_GET_FIELD(t_SearchInterval, startValue),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SearchInterval__methods_[] = {
          DECLARE_METHOD(t_SearchInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SearchInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SearchInterval, getMax, METH_NOARGS),
          DECLARE_METHOD(t_SearchInterval, getMin, METH_NOARGS),
          DECLARE_METHOD(t_SearchInterval, getStartValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SearchInterval)[] = {
          { Py_tp_methods, t_SearchInterval__methods_ },
          { Py_tp_init, (void *) t_SearchInterval_init_ },
          { Py_tp_getset, t_SearchInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SearchInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SearchInterval, t_SearchInterval, SearchInterval);

        void t_SearchInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(SearchInterval), &PY_TYPE_DEF(SearchInterval), module, "SearchInterval", 0);
        }

        void t_SearchInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "class_", make_descriptor(SearchInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "wrapfn_", make_descriptor(t_SearchInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SearchInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SearchInterval::initializeClass, 1)))
            return NULL;
          return t_SearchInterval::wrap_Object(SearchInterval(((t_SearchInterval *) arg)->object.this$));
        }
        static PyObject *t_SearchInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SearchInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SearchInterval_init_(t_SearchInterval *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SearchInterval object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SearchInterval(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              SearchInterval object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = SearchInterval(a0, a1, a2));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SearchInterval_getMax(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_getMin(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_getStartValue(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_get__max(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SearchInterval_get__min(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SearchInterval_get__startValue(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDParser.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ilrs/CRD.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDParser::class$ = NULL;
        jmethodID *CRDParser::mids$ = NULL;
        bool CRDParser::live$ = false;
        ::java::lang::String *CRDParser::DEFAULT_CRD_SUPPORTED_NAMES = NULL;

        jclass CRDParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_e93d77ad761aa1f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
            mids$[mid_getTimeScale_c39031284193adbe] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
            mids$[mid_parse_7379f847dad0aeed] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ilrs/CRD;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_CRD_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_CRD_SUPPORTED_NAMES", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDParser::CRDParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        CRDParser::CRDParser(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e93d77ad761aa1f2, a0.this$)) {}

        ::org::orekit::time::TimeScale CRDParser::getTimeScale() const
        {
          return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_c39031284193adbe]));
        }

        ::org::orekit::files::ilrs::CRD CRDParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::ilrs::CRD(env->callObjectMethod(this$, mids$[mid_parse_7379f847dad0aeed], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRDParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDParser_init_(t_CRDParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDParser_getTimeScale(t_CRDParser *self);
        static PyObject *t_CRDParser_parse(t_CRDParser *self, PyObject *arg);
        static PyObject *t_CRDParser_get__timeScale(t_CRDParser *self, void *data);
        static PyGetSetDef t_CRDParser__fields_[] = {
          DECLARE_GET_FIELD(t_CRDParser, timeScale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDParser__methods_[] = {
          DECLARE_METHOD(t_CRDParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDParser, getTimeScale, METH_NOARGS),
          DECLARE_METHOD(t_CRDParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDParser)[] = {
          { Py_tp_methods, t_CRDParser__methods_ },
          { Py_tp_init, (void *) t_CRDParser_init_ },
          { Py_tp_getset, t_CRDParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDParser, t_CRDParser, CRDParser);

        void t_CRDParser::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDParser), &PY_TYPE_DEF(CRDParser), module, "CRDParser", 0);
        }

        void t_CRDParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "class_", make_descriptor(CRDParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "wrapfn_", make_descriptor(t_CRDParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRDParser::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "DEFAULT_CRD_SUPPORTED_NAMES", make_descriptor(j2p(*CRDParser::DEFAULT_CRD_SUPPORTED_NAMES)));
        }

        static PyObject *t_CRDParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDParser::initializeClass, 1)))
            return NULL;
          return t_CRDParser::wrap_Object(CRDParser(((t_CRDParser *) arg)->object.this$));
        }
        static PyObject *t_CRDParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDParser_init_(t_CRDParser *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CRDParser object((jobject) NULL);

              INT_CALL(object = CRDParser());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              CRDParser object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = CRDParser(a0));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRDParser_getTimeScale(t_CRDParser *self)
        {
          ::org::orekit::time::TimeScale result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        static PyObject *t_CRDParser_parse(t_CRDParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRD result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::ilrs::t_CRD::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }

        static PyObject *t_CRDParser_get__timeScale(t_CRDParser *self, void *data)
        {
          ::org::orekit::time::TimeScale value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseAbstractUnivariateSolver::class$ = NULL;
        jmethodID *BaseAbstractUnivariateSolver::mids$ = NULL;
        bool BaseAbstractUnivariateSolver::live$ = false;

        jclass BaseAbstractUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getFunctionValueAccuracy", "()D");
            mids$[mid_getMax_dff5885c2c873297] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_dff5885c2c873297] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getRelativeAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_getStartValue_dff5885c2c873297] = env->getMethodID(cls, "getStartValue", "()D");
            mids$[mid_solve_a156b737628248ac] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;D)D");
            mids$[mid_solve_5531acb13e429311] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_136fe8df860928b8] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_incrementEvaluationCount_0fa09c18fee449d5] = env->getMethodID(cls, "incrementEvaluationCount", "()V");
            mids$[mid_verifyInterval_8f2e782d5278b131] = env->getMethodID(cls, "verifyInterval", "(DD)V");
            mids$[mid_computeObjectiveValue_dcbc7ce2902fa136] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");
            mids$[mid_doSolve_dff5885c2c873297] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_verifySequence_2c56b6dd4d4b1dec] = env->getMethodID(cls, "verifySequence", "(DDD)V");
            mids$[mid_verifyBracketing_8f2e782d5278b131] = env->getMethodID(cls, "verifyBracketing", "(DD)V");
            mids$[mid_isBracketing_ff85a0d8ff097ee5] = env->getMethodID(cls, "isBracketing", "(DD)Z");
            mids$[mid_isSequence_01c0c8b0c5f55ddf] = env->getMethodID(cls, "isSequence", "(DDD)Z");
            mids$[mid_setup_57787c1c1c19a92c] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractUnivariateSolver::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_dff5885c2c873297]);
        }

        jint BaseAbstractUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
        }

        jdouble BaseAbstractUnivariateSolver::getFunctionValueAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFunctionValueAccuracy_dff5885c2c873297]);
        }

        jdouble BaseAbstractUnivariateSolver::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_dff5885c2c873297]);
        }

        jdouble BaseAbstractUnivariateSolver::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_dff5885c2c873297]);
        }

        jdouble BaseAbstractUnivariateSolver::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_dff5885c2c873297]);
        }

        jdouble BaseAbstractUnivariateSolver::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_dff5885c2c873297]);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_a156b737628248ac], a0, a1.this$, a2);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_5531acb13e429311], a0, a1.this$, a2, a3);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_136fe8df860928b8], a0, a1.this$, a2, a3, a4);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        static PyObject *t_BaseAbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateSolver_of_(t_BaseAbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateSolver_getAbsoluteAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getEvaluations(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getFunctionValueAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getMax(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getMin(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getRelativeAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getStartValue(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_solve(t_BaseAbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateSolver_get__absoluteAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__evaluations(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__functionValueAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__max(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__min(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__relativeAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__startValue(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__parameters_(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyGetSetDef t_BaseAbstractUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, max),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, min),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, startValue),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getMax, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getMin, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getStartValue, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractUnivariateSolver)[] = {
          { Py_tp_methods, t_BaseAbstractUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractUnivariateSolver, t_BaseAbstractUnivariateSolver, BaseAbstractUnivariateSolver);
        PyObject *t_BaseAbstractUnivariateSolver::wrap_Object(const BaseAbstractUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractUnivariateSolver *self = (t_BaseAbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseAbstractUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractUnivariateSolver *self = (t_BaseAbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseAbstractUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractUnivariateSolver), &PY_TYPE_DEF(BaseAbstractUnivariateSolver), module, "BaseAbstractUnivariateSolver", 0);
        }

        void t_BaseAbstractUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "class_", make_descriptor(BaseAbstractUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "wrapfn_", make_descriptor(t_BaseAbstractUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseAbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractUnivariateSolver::wrap_Object(BaseAbstractUnivariateSolver(((t_BaseAbstractUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractUnivariateSolver_of_(t_BaseAbstractUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getAbsoluteAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getEvaluations(t_BaseAbstractUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getFunctionValueAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getMax(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getMin(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getRelativeAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getStartValue(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_solve(t_BaseAbstractUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "IkD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble result;

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }
        static PyObject *t_BaseAbstractUnivariateSolver_get__parameters_(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__absoluteAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__evaluations(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__functionValueAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__max(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__min(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__relativeAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__startValue(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/Ellipsoid.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/FieldEllipse.h"
#include "org/orekit/bodies/Ellipse.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Ellipsoid::class$ = NULL;
      jmethodID *Ellipsoid::mids$ = NULL;
      bool Ellipsoid::live$ = false;

      jclass Ellipsoid::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Ellipsoid");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a5d66ee321de235c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDD)V");
          mids$[mid_getA_dff5885c2c873297] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getB_dff5885c2c873297] = env->getMethodID(cls, "getB", "()D");
          mids$[mid_getC_dff5885c2c873297] = env->getMethodID(cls, "getC", "()D");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPlaneSection_2e3bc4c6568da5d5] = env->getMethodID(cls, "getPlaneSection", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/bodies/FieldEllipse;");
          mids$[mid_getPlaneSection_dc0ab9a321179f6f] = env->getMethodID(cls, "getPlaneSection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/Ellipse;");
          mids$[mid_isInside_19ce44a30ac2c75e] = env->getMethodID(cls, "isInside", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Z");
          mids$[mid_isInside_ab4ed00ccf0defd6] = env->getMethodID(cls, "isInside", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
          mids$[mid_pointOnLimb_9dc4d243618c0821] = env->getMethodID(cls, "pointOnLimb", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pointOnLimb_e2a27ed5c4e12f6f] = env->getMethodID(cls, "pointOnLimb", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Ellipsoid::Ellipsoid(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a5d66ee321de235c, a0.this$, a1, a2, a3)) {}

      jdouble Ellipsoid::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_dff5885c2c873297]);
      }

      jdouble Ellipsoid::getB() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getB_dff5885c2c873297]);
      }

      jdouble Ellipsoid::getC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getC_dff5885c2c873297]);
      }

      ::org::orekit::frames::Frame Ellipsoid::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::bodies::FieldEllipse Ellipsoid::getPlaneSection(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::orekit::bodies::FieldEllipse(env->callObjectMethod(this$, mids$[mid_getPlaneSection_2e3bc4c6568da5d5], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::Ellipse Ellipsoid::getPlaneSection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::orekit::bodies::Ellipse(env->callObjectMethod(this$, mids$[mid_getPlaneSection_dc0ab9a321179f6f], a0.this$, a1.this$));
      }

      jboolean Ellipsoid::isInside(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInside_19ce44a30ac2c75e], a0.this$);
      }

      jboolean Ellipsoid::isInside(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInside_ab4ed00ccf0defd6], a0.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Ellipsoid::pointOnLimb(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointOnLimb_9dc4d243618c0821], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipsoid::pointOnLimb(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointOnLimb_e2a27ed5c4e12f6f], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_Ellipsoid_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Ellipsoid_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Ellipsoid_init_(t_Ellipsoid *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Ellipsoid_getA(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getB(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getC(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getFrame(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getPlaneSection(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_isInside(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_pointOnLimb(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_get__a(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__b(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__c(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__frame(t_Ellipsoid *self, void *data);
      static PyGetSetDef t_Ellipsoid__fields_[] = {
        DECLARE_GET_FIELD(t_Ellipsoid, a),
        DECLARE_GET_FIELD(t_Ellipsoid, b),
        DECLARE_GET_FIELD(t_Ellipsoid, c),
        DECLARE_GET_FIELD(t_Ellipsoid, frame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Ellipsoid__methods_[] = {
        DECLARE_METHOD(t_Ellipsoid, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipsoid, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipsoid, getA, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getB, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getC, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getPlaneSection, METH_VARARGS),
        DECLARE_METHOD(t_Ellipsoid, isInside, METH_VARARGS),
        DECLARE_METHOD(t_Ellipsoid, pointOnLimb, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Ellipsoid)[] = {
        { Py_tp_methods, t_Ellipsoid__methods_ },
        { Py_tp_init, (void *) t_Ellipsoid_init_ },
        { Py_tp_getset, t_Ellipsoid__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Ellipsoid)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Ellipsoid, t_Ellipsoid, Ellipsoid);

      void t_Ellipsoid::install(PyObject *module)
      {
        installType(&PY_TYPE(Ellipsoid), &PY_TYPE_DEF(Ellipsoid), module, "Ellipsoid", 0);
      }

      void t_Ellipsoid::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "class_", make_descriptor(Ellipsoid::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "wrapfn_", make_descriptor(t_Ellipsoid::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Ellipsoid_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Ellipsoid::initializeClass, 1)))
          return NULL;
        return t_Ellipsoid::wrap_Object(Ellipsoid(((t_Ellipsoid *) arg)->object.this$));
      }
      static PyObject *t_Ellipsoid_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Ellipsoid::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Ellipsoid_init_(t_Ellipsoid *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jdouble a3;
        Ellipsoid object((jobject) NULL);

        if (!parseArgs(args, "kDDD", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = Ellipsoid(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Ellipsoid_getA(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getB(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getB());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getC(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getFrame(t_Ellipsoid *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Ellipsoid_getPlaneSection(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::FieldEllipse result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.getPlaneSection(a0, a1));
              return ::org::orekit::bodies::t_FieldEllipse::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::bodies::Ellipse result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPlaneSection(a0, a1));
              return ::org::orekit::bodies::t_Ellipse::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPlaneSection", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_isInside(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.isInside(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isInside(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "isInside", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_pointOnLimb(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.pointOnLimb(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.pointOnLimb(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pointOnLimb", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_get__a(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__b(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getB());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__c(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getC());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__frame(t_Ellipsoid *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/LeastSquareAdjuster.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *LeastSquareAdjuster::class$ = NULL;
        jmethodID *LeastSquareAdjuster::mids$ = NULL;
        bool LeastSquareAdjuster::live$ = false;

        jclass LeastSquareAdjuster::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/LeastSquareAdjuster");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_63f13867ea40ee93] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/adjustment/OptimizerId;)V");
            mids$[mid_optimize_3488934cadbbcc09] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LeastSquareAdjuster::LeastSquareAdjuster() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        LeastSquareAdjuster::LeastSquareAdjuster(const ::org::orekit::rugged::adjustment::OptimizerId & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_63f13867ea40ee93, a0.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LeastSquareAdjuster::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_3488934cadbbcc09], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        static PyObject *t_LeastSquareAdjuster_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LeastSquareAdjuster_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LeastSquareAdjuster_init_(t_LeastSquareAdjuster *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LeastSquareAdjuster_optimize(t_LeastSquareAdjuster *self, PyObject *arg);

        static PyMethodDef t_LeastSquareAdjuster__methods_[] = {
          DECLARE_METHOD(t_LeastSquareAdjuster, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LeastSquareAdjuster, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LeastSquareAdjuster, optimize, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LeastSquareAdjuster)[] = {
          { Py_tp_methods, t_LeastSquareAdjuster__methods_ },
          { Py_tp_init, (void *) t_LeastSquareAdjuster_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LeastSquareAdjuster)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LeastSquareAdjuster, t_LeastSquareAdjuster, LeastSquareAdjuster);

        void t_LeastSquareAdjuster::install(PyObject *module)
        {
          installType(&PY_TYPE(LeastSquareAdjuster), &PY_TYPE_DEF(LeastSquareAdjuster), module, "LeastSquareAdjuster", 0);
        }

        void t_LeastSquareAdjuster::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "class_", make_descriptor(LeastSquareAdjuster::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "wrapfn_", make_descriptor(t_LeastSquareAdjuster::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LeastSquareAdjuster_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LeastSquareAdjuster::initializeClass, 1)))
            return NULL;
          return t_LeastSquareAdjuster::wrap_Object(LeastSquareAdjuster(((t_LeastSquareAdjuster *) arg)->object.this$));
        }
        static PyObject *t_LeastSquareAdjuster_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LeastSquareAdjuster::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LeastSquareAdjuster_init_(t_LeastSquareAdjuster *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LeastSquareAdjuster object((jobject) NULL);

              INT_CALL(object = LeastSquareAdjuster());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::orekit::rugged::adjustment::OptimizerId a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquareAdjuster object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &a0, &p0, ::org::orekit::rugged::adjustment::t_OptimizerId::parameters_))
              {
                INT_CALL(object = LeastSquareAdjuster(a0));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LeastSquareAdjuster_optimize(t_LeastSquareAdjuster *self, PyObject *arg)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "optimize", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/KolmogorovSmirnovTest.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *KolmogorovSmirnovTest::class$ = NULL;
        jmethodID *KolmogorovSmirnovTest::mids$ = NULL;
        bool KolmogorovSmirnovTest::live$ = false;

        jclass KolmogorovSmirnovTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/KolmogorovSmirnovTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
            mids$[mid_approximateP_7a492dc1edd19b72] = env->getMethodID(cls, "approximateP", "(DII)D");
            mids$[mid_bootstrap_ea13093698ab0faa] = env->getMethodID(cls, "bootstrap", "([D[DI)D");
            mids$[mid_bootstrap_a3e9810f02ff7bb5] = env->getMethodID(cls, "bootstrap", "([D[DIZ)D");
            mids$[mid_cdf_948617e69b66e15d] = env->getMethodID(cls, "cdf", "(DI)D");
            mids$[mid_cdf_648736fa2c0b0c97] = env->getMethodID(cls, "cdf", "(DIZ)D");
            mids$[mid_cdfExact_948617e69b66e15d] = env->getMethodID(cls, "cdfExact", "(DI)D");
            mids$[mid_exactP_7cb31c5b5c5fe800] = env->getMethodID(cls, "exactP", "(DIIZ)D");
            mids$[mid_kolmogorovSmirnovStatistic_b561c6892e9976f8] = env->getMethodID(cls, "kolmogorovSmirnovStatistic", "([D[D)D");
            mids$[mid_kolmogorovSmirnovStatistic_c12bc4bf7b12344d] = env->getMethodID(cls, "kolmogorovSmirnovStatistic", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_b561c6892e9976f8] = env->getMethodID(cls, "kolmogorovSmirnovTest", "([D[D)D");
            mids$[mid_kolmogorovSmirnovTest_c12bc4bf7b12344d] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_c98cc76e0ea0aa4c] = env->getMethodID(cls, "kolmogorovSmirnovTest", "([D[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_9a58ab94185971d6] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_ad738ebacbd28f66] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DD)Z");
            mids$[mid_ksSum_aa604e695a59526c] = env->getMethodID(cls, "ksSum", "(DDI)D");
            mids$[mid_pelzGood_948617e69b66e15d] = env->getMethodID(cls, "pelzGood", "(DI)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KolmogorovSmirnovTest::KolmogorovSmirnovTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        KolmogorovSmirnovTest::KolmogorovSmirnovTest(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

        jdouble KolmogorovSmirnovTest::approximateP(jdouble a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_approximateP_7a492dc1edd19b72], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::bootstrap(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_bootstrap_ea13093698ab0faa], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::bootstrap(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jboolean a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_bootstrap_a3e9810f02ff7bb5], a0.this$, a1.this$, a2, a3);
        }

        jdouble KolmogorovSmirnovTest::cdf(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdf_948617e69b66e15d], a0, a1);
        }

        jdouble KolmogorovSmirnovTest::cdf(jdouble a0, jint a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdf_648736fa2c0b0c97], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::cdfExact(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdfExact_948617e69b66e15d], a0, a1);
        }

        jdouble KolmogorovSmirnovTest::exactP(jdouble a0, jint a1, jint a2, jboolean a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_exactP_7cb31c5b5c5fe800], a0, a1, a2, a3);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovStatistic(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovStatistic_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovStatistic(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovStatistic_c12bc4bf7b12344d], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_c12bc4bf7b12344d], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_c98cc76e0ea0aa4c], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_9a58ab94185971d6], a0.this$, a1.this$, a2);
        }

        jboolean KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_kolmogorovSmirnovTest_ad738ebacbd28f66], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::ksSum(jdouble a0, jdouble a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_ksSum_aa604e695a59526c], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::pelzGood(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pelzGood_948617e69b66e15d], a0, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {
        static PyObject *t_KolmogorovSmirnovTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KolmogorovSmirnovTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KolmogorovSmirnovTest_init_(t_KolmogorovSmirnovTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KolmogorovSmirnovTest_approximateP(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_bootstrap(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_cdf(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_cdfExact(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_exactP(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovStatistic(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovTest(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_ksSum(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_pelzGood(t_KolmogorovSmirnovTest *self, PyObject *args);

        static PyMethodDef t_KolmogorovSmirnovTest__methods_[] = {
          DECLARE_METHOD(t_KolmogorovSmirnovTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, approximateP, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, bootstrap, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, cdf, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, cdfExact, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, exactP, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, kolmogorovSmirnovStatistic, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, kolmogorovSmirnovTest, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, ksSum, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, pelzGood, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KolmogorovSmirnovTest)[] = {
          { Py_tp_methods, t_KolmogorovSmirnovTest__methods_ },
          { Py_tp_init, (void *) t_KolmogorovSmirnovTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KolmogorovSmirnovTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KolmogorovSmirnovTest, t_KolmogorovSmirnovTest, KolmogorovSmirnovTest);

        void t_KolmogorovSmirnovTest::install(PyObject *module)
        {
          installType(&PY_TYPE(KolmogorovSmirnovTest), &PY_TYPE_DEF(KolmogorovSmirnovTest), module, "KolmogorovSmirnovTest", 0);
        }

        void t_KolmogorovSmirnovTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KolmogorovSmirnovTest), "class_", make_descriptor(KolmogorovSmirnovTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KolmogorovSmirnovTest), "wrapfn_", make_descriptor(t_KolmogorovSmirnovTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KolmogorovSmirnovTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KolmogorovSmirnovTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KolmogorovSmirnovTest::initializeClass, 1)))
            return NULL;
          return t_KolmogorovSmirnovTest::wrap_Object(KolmogorovSmirnovTest(((t_KolmogorovSmirnovTest *) arg)->object.this$));
        }
        static PyObject *t_KolmogorovSmirnovTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KolmogorovSmirnovTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KolmogorovSmirnovTest_init_(t_KolmogorovSmirnovTest *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              KolmogorovSmirnovTest object((jobject) NULL);

              INT_CALL(object = KolmogorovSmirnovTest());
              self->object = object;
              break;
            }
           case 1:
            {
              jlong a0;
              KolmogorovSmirnovTest object((jobject) NULL);

              if (!parseArgs(args, "J", &a0))
              {
                INT_CALL(object = KolmogorovSmirnovTest(a0));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_KolmogorovSmirnovTest_approximateP(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.approximateP(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "approximateP", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_bootstrap(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble result;

              if (!parseArgs(args, "[D[DI", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.bootstrap(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jboolean a3;
              jdouble result;

              if (!parseArgs(args, "[D[DIZ", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.bootstrap(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "bootstrap", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_cdf(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                OBJ_CALL(result = self->object.cdf(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              jint a1;
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "DIZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.cdf(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cdf", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_cdfExact(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "DI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.cdfExact(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "cdfExact", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_exactP(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jboolean a3;
          jdouble result;

          if (!parseArgs(args, "DIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.exactP(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "exactP", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovStatistic(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "kolmogorovSmirnovStatistic", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovTest(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "k[DZ", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "k[DD", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "kolmogorovSmirnovTest", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_ksSum(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "DDI", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.ksSum(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "ksSum", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_pelzGood(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "DI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.pelzGood(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "pelzGood", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/PythonFieldAbstractAnalyticalPropagator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonFieldAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *PythonFieldAbstractAnalyticalPropagator::mids$ = NULL;
        bool PythonFieldAbstractAnalyticalPropagator::live$ = false;

        jclass PythonFieldAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonFieldAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_38ba1f88f1fedcab] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMass_2a5f05be83ff251d] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_3de5e0312fd3e848] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetIntermediateState_33f1c56ea7775d4e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractAnalyticalPropagator::PythonFieldAbstractAnalyticalPropagator(const ::org::hipparchus::Field & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_38ba1f88f1fedcab, a0.this$, a1.this$)) {}

        void PythonFieldAbstractAnalyticalPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldAbstractAnalyticalPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldAbstractAnalyticalPropagator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_of_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args);
        static int t_PythonFieldAbstractAnalyticalPropagator_init_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_finalize(t_PythonFieldAbstractAnalyticalPropagator *self);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_pythonExtension(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__self(t_PythonFieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__parameters_(t_PythonFieldAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractAnalyticalPropagator, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractAnalyticalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_PythonFieldAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractAnalyticalPropagator_init_ },
          { Py_tp_getset, t_PythonFieldAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractAnalyticalPropagator, t_PythonFieldAbstractAnalyticalPropagator, PythonFieldAbstractAnalyticalPropagator);
        PyObject *t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(const PythonFieldAbstractAnalyticalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractAnalyticalPropagator *self = (t_PythonFieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractAnalyticalPropagator *self = (t_PythonFieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractAnalyticalPropagator), &PY_TYPE_DEF(PythonFieldAbstractAnalyticalPropagator), module, "PythonFieldAbstractAnalyticalPropagator", 1);
        }

        void t_PythonFieldAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "class_", make_descriptor(PythonFieldAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractAnalyticalPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAbstractAnalyticalPropagator_getMass0 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1 },
            { "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;", (void *) t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3 },
            { "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V", (void *) t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(PythonFieldAbstractAnalyticalPropagator(((t_PythonFieldAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_of_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractAnalyticalPropagator_init_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
          PythonFieldAbstractAnalyticalPropagator object((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            INT_CALL(object = PythonFieldAbstractAnalyticalPropagator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_finalize(t_PythonFieldAbstractAnalyticalPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_pythonExtension(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMass", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("getMass", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getParametersDrivers", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "propagateOrbit", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::FieldOrbit::initializeClass, &value))
          {
            throwTypeError("propagateOrbit", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "resetIntermediateState", "OO", o0, o1);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__self(t_PythonFieldAbstractAnalyticalPropagator *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__parameters_(t_PythonFieldAbstractAnalyticalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSCompiler::class$ = NULL;
        jmethodID *DSCompiler::mids$ = NULL;
        bool DSCompiler::live$ = false;

        jclass DSCompiler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSCompiler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_acos_cc38265e0e7b71aa] = env->getMethodID(cls, "acos", "([DI[DI)V");
            mids$[mid_acos_a1358359a2c264d6] = env->getMethodID(cls, "acos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_acosh_cc38265e0e7b71aa] = env->getMethodID(cls, "acosh", "([DI[DI)V");
            mids$[mid_acosh_a1358359a2c264d6] = env->getMethodID(cls, "acosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_add_8c86bd173466f6ac] = env->getMethodID(cls, "add", "([DI[DI[DI)V");
            mids$[mid_add_427be7eefefa5cbb] = env->getMethodID(cls, "add", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_asin_cc38265e0e7b71aa] = env->getMethodID(cls, "asin", "([DI[DI)V");
            mids$[mid_asin_a1358359a2c264d6] = env->getMethodID(cls, "asin", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_asinh_cc38265e0e7b71aa] = env->getMethodID(cls, "asinh", "([DI[DI)V");
            mids$[mid_asinh_a1358359a2c264d6] = env->getMethodID(cls, "asinh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atan_cc38265e0e7b71aa] = env->getMethodID(cls, "atan", "([DI[DI)V");
            mids$[mid_atan_a1358359a2c264d6] = env->getMethodID(cls, "atan", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atan2_8c86bd173466f6ac] = env->getMethodID(cls, "atan2", "([DI[DI[DI)V");
            mids$[mid_atan2_427be7eefefa5cbb] = env->getMethodID(cls, "atan2", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atanh_cc38265e0e7b71aa] = env->getMethodID(cls, "atanh", "([DI[DI)V");
            mids$[mid_atanh_a1358359a2c264d6] = env->getMethodID(cls, "atanh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_checkCompatibility_ae5be817fafcca99] = env->getMethodID(cls, "checkCompatibility", "(Lorg/hipparchus/analysis/differentiation/DSCompiler;)V");
            mids$[mid_compose_d73d7f15da1647dd] = env->getMethodID(cls, "compose", "([DI[D[DI)V");
            mids$[mid_compose_c5ee0ba6c794cc27] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;I[D[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_compose_718f04e85d39d69e] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_cos_cc38265e0e7b71aa] = env->getMethodID(cls, "cos", "([DI[DI)V");
            mids$[mid_cos_a1358359a2c264d6] = env->getMethodID(cls, "cos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_cosh_cc38265e0e7b71aa] = env->getMethodID(cls, "cosh", "([DI[DI)V");
            mids$[mid_cosh_a1358359a2c264d6] = env->getMethodID(cls, "cosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_divide_8c86bd173466f6ac] = env->getMethodID(cls, "divide", "([DI[DI[DI)V");
            mids$[mid_divide_427be7eefefa5cbb] = env->getMethodID(cls, "divide", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_exp_cc38265e0e7b71aa] = env->getMethodID(cls, "exp", "([DI[DI)V");
            mids$[mid_exp_a1358359a2c264d6] = env->getMethodID(cls, "exp", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_expm1_cc38265e0e7b71aa] = env->getMethodID(cls, "expm1", "([DI[DI)V");
            mids$[mid_expm1_a1358359a2c264d6] = env->getMethodID(cls, "expm1", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_getCompiler_be8e29eee9b22f5c] = env->getStaticMethodID(cls, "getCompiler", "(II)Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getFreeParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivativeIndex_5741cb0fe93805c9] = env->getMethodID(cls, "getPartialDerivativeIndex", "([I)I");
            mids$[mid_getPartialDerivativeOrders_10b428b076a044c1] = env->getMethodID(cls, "getPartialDerivativeOrders", "(I)[I");
            mids$[mid_getPartialDerivativeOrdersSum_2235cd056f5a882b] = env->getMethodID(cls, "getPartialDerivativeOrdersSum", "(I)I");
            mids$[mid_getSize_570ce0828f81a2c1] = env->getMethodID(cls, "getSize", "()I");
            mids$[mid_linearCombination_74e774f8910f870c] = env->getMethodID(cls, "linearCombination", "(D[DID[DI[DI)V");
            mids$[mid_linearCombination_aeb02933e53fd65b] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_de052d7aa8d4078a] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_c70650e89569ecda] = env->getMethodID(cls, "linearCombination", "(D[DID[DID[DI[DI)V");
            mids$[mid_linearCombination_b91c9a90d72398a3] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_c1c14c5ffdc2de48] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_fc21e0e1a78cefa3] = env->getMethodID(cls, "linearCombination", "(D[DID[DID[DID[DI[DI)V");
            mids$[mid_linearCombination_12f6251fffe0a9e0] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_9d6a82f95ec57f16] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log_cc38265e0e7b71aa] = env->getMethodID(cls, "log", "([DI[DI)V");
            mids$[mid_log_a1358359a2c264d6] = env->getMethodID(cls, "log", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log10_cc38265e0e7b71aa] = env->getMethodID(cls, "log10", "([DI[DI)V");
            mids$[mid_log10_a1358359a2c264d6] = env->getMethodID(cls, "log10", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log1p_cc38265e0e7b71aa] = env->getMethodID(cls, "log1p", "([DI[DI)V");
            mids$[mid_log1p_a1358359a2c264d6] = env->getMethodID(cls, "log1p", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_multiply_8c86bd173466f6ac] = env->getMethodID(cls, "multiply", "([DI[DI[DI)V");
            mids$[mid_multiply_427be7eefefa5cbb] = env->getMethodID(cls, "multiply", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_71abb996c0ef59b0] = env->getMethodID(cls, "pow", "(D[DI[DI)V");
            mids$[mid_pow_496cf0524d79fbb0] = env->getMethodID(cls, "pow", "(D[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_94ab6275ac5e9d26] = env->getMethodID(cls, "pow", "([DID[DI)V");
            mids$[mid_pow_38e474cfd967ed64] = env->getMethodID(cls, "pow", "([DII[DI)V");
            mids$[mid_pow_6721532a5ef08209] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_86cb6143b3308931] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;II[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_8c86bd173466f6ac] = env->getMethodID(cls, "pow", "([DI[DI[DI)V");
            mids$[mid_pow_427be7eefefa5cbb] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_rebase_8aaa7f417ac20010] = env->getMethodID(cls, "rebase", "([DILorg/hipparchus/analysis/differentiation/DSCompiler;[D[DI)V");
            mids$[mid_rebase_63f981d0b5c4ecd4] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/analysis/differentiation/DSCompiler;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_reciprocal_cc38265e0e7b71aa] = env->getMethodID(cls, "reciprocal", "([DI[DI)V");
            mids$[mid_reciprocal_a1358359a2c264d6] = env->getMethodID(cls, "reciprocal", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_remainder_8c86bd173466f6ac] = env->getMethodID(cls, "remainder", "([DI[DI[DI)V");
            mids$[mid_remainder_427be7eefefa5cbb] = env->getMethodID(cls, "remainder", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_rootN_38e474cfd967ed64] = env->getMethodID(cls, "rootN", "([DII[DI)V");
            mids$[mid_rootN_86cb6143b3308931] = env->getMethodID(cls, "rootN", "([Lorg/hipparchus/CalculusFieldElement;II[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sin_cc38265e0e7b71aa] = env->getMethodID(cls, "sin", "([DI[DI)V");
            mids$[mid_sin_a1358359a2c264d6] = env->getMethodID(cls, "sin", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinCos_8c86bd173466f6ac] = env->getMethodID(cls, "sinCos", "([DI[DI[DI)V");
            mids$[mid_sinCos_427be7eefefa5cbb] = env->getMethodID(cls, "sinCos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinh_cc38265e0e7b71aa] = env->getMethodID(cls, "sinh", "([DI[DI)V");
            mids$[mid_sinh_a1358359a2c264d6] = env->getMethodID(cls, "sinh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinhCosh_8c86bd173466f6ac] = env->getMethodID(cls, "sinhCosh", "([DI[DI[DI)V");
            mids$[mid_sinhCosh_427be7eefefa5cbb] = env->getMethodID(cls, "sinhCosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sqrt_cc38265e0e7b71aa] = env->getMethodID(cls, "sqrt", "([DI[DI)V");
            mids$[mid_sqrt_a1358359a2c264d6] = env->getMethodID(cls, "sqrt", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_subtract_8c86bd173466f6ac] = env->getMethodID(cls, "subtract", "([DI[DI[DI)V");
            mids$[mid_subtract_427be7eefefa5cbb] = env->getMethodID(cls, "subtract", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_tan_cc38265e0e7b71aa] = env->getMethodID(cls, "tan", "([DI[DI)V");
            mids$[mid_tan_a1358359a2c264d6] = env->getMethodID(cls, "tan", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_tanh_cc38265e0e7b71aa] = env->getMethodID(cls, "tanh", "([DI[DI)V");
            mids$[mid_tanh_a1358359a2c264d6] = env->getMethodID(cls, "tanh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_taylor_f3a6452d39e2d233] = env->getMethodID(cls, "taylor", "([DI[D)D");
            mids$[mid_taylor_71b4d3fb4d9ea57a] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;I[D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_c4ac2a5923687bed] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void DSCompiler::acos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acos_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acos_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acosh_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acosh_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::add(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_add_8c86bd173466f6ac], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::add(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_add_427be7eefefa5cbb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::asin(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asin_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asin(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asin_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asinh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asinh_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asinh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asinh_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atan_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atan_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan2(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_atan2_8c86bd173466f6ac], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::atan2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_atan2_427be7eefefa5cbb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::atanh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atanh_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atanh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atanh_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::checkCompatibility(const DSCompiler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_checkCompatibility_ae5be817fafcca99], a0.this$);
        }

        void DSCompiler::compose(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_d73d7f15da1647dd], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< jdouble > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_c5ee0ba6c794cc27], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_718f04e85d39d69e], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::cos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cos_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cos_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cosh_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cosh_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::divide(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_divide_8c86bd173466f6ac], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::divide(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_divide_427be7eefefa5cbb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::exp(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_exp_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::exp(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_exp_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::expm1(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_expm1_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::expm1(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_expm1_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        DSCompiler DSCompiler::getCompiler(jint a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DSCompiler(env->callStaticObjectMethod(cls, mids$[mid_getCompiler_be8e29eee9b22f5c], a0, a1));
        }

        jint DSCompiler::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_570ce0828f81a2c1]);
        }

        jint DSCompiler::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
        }

        jint DSCompiler::getPartialDerivativeIndex(const JArray< jint > & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getPartialDerivativeIndex_5741cb0fe93805c9], a0.this$);
        }

        JArray< jint > DSCompiler::getPartialDerivativeOrders(jint a0) const
        {
          return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPartialDerivativeOrders_10b428b076a044c1], a0));
        }

        jint DSCompiler::getPartialDerivativeOrdersSum(jint a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getPartialDerivativeOrdersSum_2235cd056f5a882b], a0);
        }

        jint DSCompiler::getSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSize_570ce0828f81a2c1]);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, const JArray< jdouble > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_74e774f8910f870c], a0, a1.this$, a2, a3, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const JArray< ::org::hipparchus::CalculusFieldElement > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_aeb02933e53fd65b], a0, a1.this$, a2, a3, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const JArray< ::org::hipparchus::CalculusFieldElement > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_de052d7aa8d4078a], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, jdouble a6, const JArray< jdouble > & a7, jint a8, const JArray< jdouble > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_c70650e89569ecda], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, jdouble a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const JArray< ::org::hipparchus::CalculusFieldElement > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_b91c9a90d72398a3], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const ::org::hipparchus::CalculusFieldElement & a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const JArray< ::org::hipparchus::CalculusFieldElement > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_c1c14c5ffdc2de48], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, jdouble a6, const JArray< jdouble > & a7, jint a8, jdouble a9, const JArray< jdouble > & a10, jint a11, const JArray< jdouble > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_fc21e0e1a78cefa3], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, jdouble a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, jdouble a9, const JArray< ::org::hipparchus::CalculusFieldElement > & a10, jint a11, const JArray< ::org::hipparchus::CalculusFieldElement > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_12f6251fffe0a9e0], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const ::org::hipparchus::CalculusFieldElement & a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const ::org::hipparchus::CalculusFieldElement & a9, const JArray< ::org::hipparchus::CalculusFieldElement > & a10, jint a11, const JArray< ::org::hipparchus::CalculusFieldElement > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_9d6a82f95ec57f16], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7.this$, a8, a9.this$, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::log(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log10(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log10_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log10(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log10_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log1p(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log1p_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log1p(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log1p_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::multiply(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_multiply_8c86bd173466f6ac], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::multiply(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_multiply_427be7eefefa5cbb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::pow(jdouble a0, const JArray< jdouble > & a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_71abb996c0ef59b0], a0, a1.this$, a2, a3.this$, a4);
        }

        void DSCompiler::pow(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_496cf0524d79fbb0], a0, a1.this$, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, jdouble a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_94ab6275ac5e9d26], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_38e474cfd967ed64], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_6721532a5ef08209], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_86cb6143b3308931], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_8c86bd173466f6ac], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_427be7eefefa5cbb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::rebase(const JArray< jdouble > & a0, jint a1, const DSCompiler & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_rebase_8aaa7f417ac20010], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5);
        }

        void DSCompiler::rebase(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const DSCompiler & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_rebase_63f981d0b5c4ecd4], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5);
        }

        void DSCompiler::reciprocal(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_reciprocal_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::reciprocal(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_reciprocal_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::remainder(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_remainder_8c86bd173466f6ac], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::remainder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_remainder_427be7eefefa5cbb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::rootN(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_rootN_38e474cfd967ed64], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::rootN(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_rootN_86cb6143b3308931], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::sin(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sin_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sin(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sin_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinCos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinCos_8c86bd173466f6ac], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinCos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinCos_427be7eefefa5cbb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sinh_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sinh_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinhCosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinhCosh_8c86bd173466f6ac], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinhCosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinhCosh_427be7eefefa5cbb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sqrt(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sqrt_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sqrt(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sqrt_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::subtract(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_subtract_8c86bd173466f6ac], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::subtract(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_subtract_427be7eefefa5cbb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::tan(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tan_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tan(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tan_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tanh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tanh_cc38265e0e7b71aa], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tanh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tanh_a1358359a2c264d6], a0.this$, a1, a2.this$, a3);
        }

        jdouble DSCompiler::taylor(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_f3a6452d39e2d233], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::CalculusFieldElement DSCompiler::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_71b4d3fb4d9ea57a], a0.this$, a1, a2.this$));
        }

        ::org::hipparchus::CalculusFieldElement DSCompiler::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_c4ac2a5923687bed], a0.this$, a1, a2.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_DSCompiler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSCompiler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSCompiler_acos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_acosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_add(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_asin(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_asinh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atan(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atan2(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atanh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_checkCompatibility(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_compose(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_cos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_cosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_divide(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_exp(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_expm1(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_getCompiler(PyTypeObject *type, PyObject *args);
        static PyObject *t_DSCompiler_getFreeParameters(t_DSCompiler *self);
        static PyObject *t_DSCompiler_getOrder(t_DSCompiler *self);
        static PyObject *t_DSCompiler_getPartialDerivativeIndex(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getPartialDerivativeOrders(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getPartialDerivativeOrdersSum(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getSize(t_DSCompiler *self);
        static PyObject *t_DSCompiler_linearCombination(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log10(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log1p(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_multiply(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_pow(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_rebase(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_reciprocal(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_remainder(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_rootN(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sin(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinCos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinhCosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sqrt(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_subtract(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_tan(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_tanh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_taylor(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_get__freeParameters(t_DSCompiler *self, void *data);
        static PyObject *t_DSCompiler_get__order(t_DSCompiler *self, void *data);
        static PyObject *t_DSCompiler_get__size(t_DSCompiler *self, void *data);
        static PyGetSetDef t_DSCompiler__fields_[] = {
          DECLARE_GET_FIELD(t_DSCompiler, freeParameters),
          DECLARE_GET_FIELD(t_DSCompiler, order),
          DECLARE_GET_FIELD(t_DSCompiler, size),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSCompiler__methods_[] = {
          DECLARE_METHOD(t_DSCompiler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, acos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, acosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, add, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, asin, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, asinh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atan, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atan2, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atanh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, checkCompatibility, METH_O),
          DECLARE_METHOD(t_DSCompiler, compose, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, cos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, cosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, divide, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, exp, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, expm1, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, getCompiler, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeIndex, METH_O),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeOrders, METH_O),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeOrdersSum, METH_O),
          DECLARE_METHOD(t_DSCompiler, getSize, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log10, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log1p, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, multiply, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, pow, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, rebase, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, remainder, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, rootN, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sin, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, subtract, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, tan, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, tanh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, taylor, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSCompiler)[] = {
          { Py_tp_methods, t_DSCompiler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DSCompiler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSCompiler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSCompiler, t_DSCompiler, DSCompiler);

        void t_DSCompiler::install(PyObject *module)
        {
          installType(&PY_TYPE(DSCompiler), &PY_TYPE_DEF(DSCompiler), module, "DSCompiler", 0);
        }

        void t_DSCompiler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "class_", make_descriptor(DSCompiler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "wrapfn_", make_descriptor(t_DSCompiler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSCompiler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSCompiler::initializeClass, 1)))
            return NULL;
          return t_DSCompiler::wrap_Object(DSCompiler(((t_DSCompiler *) arg)->object.this$));
        }
        static PyObject *t_DSCompiler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSCompiler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DSCompiler_acos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.acos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.acos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_acosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.acosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.acosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_add(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.add(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.add(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_asin(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.asin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.asin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "asin", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_asinh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.asinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.asinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "asinh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atan(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.atan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.atan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atan", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atan2(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.atan2(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.atan2(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atanh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.atanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.atanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atanh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_checkCompatibility(t_DSCompiler *self, PyObject *arg)
        {
          DSCompiler a0((jobject) NULL);

          if (!parseArg(arg, "k", DSCompiler::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkCompatibility(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "checkCompatibility", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_compose(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DI[D[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KI[D[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KI[K[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_cos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.cos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.cos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_cosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.cosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.cosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_divide(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.divide(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.divide(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_exp(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.exp(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.exp(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "exp", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_expm1(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.expm1(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.expm1(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "expm1", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_getCompiler(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          DSCompiler result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DSCompiler::getCompiler(a0, a1));
            return t_DSCompiler::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getCompiler", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_getFreeParameters(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_getOrder(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_getPartialDerivativeIndex(t_DSCompiler *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jint result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeIndex", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getPartialDerivativeOrders(t_DSCompiler *self, PyObject *arg)
        {
          jint a0;
          JArray< jint > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeOrders(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeOrders", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getPartialDerivativeOrdersSum(t_DSCompiler *self, PyObject *arg)
        {
          jint a0;
          jint result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeOrdersSum(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeOrdersSum", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getSize(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_linearCombination(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              JArray< jdouble > a6((jobject) NULL);
              jint a7;

              if (!parseArgs(args, "D[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              JArray< ::org::hipparchus::CalculusFieldElement > a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;

              if (!parseArgs(args, "D[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              JArray< ::org::hipparchus::CalculusFieldElement > a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;

              if (!parseArgs(args, "K[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            break;
           case 11:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              jdouble a6;
              JArray< jdouble > a7((jobject) NULL);
              jint a8;
              JArray< jdouble > a9((jobject) NULL);
              jint a10;

              if (!parseArgs(args, "D[DID[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              jdouble a6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              JArray< ::org::hipparchus::CalculusFieldElement > a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;

              if (!parseArgs(args, "D[KID[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              JArray< ::org::hipparchus::CalculusFieldElement > a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;

              if (!parseArgs(args, "K[KIK[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            break;
           case 14:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              jdouble a6;
              JArray< jdouble > a7((jobject) NULL);
              jint a8;
              jdouble a9;
              JArray< jdouble > a10((jobject) NULL);
              jint a11;
              JArray< jdouble > a12((jobject) NULL);
              jint a13;

              if (!parseArgs(args, "D[DID[DID[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              jdouble a6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              jdouble a9;
              JArray< ::org::hipparchus::CalculusFieldElement > a10((jobject) NULL);
              PyTypeObject **p10;
              jint a11;
              JArray< ::org::hipparchus::CalculusFieldElement > a12((jobject) NULL);
              PyTypeObject **p12;
              jint a13;

              if (!parseArgs(args, "D[KID[KID[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
              PyTypeObject **p9;
              JArray< ::org::hipparchus::CalculusFieldElement > a10((jobject) NULL);
              PyTypeObject **p10;
              jint a11;
              JArray< ::org::hipparchus::CalculusFieldElement > a12((jobject) NULL);
              PyTypeObject **p12;
              jint a13;

              if (!parseArgs(args, "K[KIK[KIK[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log10(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log10(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log10(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log10", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log1p(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log1p(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log1p(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log1p", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_multiply(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.multiply(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.multiply(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_pow(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DID[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KID[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DII[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KII[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "D[DI[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "D[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            break;
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_rebase(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              DSCompiler a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DIk[D[DI", DSCompiler::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.rebase(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              DSCompiler a2((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KIk[K[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, DSCompiler::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.rebase(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_reciprocal(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.reciprocal(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.reciprocal(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "reciprocal", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_remainder(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.remainder(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.remainder(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_rootN(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DII[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.rootN(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KII[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.rootN(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sin(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sin", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinCos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.sinCos(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.sinCos(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinCos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinhCosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.sinhCosh(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.sinhCosh(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinhCosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sqrt(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sqrt(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sqrt(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sqrt", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_subtract(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.subtract(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.subtract(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_tan(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.tan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.tan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tan", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_tanh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.tanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.tanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tanh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_taylor(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[DI[D", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[KI[D", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[KI[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_get__freeParameters(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DSCompiler_get__order(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DSCompiler_get__size(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/PythonILRSHeader.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *PythonILRSHeader::class$ = NULL;
        jmethodID *PythonILRSHeader::mids$ = NULL;
        bool PythonILRSHeader::live$ = false;

        jclass PythonILRSHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/PythonILRSHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonILRSHeader::PythonILRSHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonILRSHeader::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonILRSHeader::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonILRSHeader::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_PythonILRSHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonILRSHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonILRSHeader_init_(t_PythonILRSHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonILRSHeader_finalize(t_PythonILRSHeader *self);
        static PyObject *t_PythonILRSHeader_pythonExtension(t_PythonILRSHeader *self, PyObject *args);
        static void JNICALL t_PythonILRSHeader_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonILRSHeader_get__self(t_PythonILRSHeader *self, void *data);
        static PyGetSetDef t_PythonILRSHeader__fields_[] = {
          DECLARE_GET_FIELD(t_PythonILRSHeader, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonILRSHeader__methods_[] = {
          DECLARE_METHOD(t_PythonILRSHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonILRSHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonILRSHeader, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonILRSHeader, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonILRSHeader)[] = {
          { Py_tp_methods, t_PythonILRSHeader__methods_ },
          { Py_tp_init, (void *) t_PythonILRSHeader_init_ },
          { Py_tp_getset, t_PythonILRSHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonILRSHeader)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::ILRSHeader),
          NULL
        };

        DEFINE_TYPE(PythonILRSHeader, t_PythonILRSHeader, PythonILRSHeader);

        void t_PythonILRSHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonILRSHeader), &PY_TYPE_DEF(PythonILRSHeader), module, "PythonILRSHeader", 1);
        }

        void t_PythonILRSHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "class_", make_descriptor(PythonILRSHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "wrapfn_", make_descriptor(t_PythonILRSHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonILRSHeader::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonILRSHeader_pythonDecRef0 },
          };
          env->registerNatives(cls, methods, 1);
        }

        static PyObject *t_PythonILRSHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonILRSHeader::initializeClass, 1)))
            return NULL;
          return t_PythonILRSHeader::wrap_Object(PythonILRSHeader(((t_PythonILRSHeader *) arg)->object.this$));
        }
        static PyObject *t_PythonILRSHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonILRSHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonILRSHeader_init_(t_PythonILRSHeader *self, PyObject *args, PyObject *kwds)
        {
          PythonILRSHeader object((jobject) NULL);

          INT_CALL(object = PythonILRSHeader());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonILRSHeader_finalize(t_PythonILRSHeader *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonILRSHeader_pythonExtension(t_PythonILRSHeader *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static void JNICALL t_PythonILRSHeader_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonILRSHeader::mids$[PythonILRSHeader::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonILRSHeader::mids$[PythonILRSHeader::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonILRSHeader_get__self(t_PythonILRSHeader *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/PythonAbstractWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PythonAbstractWriter::class$ = NULL;
          jmethodID *PythonAbstractWriter::mids$ = NULL;
          bool PythonAbstractWriter::live$ = false;

          jclass PythonAbstractWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PythonAbstractWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6a2001eff0605f71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_intArrayToString_73683ad393ccda19] = env->getMethodID(cls, "intArrayToString", "([I)Ljava/lang/String;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_writeContent_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractWriter::PythonAbstractWriter(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_6a2001eff0605f71, a0.this$, a1.this$)) {}

          void PythonAbstractWriter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          ::java::lang::String PythonAbstractWriter::intArrayToString(const JArray< jint > & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_intArrayToString_73683ad393ccda19], a0.this$));
          }

          jlong PythonAbstractWriter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAbstractWriter::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_PythonAbstractWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractWriter_init_(t_PythonAbstractWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractWriter_finalize(t_PythonAbstractWriter *self);
          static PyObject *t_PythonAbstractWriter_intArrayToString(t_PythonAbstractWriter *self, PyObject *arg);
          static PyObject *t_PythonAbstractWriter_pythonExtension(t_PythonAbstractWriter *self, PyObject *args);
          static void JNICALL t_PythonAbstractWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractWriter_writeContent1(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonAbstractWriter_get__self(t_PythonAbstractWriter *self, void *data);
          static PyGetSetDef t_PythonAbstractWriter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractWriter, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractWriter__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWriter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractWriter, intArrayToString, METH_O),
            DECLARE_METHOD(t_PythonAbstractWriter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractWriter)[] = {
            { Py_tp_methods, t_PythonAbstractWriter__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractWriter_init_ },
            { Py_tp_getset, t_PythonAbstractWriter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractWriter)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
            NULL
          };

          DEFINE_TYPE(PythonAbstractWriter, t_PythonAbstractWriter, PythonAbstractWriter);

          void t_PythonAbstractWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractWriter), &PY_TYPE_DEF(PythonAbstractWriter), module, "PythonAbstractWriter", 1);
          }

          void t_PythonAbstractWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "class_", make_descriptor(PythonAbstractWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "wrapfn_", make_descriptor(t_PythonAbstractWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractWriter::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonAbstractWriter_pythonDecRef0 },
              { "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V", (void *) t_PythonAbstractWriter_writeContent1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractWriter::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractWriter::wrap_Object(PythonAbstractWriter(((t_PythonAbstractWriter *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractWriter_init_(t_PythonAbstractWriter *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            PythonAbstractWriter object((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              INT_CALL(object = PythonAbstractWriter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractWriter_finalize(t_PythonAbstractWriter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractWriter_intArrayToString(t_PythonAbstractWriter *self, PyObject *arg)
          {
            JArray< jint > a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "[I", &a0))
            {
              OBJ_CALL(result = self->object.intArrayToString(a0));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intArrayToString", arg);
            return NULL;
          }

          static PyObject *t_PythonAbstractWriter_pythonExtension(t_PythonAbstractWriter *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static void JNICALL t_PythonAbstractWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonAbstractWriter_writeContent1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
            PyObject *result = PyObject_CallMethod(obj, "writeContent", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonAbstractWriter_get__self(t_PythonAbstractWriter *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer.h"
#include "java/lang/String.h"
#include "java/lang/Exception.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken::class$ = NULL;
            jmethodID *ParseToken::mids$ = NULL;
            bool ParseToken::live$ = false;

            jclass ParseToken::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d6bac7905c736ea0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/lexical/TokenType;Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;ILjava/lang/String;)V");
                mids$[mid_generateException_d052fc9cf6f5844b] = env->getMethodID(cls, "generateException", "(Ljava/lang/Exception;)Lorg/orekit/errors/OrekitException;");
                mids$[mid_getContentAsBoolean_b108b35ef48e27bd] = env->getMethodID(cls, "getContentAsBoolean", "()Z");
                mids$[mid_getContentAsDouble_dff5885c2c873297] = env->getMethodID(cls, "getContentAsDouble", "()D");
                mids$[mid_getContentAsEnum_89daf5756b979a3f] = env->getMethodID(cls, "getContentAsEnum", "(Ljava/lang/Class;)Ljava/lang/Enum;");
                mids$[mid_getContentAsEnumList_401ab1d38e454dea] = env->getMethodID(cls, "getContentAsEnumList", "(Ljava/lang/Class;)Ljava/util/List;");
                mids$[mid_getContentAsFreeTextList_2afa36052df4765d] = env->getMethodID(cls, "getContentAsFreeTextList", "()Ljava/util/List;");
                mids$[mid_getContentAsInt_570ce0828f81a2c1] = env->getMethodID(cls, "getContentAsInt", "()I");
                mids$[mid_getContentAsNormalizedList_2afa36052df4765d] = env->getMethodID(cls, "getContentAsNormalizedList", "()Ljava/util/List;");
                mids$[mid_getContentAsNormalizedString_11b109bd155ca898] = env->getMethodID(cls, "getContentAsNormalizedString", "()Ljava/lang/String;");
                mids$[mid_getContentAsUppercaseCharacter_7818f5b58320cd1f] = env->getMethodID(cls, "getContentAsUppercaseCharacter", "()C");
                mids$[mid_getContentAsUppercaseList_2afa36052df4765d] = env->getMethodID(cls, "getContentAsUppercaseList", "()Ljava/util/List;");
                mids$[mid_getContentAsUppercaseString_11b109bd155ca898] = env->getMethodID(cls, "getContentAsUppercaseString", "()Ljava/lang/String;");
                mids$[mid_getContentAsVector_d52645e0d4c07563] = env->getMethodID(cls, "getContentAsVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getFileName_11b109bd155ca898] = env->getMethodID(cls, "getFileName", "()Ljava/lang/String;");
                mids$[mid_getLineNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getLineNumber", "()I");
                mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                mids$[mid_getRawContent_11b109bd155ca898] = env->getMethodID(cls, "getRawContent", "()Ljava/lang/String;");
                mids$[mid_getType_84d7c9fbe413a208] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/utils/lexical/TokenType;");
                mids$[mid_getUnits_de9b417ee3c58e2e] = env->getMethodID(cls, "getUnits", "()Lorg/orekit/utils/units/Unit;");
                mids$[mid_processAsBoolean_c2c10107b59698d5] = env->getMethodID(cls, "processAsBoolean", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer;)Z");
                mids$[mid_processAsCenter_352f4165a1e45953] = env->getMethodID(cls, "processAsCenter", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer;Lorg/orekit/bodies/CelestialBodies;)Z");
                mids$[mid_processAsCenterList_a2dd64d160e0f13e] = env->getMethodID(cls, "processAsCenterList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer;Lorg/orekit/bodies/CelestialBodies;)Z");
                mids$[mid_processAsDate_76d464c871c16041] = env->getMethodID(cls, "processAsDate", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer;Lorg/orekit/files/ccsds/utils/ContextBinding;)Z");
                mids$[mid_processAsDouble_201f9d905574e3a2] = env->getMethodID(cls, "processAsDouble", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer;)Z");
                mids$[mid_processAsDoubleArray_012305b3ff51003c] = env->getMethodID(cls, "processAsDoubleArray", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer;)Z");
                mids$[mid_processAsDoublyIndexedDouble_78a4e84495ab71c3] = env->getMethodID(cls, "processAsDoublyIndexedDouble", "(IILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer;)Z");
                mids$[mid_processAsEnum_9b51427b2a1ad0a2] = env->getMethodID(cls, "processAsEnum", "(Ljava/lang/Class;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer;)Z");
                mids$[mid_processAsEnumsList_45bd0996d10efd47] = env->getMethodID(cls, "processAsEnumsList", "(Ljava/lang/Class;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer;)Z");
                mids$[mid_processAsFrame_7569c8bd7ef6fdc7] = env->getMethodID(cls, "processAsFrame", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer;Lorg/orekit/files/ccsds/utils/ContextBinding;ZZZ)Z");
                mids$[mid_processAsFreeTextList_a4664731e55cc9af] = env->getMethodID(cls, "processAsFreeTextList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsFreeTextString_d8110a3cc7ddda8f] = env->getMethodID(cls, "processAsFreeTextString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsIndexedDouble_479c08756527d591] = env->getMethodID(cls, "processAsIndexedDouble", "(ILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer;)Z");
                mids$[mid_processAsIndexedDoubleArray_19480f93fda2b359] = env->getMethodID(cls, "processAsIndexedDoubleArray", "(ILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer;)Z");
                mids$[mid_processAsIndexedInteger_4b846c49ebb63cb4] = env->getMethodID(cls, "processAsIndexedInteger", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer;)Z");
                mids$[mid_processAsIndexedNormalizedString_45ac2a2650da570c] = env->getMethodID(cls, "processAsIndexedNormalizedString", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer;)Z");
                mids$[mid_processAsIndexedUppercaseString_45ac2a2650da570c] = env->getMethodID(cls, "processAsIndexedUppercaseString", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer;)Z");
                mids$[mid_processAsInteger_bbe476ce7115f272] = env->getMethodID(cls, "processAsInteger", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer;)Z");
                mids$[mid_processAsIntegerArray_b7a107ccd4f2c011] = env->getMethodID(cls, "processAsIntegerArray", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer;)Z");
                mids$[mid_processAsIntegerArrayNoSpace_b7a107ccd4f2c011] = env->getMethodID(cls, "processAsIntegerArrayNoSpace", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer;)Z");
                mids$[mid_processAsLabeledDouble_aeee2cf6113b76da] = env->getMethodID(cls, "processAsLabeledDouble", "(CLorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer;)Z");
                mids$[mid_processAsManeuvrableEnum_32fd44666c823152] = env->getMethodID(cls, "processAsManeuvrableEnum", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer;)Z");
                mids$[mid_processAsNormalizedCharacter_29e78e5a30fb3f2a] = env->getMethodID(cls, "processAsNormalizedCharacter", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer;)Z");
                mids$[mid_processAsNormalizedList_a4664731e55cc9af] = env->getMethodID(cls, "processAsNormalizedList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsNormalizedString_d8110a3cc7ddda8f] = env->getMethodID(cls, "processAsNormalizedString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsRotationOrder_861ca68cd0c7f23b] = env->getMethodID(cls, "processAsRotationOrder", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer;)Z");
                mids$[mid_processAsTimeSystem_51c4604197116207] = env->getMethodID(cls, "processAsTimeSystem", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer;)Z");
                mids$[mid_processAsUnitList_bd5fce894855dad0] = env->getMethodID(cls, "processAsUnitList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer;)Z");
                mids$[mid_processAsUppercaseList_a4664731e55cc9af] = env->getMethodID(cls, "processAsUppercaseList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsUppercaseString_d8110a3cc7ddda8f] = env->getMethodID(cls, "processAsUppercaseString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsVector_793c8cdd146b2013] = env->getMethodID(cls, "processAsVector", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ParseToken::ParseToken(const ::org::orekit::files::ccsds::utils::lexical::TokenType & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::org::orekit::utils::units::Unit & a3, jint a4, const ::java::lang::String & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d6bac7905c736ea0, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

            ::org::orekit::errors::OrekitException ParseToken::generateException(const ::java::lang::Exception & a0) const
            {
              return ::org::orekit::errors::OrekitException(env->callObjectMethod(this$, mids$[mid_generateException_d052fc9cf6f5844b], a0.this$));
            }

            jboolean ParseToken::getContentAsBoolean() const
            {
              return env->callBooleanMethod(this$, mids$[mid_getContentAsBoolean_b108b35ef48e27bd]);
            }

            jdouble ParseToken::getContentAsDouble() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getContentAsDouble_dff5885c2c873297]);
            }

            ::java::lang::Enum ParseToken::getContentAsEnum(const ::java::lang::Class & a0) const
            {
              return ::java::lang::Enum(env->callObjectMethod(this$, mids$[mid_getContentAsEnum_89daf5756b979a3f], a0.this$));
            }

            ::java::util::List ParseToken::getContentAsEnumList(const ::java::lang::Class & a0) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsEnumList_401ab1d38e454dea], a0.this$));
            }

            ::java::util::List ParseToken::getContentAsFreeTextList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsFreeTextList_2afa36052df4765d]));
            }

            jint ParseToken::getContentAsInt() const
            {
              return env->callIntMethod(this$, mids$[mid_getContentAsInt_570ce0828f81a2c1]);
            }

            ::java::util::List ParseToken::getContentAsNormalizedList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsNormalizedList_2afa36052df4765d]));
            }

            ::java::lang::String ParseToken::getContentAsNormalizedString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getContentAsNormalizedString_11b109bd155ca898]));
            }

            jchar ParseToken::getContentAsUppercaseCharacter() const
            {
              return env->callCharMethod(this$, mids$[mid_getContentAsUppercaseCharacter_7818f5b58320cd1f]);
            }

            ::java::util::List ParseToken::getContentAsUppercaseList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsUppercaseList_2afa36052df4765d]));
            }

            ::java::lang::String ParseToken::getContentAsUppercaseString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getContentAsUppercaseString_11b109bd155ca898]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D ParseToken::getContentAsVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getContentAsVector_d52645e0d4c07563]));
            }

            ::java::lang::String ParseToken::getFileName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFileName_11b109bd155ca898]));
            }

            jint ParseToken::getLineNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLineNumber_570ce0828f81a2c1]);
            }

            ::java::lang::String ParseToken::getName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
            }

            ::java::lang::String ParseToken::getRawContent() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRawContent_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::utils::lexical::TokenType ParseToken::getType() const
            {
              return ::org::orekit::files::ccsds::utils::lexical::TokenType(env->callObjectMethod(this$, mids$[mid_getType_84d7c9fbe413a208]));
            }

            ::org::orekit::utils::units::Unit ParseToken::getUnits() const
            {
              return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnits_de9b417ee3c58e2e]));
            }

            jboolean ParseToken::processAsBoolean(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsBoolean_c2c10107b59698d5], a0.this$);
            }

            jboolean ParseToken::processAsCenter(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer & a0, const ::org::orekit::bodies::CelestialBodies & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsCenter_352f4165a1e45953], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsCenterList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer & a0, const ::org::orekit::bodies::CelestialBodies & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsCenterList_a2dd64d160e0f13e], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsDate(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDate_76d464c871c16041], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsDouble(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDouble_201f9d905574e3a2], a0.this$, a1.this$, a2.this$);
            }

            jboolean ParseToken::processAsDoubleArray(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDoubleArray_012305b3ff51003c], a0.this$, a1.this$, a2.this$);
            }

            jboolean ParseToken::processAsDoublyIndexedDouble(jint a0, jint a1, const ::org::orekit::utils::units::Unit & a2, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a3, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer & a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDoublyIndexedDouble_78a4e84495ab71c3], a0, a1, a2.this$, a3.this$, a4.this$);
            }

            jboolean ParseToken::processAsEnum(const ::java::lang::Class & a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsEnum_9b51427b2a1ad0a2], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsEnumsList(const ::java::lang::Class & a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsEnumsList_45bd0996d10efd47], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsFrame(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, jboolean a2, jboolean a3, jboolean a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFrame_7569c8bd7ef6fdc7], a0.this$, a1.this$, a2, a3, a4);
            }

            jboolean ParseToken::processAsFreeTextList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFreeTextList_a4664731e55cc9af], a0.this$);
            }

            jboolean ParseToken::processAsFreeTextString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFreeTextString_d8110a3cc7ddda8f], a0.this$);
            }

            jboolean ParseToken::processAsIndexedDouble(jint a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedDouble_479c08756527d591], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsIndexedDoubleArray(jint a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedDoubleArray_19480f93fda2b359], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsIndexedInteger(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedInteger_4b846c49ebb63cb4], a0, a1.this$);
            }

            jboolean ParseToken::processAsIndexedNormalizedString(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedNormalizedString_45ac2a2650da570c], a0, a1.this$);
            }

            jboolean ParseToken::processAsIndexedUppercaseString(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedUppercaseString_45ac2a2650da570c], a0, a1.this$);
            }

            jboolean ParseToken::processAsInteger(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsInteger_bbe476ce7115f272], a0.this$);
            }

            jboolean ParseToken::processAsIntegerArray(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIntegerArray_b7a107ccd4f2c011], a0.this$);
            }

            jboolean ParseToken::processAsIntegerArrayNoSpace(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIntegerArrayNoSpace_b7a107ccd4f2c011], a0.this$);
            }

            jboolean ParseToken::processAsLabeledDouble(jchar a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsLabeledDouble_aeee2cf6113b76da], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsManeuvrableEnum(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsManeuvrableEnum_32fd44666c823152], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedCharacter(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedCharacter_29e78e5a30fb3f2a], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedList_a4664731e55cc9af], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedString_d8110a3cc7ddda8f], a0.this$);
            }

            jboolean ParseToken::processAsRotationOrder(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsRotationOrder_861ca68cd0c7f23b], a0.this$);
            }

            jboolean ParseToken::processAsTimeSystem(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsTimeSystem_51c4604197116207], a0.this$);
            }

            jboolean ParseToken::processAsUnitList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUnitList_bd5fce894855dad0], a0.this$);
            }

            jboolean ParseToken::processAsUppercaseList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUppercaseList_a4664731e55cc9af], a0.this$);
            }

            jboolean ParseToken::processAsUppercaseString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUppercaseString_d8110a3cc7ddda8f], a0.this$);
            }

            jboolean ParseToken::processAsVector(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsVector_793c8cdd146b2013], a0.this$, a1.this$, a2.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ParseToken_init_(t_ParseToken *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ParseToken_generateException(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_getContentAsBoolean(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsDouble(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsEnum(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_getContentAsEnumList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_getContentAsFreeTextList(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsInt(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsNormalizedList(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsNormalizedString(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsUppercaseCharacter(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsUppercaseList(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsUppercaseString(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsVector(t_ParseToken *self);
            static PyObject *t_ParseToken_getFileName(t_ParseToken *self);
            static PyObject *t_ParseToken_getLineNumber(t_ParseToken *self);
            static PyObject *t_ParseToken_getName(t_ParseToken *self);
            static PyObject *t_ParseToken_getRawContent(t_ParseToken *self);
            static PyObject *t_ParseToken_getType(t_ParseToken *self);
            static PyObject *t_ParseToken_getUnits(t_ParseToken *self);
            static PyObject *t_ParseToken_processAsBoolean(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsCenter(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsCenterList(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDate(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDoubleArray(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDoublyIndexedDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsEnum(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsEnumsList(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsFrame(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsFreeTextList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsFreeTextString(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsIndexedDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedDoubleArray(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedInteger(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedNormalizedString(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedUppercaseString(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsInteger(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsIntegerArray(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsIntegerArrayNoSpace(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsLabeledDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsManeuvrableEnum(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsNormalizedCharacter(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsNormalizedList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsNormalizedString(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsRotationOrder(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsTimeSystem(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsUnitList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsUppercaseList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsUppercaseString(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsVector(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_get__contentAsBoolean(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsDouble(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsFreeTextList(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsInt(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsNormalizedList(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsNormalizedString(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsUppercaseCharacter(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsUppercaseList(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsUppercaseString(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsVector(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__fileName(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__lineNumber(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__name(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__rawContent(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__type(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__units(t_ParseToken *self, void *data);
            static PyGetSetDef t_ParseToken__fields_[] = {
              DECLARE_GET_FIELD(t_ParseToken, contentAsBoolean),
              DECLARE_GET_FIELD(t_ParseToken, contentAsDouble),
              DECLARE_GET_FIELD(t_ParseToken, contentAsFreeTextList),
              DECLARE_GET_FIELD(t_ParseToken, contentAsInt),
              DECLARE_GET_FIELD(t_ParseToken, contentAsNormalizedList),
              DECLARE_GET_FIELD(t_ParseToken, contentAsNormalizedString),
              DECLARE_GET_FIELD(t_ParseToken, contentAsUppercaseCharacter),
              DECLARE_GET_FIELD(t_ParseToken, contentAsUppercaseList),
              DECLARE_GET_FIELD(t_ParseToken, contentAsUppercaseString),
              DECLARE_GET_FIELD(t_ParseToken, contentAsVector),
              DECLARE_GET_FIELD(t_ParseToken, fileName),
              DECLARE_GET_FIELD(t_ParseToken, lineNumber),
              DECLARE_GET_FIELD(t_ParseToken, name),
              DECLARE_GET_FIELD(t_ParseToken, rawContent),
              DECLARE_GET_FIELD(t_ParseToken, type),
              DECLARE_GET_FIELD(t_ParseToken, units),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ParseToken__methods_[] = {
              DECLARE_METHOD(t_ParseToken, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken, generateException, METH_O),
              DECLARE_METHOD(t_ParseToken, getContentAsBoolean, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsDouble, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsEnum, METH_O),
              DECLARE_METHOD(t_ParseToken, getContentAsEnumList, METH_O),
              DECLARE_METHOD(t_ParseToken, getContentAsFreeTextList, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsInt, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsNormalizedList, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsNormalizedString, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsUppercaseCharacter, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsUppercaseList, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsUppercaseString, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsVector, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getFileName, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getLineNumber, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getName, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getRawContent, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getType, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getUnits, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, processAsBoolean, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsCenter, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsCenterList, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDate, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDoubleArray, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDoublyIndexedDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsEnum, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsEnumsList, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsFrame, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsFreeTextList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsFreeTextString, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsIndexedDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedDoubleArray, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedInteger, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedNormalizedString, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedUppercaseString, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsInteger, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsIntegerArray, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsIntegerArrayNoSpace, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsLabeledDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsManeuvrableEnum, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsNormalizedCharacter, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsNormalizedList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsNormalizedString, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsRotationOrder, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsTimeSystem, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsUnitList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsUppercaseList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsUppercaseString, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsVector, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken)[] = {
              { Py_tp_methods, t_ParseToken__methods_ },
              { Py_tp_init, (void *) t_ParseToken_init_ },
              { Py_tp_getset, t_ParseToken__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken, t_ParseToken, ParseToken);

            void t_ParseToken::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken), &PY_TYPE_DEF(ParseToken), module, "ParseToken", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "StringConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$StringConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedStringConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedStringConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "StringListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$StringListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "EnumConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$EnumConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "EnumListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$EnumListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "BooleanConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$BooleanConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IntConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IntConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedIntConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedIntConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IntegerArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IntegerArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CharConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CharConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "LabeledDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$LabeledDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoublyIndexedDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoublyIndexedDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoubleArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoubleArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedDoubleArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedDoubleArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "VectorConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$VectorConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DateConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DateConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "TimeSystemConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$TimeSystemConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "FrameConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$FrameConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CenterConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CenterConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CenterListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CenterListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "RotationOrderConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$RotationOrderConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "UnitListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$UnitListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "ManeuvrableConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$ManeuvrableConsumer)));
            }

            void t_ParseToken::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "class_", make_descriptor(ParseToken::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "wrapfn_", make_descriptor(t_ParseToken::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken::initializeClass, 1)))
                return NULL;
              return t_ParseToken::wrap_Object(ParseToken(((t_ParseToken *) arg)->object.this$));
            }
            static PyObject *t_ParseToken_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ParseToken_init_(t_ParseToken *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::utils::lexical::TokenType a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::java::lang::String a2((jobject) NULL);
              ::org::orekit::utils::units::Unit a3((jobject) NULL);
              jint a4;
              ::java::lang::String a5((jobject) NULL);
              ParseToken object((jobject) NULL);

              if (!parseArgs(args, "KsskIs", ::org::orekit::files::ccsds::utils::lexical::TokenType::initializeClass, ::org::orekit::utils::units::Unit::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_TokenType::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ParseToken(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ParseToken_generateException(t_ParseToken *self, PyObject *arg)
            {
              ::java::lang::Exception a0((jobject) NULL);
              ::org::orekit::errors::OrekitException result((jobject) NULL);

              if (!parseArg(arg, "k", ::java::lang::Exception::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.generateException(a0));
                return ::org::orekit::errors::t_OrekitException::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "generateException", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_getContentAsBoolean(t_ParseToken *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.getContentAsBoolean());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_ParseToken_getContentAsDouble(t_ParseToken *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getContentAsDouble());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ParseToken_getContentAsEnum(t_ParseToken *self, PyObject *arg)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Enum result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
              {
                OBJ_CALL(result = self->object.getContentAsEnum(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Enum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getContentAsEnum", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_getContentAsEnumList(t_ParseToken *self, PyObject *arg)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::List result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
              {
                OBJ_CALL(result = self->object.getContentAsEnumList(a0));
                return ::java::util::t_List::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getContentAsEnumList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_getContentAsFreeTextList(t_ParseToken *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsFreeTextList());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_ParseToken_getContentAsInt(t_ParseToken *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getContentAsInt());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ParseToken_getContentAsNormalizedList(t_ParseToken *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsNormalizedList());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_ParseToken_getContentAsNormalizedString(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsNormalizedString());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getContentAsUppercaseCharacter(t_ParseToken *self)
            {
              jchar result;
              OBJ_CALL(result = self->object.getContentAsUppercaseCharacter());
              return c2p(result);
            }

            static PyObject *t_ParseToken_getContentAsUppercaseList(t_ParseToken *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsUppercaseList());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_ParseToken_getContentAsUppercaseString(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsUppercaseString());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getContentAsVector(t_ParseToken *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_ParseToken_getFileName(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileName());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getLineNumber(t_ParseToken *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLineNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ParseToken_getName(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getName());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getRawContent(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRawContent());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getType(t_ParseToken *self)
            {
              ::org::orekit::files::ccsds::utils::lexical::TokenType result((jobject) NULL);
              OBJ_CALL(result = self->object.getType());
              return ::org::orekit::files::ccsds::utils::lexical::t_TokenType::wrap_Object(result);
            }

            static PyObject *t_ParseToken_getUnits(t_ParseToken *self)
            {
              ::org::orekit::utils::units::Unit result((jobject) NULL);
              OBJ_CALL(result = self->object.getUnits());
              return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
            }

            static PyObject *t_ParseToken_processAsBoolean(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsBoolean(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsBoolean", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsCenter(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsCenter(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsCenter", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsCenterList(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsCenterList(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsCenterList", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDate(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsDate(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDate", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDouble(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.processAsDouble(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDoubleArray(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.processAsDoubleArray(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDoubleArray", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDoublyIndexedDouble(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::orekit::utils::units::Unit a2((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer a4((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "IIkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a4))
              {
                OBJ_CALL(result = self->object.processAsDoublyIndexedDouble(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDoublyIndexedDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsEnum(t_ParseToken *self, PyObject *args)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer a1((jobject) NULL);
              PyTypeObject **p1;
              jboolean result;

              if (!parseArgs(args, "KK", ::java::lang::Class::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_, &a1, &p1, ::org::orekit::files::ccsds::utils::lexical::t_ParseToken$EnumConsumer::parameters_))
              {
                OBJ_CALL(result = self->object.processAsEnum(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsEnum", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsEnumsList(t_ParseToken *self, PyObject *args)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer a1((jobject) NULL);
              PyTypeObject **p1;
              jboolean result;

              if (!parseArgs(args, "KK", ::java::lang::Class::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_, &a1, &p1, ::org::orekit::files::ccsds::utils::lexical::t_ParseToken$EnumListConsumer::parameters_))
              {
                OBJ_CALL(result = self->object.processAsEnumsList(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsEnumsList", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsFrame(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              jboolean a2;
              jboolean a3;
              jboolean a4;
              jboolean result;

              if (!parseArgs(args, "kkZZZ", ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.processAsFrame(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsFrame", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsFreeTextList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsFreeTextList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsFreeTextList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsFreeTextString(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsFreeTextString(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsFreeTextString", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedDouble(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::utils::units::Unit a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer a3((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "IkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a3))
              {
                OBJ_CALL(result = self->object.processAsIndexedDouble(a0, a1, a2, a3));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedDoubleArray(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::utils::units::Unit a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer a3((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "IkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a3))
              {
                OBJ_CALL(result = self->object.processAsIndexedDoubleArray(a0, a1, a2, a3));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedDoubleArray", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedInteger(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ik", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsIndexedInteger(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedInteger", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedNormalizedString(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ik", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsIndexedNormalizedString(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedNormalizedString", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedUppercaseString(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ik", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsIndexedUppercaseString(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedUppercaseString", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsInteger(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsInteger(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsInteger", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIntegerArray(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsIntegerArray(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIntegerArray", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIntegerArrayNoSpace(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsIntegerArrayNoSpace(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIntegerArrayNoSpace", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsLabeledDouble(t_ParseToken *self, PyObject *args)
            {
              jchar a0;
              ::org::orekit::utils::units::Unit a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer a3((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "CkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a3))
              {
                OBJ_CALL(result = self->object.processAsLabeledDouble(a0, a1, a2, a3));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsLabeledDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsManeuvrableEnum(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsManeuvrableEnum(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsManeuvrableEnum", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsNormalizedCharacter(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsNormalizedCharacter(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsNormalizedCharacter", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsNormalizedList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsNormalizedList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsNormalizedList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsNormalizedString(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsNormalizedString(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsNormalizedString", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsRotationOrder(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsRotationOrder(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsRotationOrder", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsTimeSystem(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsTimeSystem(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsTimeSystem", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsUnitList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsUnitList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsUnitList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsUppercaseList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsUppercaseList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsUppercaseList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsUppercaseString(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsUppercaseString(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsUppercaseString", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsVector(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.processAsVector(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsVector", args);
              return NULL;
            }

            static PyObject *t_ParseToken_get__contentAsBoolean(t_ParseToken *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.getContentAsBoolean());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_ParseToken_get__contentAsDouble(t_ParseToken *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getContentAsDouble());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ParseToken_get__contentAsFreeTextList(t_ParseToken *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsFreeTextList());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__contentAsInt(t_ParseToken *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getContentAsInt());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_ParseToken_get__contentAsNormalizedList(t_ParseToken *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsNormalizedList());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__contentAsNormalizedString(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsNormalizedString());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__contentAsUppercaseCharacter(t_ParseToken *self, void *data)
            {
              jchar value;
              OBJ_CALL(value = self->object.getContentAsUppercaseCharacter());
              return c2p(value);
            }

            static PyObject *t_ParseToken_get__contentAsUppercaseList(t_ParseToken *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsUppercaseList());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__contentAsUppercaseString(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsUppercaseString());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__contentAsVector(t_ParseToken *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__fileName(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileName());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__lineNumber(t_ParseToken *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLineNumber());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_ParseToken_get__name(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getName());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__rawContent(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRawContent());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__type(t_ParseToken *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::lexical::TokenType value((jobject) NULL);
              OBJ_CALL(value = self->object.getType());
              return ::org::orekit::files::ccsds::utils::lexical::t_TokenType::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__units(t_ParseToken *self, void *data)
            {
              ::org::orekit::utils::units::Unit value((jobject) NULL);
              OBJ_CALL(value = self->object.getUnits());
              return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmWriter::class$ = NULL;
            jmethodID *CdmWriter::mids$ = NULL;
            bool CdmWriter::live$ = false;
            jdouble CdmWriter::CCSDS_CDM_VERS = (jdouble) 0;
            jint CdmWriter::KVN_PADDING_WIDTH = (jint) 0;

            jclass CdmWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_80145525a2ecc4f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                mids$[mid_writeRelativeMetadataContent_6461388fb85a241b] = env->getMethodID(cls, "writeRelativeMetadataContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_writeSegmentContent_a4679b5cde76d825] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CCSDS_CDM_VERS = env->getStaticDoubleField(cls, "CCSDS_CDM_VERS");
                KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmWriter::CdmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::ndm::cdm::CdmMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_80145525a2ecc4f8, a0.this$, a1.this$)) {}

            void CdmWriter::writeRelativeMetadataContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRelativeMetadataContent_6461388fb85a241b], a0.this$, a1, a2.this$);
            }

            void CdmWriter::writeSegmentContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::section::Segment & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegmentContent_a4679b5cde76d825], a0.this$, a1, a2.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_CdmWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmWriter_init_(t_CdmWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmWriter_writeRelativeMetadataContent(t_CdmWriter *self, PyObject *args);
            static PyObject *t_CdmWriter_writeSegmentContent(t_CdmWriter *self, PyObject *args);

            static PyMethodDef t_CdmWriter__methods_[] = {
              DECLARE_METHOD(t_CdmWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmWriter, writeRelativeMetadataContent, METH_VARARGS),
              DECLARE_METHOD(t_CdmWriter, writeSegmentContent, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmWriter)[] = {
              { Py_tp_methods, t_CdmWriter__methods_ },
              { Py_tp_init, (void *) t_CdmWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::cdm::CdmMessageWriter),
              NULL
            };

            DEFINE_TYPE(CdmWriter, t_CdmWriter, CdmWriter);

            void t_CdmWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmWriter), &PY_TYPE_DEF(CdmWriter), module, "CdmWriter", 0);
            }

            void t_CdmWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "class_", make_descriptor(CdmWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "wrapfn_", make_descriptor(t_CdmWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "CCSDS_CDM_VERS", make_descriptor(CdmWriter::CCSDS_CDM_VERS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "KVN_PADDING_WIDTH", make_descriptor(CdmWriter::KVN_PADDING_WIDTH));
            }

            static PyObject *t_CdmWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmWriter::initializeClass, 1)))
                return NULL;
              return t_CdmWriter::wrap_Object(CdmWriter(((t_CdmWriter *) arg)->object.this$));
            }
            static PyObject *t_CdmWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmWriter_init_(t_CdmWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::utils::IERSConventions a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::data::DataContext a1((jobject) NULL);
              CdmWriter object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
              {
                INT_CALL(object = CdmWriter(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmWriter_writeRelativeMetadataContent(t_CdmWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.writeRelativeMetadataContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmWriter), (PyObject *) self, "writeRelativeMetadataContent", args, 2);
            }

            static PyObject *t_CdmWriter_writeSegmentContent(t_CdmWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::section::Segment a2((jobject) NULL);
              PyTypeObject **p2;

              if (!parseArgs(args, "kDK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegmentContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmWriter), (PyObject *) self, "writeSegmentContent", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIBulletinAFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIBulletinAFilesLoader::class$ = NULL;
      jmethodID *UTCTAIBulletinAFilesLoader::mids$ = NULL;
      bool UTCTAIBulletinAFilesLoader::live$ = false;

      jclass UTCTAIBulletinAFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIBulletinAFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_63232a42a5419b09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_2afa36052df4765d] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIBulletinAFilesLoader::UTCTAIBulletinAFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

      UTCTAIBulletinAFilesLoader::UTCTAIBulletinAFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_63232a42a5419b09, a0.this$, a1.this$)) {}

      ::java::util::List UTCTAIBulletinAFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_2afa36052df4765d]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIBulletinAFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIBulletinAFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIBulletinAFilesLoader_init_(t_UTCTAIBulletinAFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIBulletinAFilesLoader_loadOffsets(t_UTCTAIBulletinAFilesLoader *self);

      static PyMethodDef t_UTCTAIBulletinAFilesLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIBulletinAFilesLoader)[] = {
        { Py_tp_methods, t_UTCTAIBulletinAFilesLoader__methods_ },
        { Py_tp_init, (void *) t_UTCTAIBulletinAFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIBulletinAFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(UTCTAIBulletinAFilesLoader, t_UTCTAIBulletinAFilesLoader, UTCTAIBulletinAFilesLoader);

      void t_UTCTAIBulletinAFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIBulletinAFilesLoader), &PY_TYPE_DEF(UTCTAIBulletinAFilesLoader), module, "UTCTAIBulletinAFilesLoader", 0);
      }

      void t_UTCTAIBulletinAFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "class_", make_descriptor(UTCTAIBulletinAFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "wrapfn_", make_descriptor(t_UTCTAIBulletinAFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIBulletinAFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIBulletinAFilesLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIBulletinAFilesLoader::wrap_Object(UTCTAIBulletinAFilesLoader(((t_UTCTAIBulletinAFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIBulletinAFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIBulletinAFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIBulletinAFilesLoader_init_(t_UTCTAIBulletinAFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            UTCTAIBulletinAFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = UTCTAIBulletinAFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            UTCTAIBulletinAFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UTCTAIBulletinAFilesLoader(a0, a1));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_UTCTAIBulletinAFilesLoader_loadOffsets(t_UTCTAIBulletinAFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/legendre/LegendreEllipticIntegral.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/complex/FieldComplexUnivariateIntegrator.h"
#include "org/hipparchus/complex/ComplexUnivariateIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace legendre {

          ::java::lang::Class *LegendreEllipticIntegral::class$ = NULL;
          jmethodID *LegendreEllipticIntegral::mids$ = NULL;
          bool LegendreEllipticIntegral::live$ = false;

          jclass LegendreEllipticIntegral::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/legendre/LegendreEllipticIntegral");

              mids$ = new jmethodID[max_mid];
              mids$[mid_bigD_db05c4121ab4cf9b] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigD_324fe1e1d007a3ed] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigD_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "bigD", "(D)D");
              mids$[mid_bigD_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigD_6e0cdbc797c242a1] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigD_a3c292738a9833b6] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigD_86ffecc08a63eff0] = env->getStaticMethodID(cls, "bigD", "(DD)D");
              mids$[mid_bigD_6746cc1cd9210d54] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_db05c4121ab4cf9b] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_324fe1e1d007a3ed] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigE_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "bigE", "(D)D");
              mids$[mid_bigE_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_6e0cdbc797c242a1] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_a3c292738a9833b6] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigE_86ffecc08a63eff0] = env->getStaticMethodID(cls, "bigE", "(DD)D");
              mids$[mid_bigE_6746cc1cd9210d54] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_61cc8be847c55fb3] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_59d9c2f758348fb7] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigF_6e0cdbc797c242a1] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigF_a3c292738a9833b6] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigF_86ffecc08a63eff0] = env->getStaticMethodID(cls, "bigF", "(DD)D");
              mids$[mid_bigF_6746cc1cd9210d54] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigF_61cc8be847c55fb3] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigF_59d9c2f758348fb7] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigK_db05c4121ab4cf9b] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigK_324fe1e1d007a3ed] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigK_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "bigK", "(D)D");
              mids$[mid_bigK_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigKPrime_db05c4121ab4cf9b] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigKPrime_324fe1e1d007a3ed] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigKPrime_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "bigKPrime", "(D)D");
              mids$[mid_bigKPrime_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_6e0cdbc797c242a1] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_a3c292738a9833b6] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigPi_86ffecc08a63eff0] = env->getStaticMethodID(cls, "bigPi", "(DD)D");
              mids$[mid_bigPi_6746cc1cd9210d54] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_f8bf5c113fa9cbc9] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_d361fa1b878f879c] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigPi_8c19bdea212fe058] = env->getStaticMethodID(cls, "bigPi", "(DDD)D");
              mids$[mid_bigPi_ff4594b9dc2244a3] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_6fd50c02e5b79ed3] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_55db7eefcb28a55c] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_nome_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "nome", "(D)D");
              mids$[mid_nome_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "nome", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigD_db05c4121ab4cf9b], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigD_324fe1e1d007a3ed], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigD(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigD_dcbc7ce2902fa136], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigD(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigD_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigD_6e0cdbc797c242a1], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigD_a3c292738a9833b6], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigD(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigD_86ffecc08a63eff0], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigD(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigD_6746cc1cd9210d54], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_db05c4121ab4cf9b], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_324fe1e1d007a3ed], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigE(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigE_dcbc7ce2902fa136], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigE(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigE_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_6e0cdbc797c242a1], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_a3c292738a9833b6], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigE(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigE_86ffecc08a63eff0], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigE(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigE_6746cc1cd9210d54], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_61cc8be847c55fb3], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_59d9c2f758348fb7], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigF_6e0cdbc797c242a1], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigF_a3c292738a9833b6], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigF(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigF_86ffecc08a63eff0], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigF(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigF_6746cc1cd9210d54], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigF_61cc8be847c55fb3], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigF_59d9c2f758348fb7], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigK(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigK_db05c4121ab4cf9b], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigK(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigK_324fe1e1d007a3ed], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigK(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigK_dcbc7ce2902fa136], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigK(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigK_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_db05c4121ab4cf9b], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_324fe1e1d007a3ed], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigKPrime(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigKPrime_dcbc7ce2902fa136], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_a4b1871f4d29e58b], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_6e0cdbc797c242a1], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_a3c292738a9833b6], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigPi(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigPi_86ffecc08a63eff0], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigPi(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigPi_6746cc1cd9210d54], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_f8bf5c113fa9cbc9], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_d361fa1b878f879c], a0.this$, a1.this$, a2.this$));
          }

          jdouble LegendreEllipticIntegral::bigPi(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigPi_8c19bdea212fe058], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigPi(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigPi_ff4594b9dc2244a3], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_6fd50c02e5b79ed3], a0.this$, a1.this$, a2.this$, a3.this$, a4));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_55db7eefcb28a55c], a0.this$, a1.this$, a2.this$, a3.this$, a4));
          }

          jdouble LegendreEllipticIntegral::nome(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_nome_dcbc7ce2902fa136], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::nome(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_nome_a4b1871f4d29e58b], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace legendre {
          static PyObject *t_LegendreEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreEllipticIntegral_bigD(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigE(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigF(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigK(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigKPrime(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigPi(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_nome(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_LegendreEllipticIntegral__methods_[] = {
            DECLARE_METHOD(t_LegendreEllipticIntegral, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigD, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigKPrime, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigPi, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, nome, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LegendreEllipticIntegral)[] = {
            { Py_tp_methods, t_LegendreEllipticIntegral__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LegendreEllipticIntegral)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LegendreEllipticIntegral, t_LegendreEllipticIntegral, LegendreEllipticIntegral);

          void t_LegendreEllipticIntegral::install(PyObject *module)
          {
            installType(&PY_TYPE(LegendreEllipticIntegral), &PY_TYPE_DEF(LegendreEllipticIntegral), module, "LegendreEllipticIntegral", 0);
          }

          void t_LegendreEllipticIntegral::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "class_", make_descriptor(LegendreEllipticIntegral::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "wrapfn_", make_descriptor(t_LegendreEllipticIntegral::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LegendreEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LegendreEllipticIntegral::initializeClass, 1)))
              return NULL;
            return t_LegendreEllipticIntegral::wrap_Object(LegendreEllipticIntegral(((t_LegendreEllipticIntegral *) arg)->object.this$));
          }
          static PyObject *t_LegendreEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LegendreEllipticIntegral::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LegendreEllipticIntegral_bigD(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigD", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigE(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a2((jobject) NULL);
                jint a3;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a2((jobject) NULL);
                PyTypeObject **p2;
                jint a3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigE", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigF(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a2((jobject) NULL);
                jint a3;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a2((jobject) NULL);
                PyTypeObject **p2;
                jint a3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigF", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigK(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigK", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigKPrime(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigKPrime", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigPi(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a3((jobject) NULL);
                jint a4;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a3((jobject) NULL);
                PyTypeObject **p3;
                jint a4;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigPi", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_nome(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::nome(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::nome(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "nome", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PythonParametricModelEffectGradient.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PythonParametricModelEffectGradient::class$ = NULL;
          jmethodID *PythonParametricModelEffectGradient::mids$ = NULL;
          bool PythonParametricModelEffectGradient::live$ = false;

          jclass PythonParametricModelEffectGradient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PythonParametricModelEffectGradient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_evaluate_7c87c759b9f2948c] = env->getMethodID(cls, "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonParametricModelEffectGradient::PythonParametricModelEffectGradient() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonParametricModelEffectGradient::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonParametricModelEffectGradient::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonParametricModelEffectGradient::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_PythonParametricModelEffectGradient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonParametricModelEffectGradient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonParametricModelEffectGradient_init_(t_PythonParametricModelEffectGradient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonParametricModelEffectGradient_finalize(t_PythonParametricModelEffectGradient *self);
          static PyObject *t_PythonParametricModelEffectGradient_pythonExtension(t_PythonParametricModelEffectGradient *self, PyObject *args);
          static jobject JNICALL t_PythonParametricModelEffectGradient_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonParametricModelEffectGradient_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonParametricModelEffectGradient_get__self(t_PythonParametricModelEffectGradient *self, void *data);
          static PyGetSetDef t_PythonParametricModelEffectGradient__fields_[] = {
            DECLARE_GET_FIELD(t_PythonParametricModelEffectGradient, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonParametricModelEffectGradient__methods_[] = {
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonParametricModelEffectGradient)[] = {
            { Py_tp_methods, t_PythonParametricModelEffectGradient__methods_ },
            { Py_tp_init, (void *) t_PythonParametricModelEffectGradient_init_ },
            { Py_tp_getset, t_PythonParametricModelEffectGradient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonParametricModelEffectGradient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonParametricModelEffectGradient, t_PythonParametricModelEffectGradient, PythonParametricModelEffectGradient);

          void t_PythonParametricModelEffectGradient::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonParametricModelEffectGradient), &PY_TYPE_DEF(PythonParametricModelEffectGradient), module, "PythonParametricModelEffectGradient", 1);
          }

          void t_PythonParametricModelEffectGradient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "class_", make_descriptor(PythonParametricModelEffectGradient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "wrapfn_", make_descriptor(t_PythonParametricModelEffectGradient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonParametricModelEffectGradient::initializeClass);
            JNINativeMethod methods[] = {
              { "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;", (void *) t_PythonParametricModelEffectGradient_evaluate0 },
              { "pythonDecRef", "()V", (void *) t_PythonParametricModelEffectGradient_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonParametricModelEffectGradient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonParametricModelEffectGradient::initializeClass, 1)))
              return NULL;
            return t_PythonParametricModelEffectGradient::wrap_Object(PythonParametricModelEffectGradient(((t_PythonParametricModelEffectGradient *) arg)->object.this$));
          }
          static PyObject *t_PythonParametricModelEffectGradient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonParametricModelEffectGradient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonParametricModelEffectGradient_init_(t_PythonParametricModelEffectGradient *self, PyObject *args, PyObject *kwds)
          {
            PythonParametricModelEffectGradient object((jobject) NULL);

            INT_CALL(object = PythonParametricModelEffectGradient());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonParametricModelEffectGradient_finalize(t_PythonParametricModelEffectGradient *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonParametricModelEffectGradient_pythonExtension(t_PythonParametricModelEffectGradient *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jobject JNICALL t_PythonParametricModelEffectGradient_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(::org::orekit::estimation::measurements::GroundStation(a0));
            PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "evaluate", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &value))
            {
              throwTypeError("evaluate", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonParametricModelEffectGradient_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonParametricModelEffectGradient_get__self(t_PythonParametricModelEffectGradient *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonUnnormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonUnnormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonUnnormalizedSphericalHarmonicsProvider::live$ = false;

          jclass PythonUnnormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_dff5885c2c873297] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_c68abf1ca1fc273e] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_017ee055e397b964] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonUnnormalizedSphericalHarmonicsProvider::PythonUnnormalizedSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonUnnormalizedSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonUnnormalizedSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonUnnormalizedSphericalHarmonicsProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonUnnormalizedSphericalHarmonicsProvider_init_(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_finalize(t_PythonUnnormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_get__self(t_PythonUnnormalizedSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonUnnormalizedSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonUnnormalizedSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonUnnormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonUnnormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonUnnormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonUnnormalizedSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonUnnormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonUnnormalizedSphericalHarmonicsProvider, t_PythonUnnormalizedSphericalHarmonicsProvider, PythonUnnormalizedSphericalHarmonicsProvider);

          void t_PythonUnnormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonUnnormalizedSphericalHarmonicsProvider), module, "PythonUnnormalizedSphericalHarmonicsProvider", 1);
          }

          void t_PythonUnnormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), "class_", make_descriptor(PythonUnnormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonUnnormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonUnnormalizedSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getTideSystem5 },
              { "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_onDate6 },
              { "pythonDecRef", "()V", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_pythonDecRef7 },
            };
            env->registerNatives(cls, methods, 8);
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonUnnormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonUnnormalizedSphericalHarmonicsProvider::wrap_Object(PythonUnnormalizedSphericalHarmonicsProvider(((t_PythonUnnormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonUnnormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonUnnormalizedSphericalHarmonicsProvider_init_(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonUnnormalizedSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonUnnormalizedSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_finalize(t_PythonUnnormalizedSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "onDate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &value))
            {
              throwTypeError("onDate", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_get__self(t_PythonUnnormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/YawSteering.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *YawSteering::class$ = NULL;
      jmethodID *YawSteering::mids$ = NULL;
      bool YawSteering::live$ = false;

      jclass YawSteering::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/YawSteering");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f9f34c850e6edf41] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/GroundPointing;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getBaseState_d2b70935d932b5c5] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getBaseState_4e541876ea7d5bd0] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getTargetPV_ad3e02e6f0d115f2] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_129d59e5c897146f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getUnderlyingAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YawSteering::YawSteering(const ::org::orekit::frames::Frame & a0, const ::org::orekit::attitudes::GroundPointing & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_f9f34c850e6edf41, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::attitudes::Attitude YawSteering::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawSteering::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawSteering::getBaseState(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getBaseState_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawSteering::getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getBaseState_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates YawSteering::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ad3e02e6f0d115f2], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates YawSteering::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_129d59e5c897146f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider YawSteering::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_a904f3d015a354a0]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_YawSteering_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YawSteering_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YawSteering_init_(t_YawSteering *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YawSteering_getAttitude(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getBaseState(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getTargetPV(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getUnderlyingAttitudeProvider(t_YawSteering *self);
      static PyObject *t_YawSteering_get__underlyingAttitudeProvider(t_YawSteering *self, void *data);
      static PyGetSetDef t_YawSteering__fields_[] = {
        DECLARE_GET_FIELD(t_YawSteering, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YawSteering__methods_[] = {
        DECLARE_METHOD(t_YawSteering, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawSteering, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawSteering, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getBaseState, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getTargetPV, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getUnderlyingAttitudeProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YawSteering)[] = {
        { Py_tp_methods, t_YawSteering__methods_ },
        { Py_tp_init, (void *) t_YawSteering_init_ },
        { Py_tp_getset, t_YawSteering__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YawSteering)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(YawSteering, t_YawSteering, YawSteering);

      void t_YawSteering::install(PyObject *module)
      {
        installType(&PY_TYPE(YawSteering), &PY_TYPE_DEF(YawSteering), module, "YawSteering", 0);
      }

      void t_YawSteering::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "class_", make_descriptor(YawSteering::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "wrapfn_", make_descriptor(t_YawSteering::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YawSteering_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YawSteering::initializeClass, 1)))
          return NULL;
        return t_YawSteering::wrap_Object(YawSteering(((t_YawSteering *) arg)->object.this$));
      }
      static PyObject *t_YawSteering_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YawSteering::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YawSteering_init_(t_YawSteering *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::GroundPointing a1((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        YawSteering object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::GroundPointing::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = YawSteering(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_YawSteering_getAttitude(t_YawSteering *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(YawSteering), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_YawSteering_getBaseState(t_YawSteering *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getBaseState", args);
        return NULL;
      }

      static PyObject *t_YawSteering_getTargetPV(t_YawSteering *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }

      static PyObject *t_YawSteering_getUnderlyingAttitudeProvider(t_YawSteering *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_YawSteering_get__underlyingAttitudeProvider(t_YawSteering *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/BeidouGeo.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouGeo::class$ = NULL;
        jmethodID *BeidouGeo::mids$ = NULL;
        bool BeidouGeo::live$ = false;

        jclass BeidouGeo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouGeo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_be6476273154a2ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_64e3133ed57cb807] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_dbb16eda5c9f6b1d] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouGeo::BeidouGeo(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_be6476273154a2ce, a0.this$, a1.this$, a2.this$, a3.this$)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {
        static PyObject *t_BeidouGeo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouGeo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouGeo_init_(t_BeidouGeo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouGeo__methods_[] = {
          DECLARE_METHOD(t_BeidouGeo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouGeo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouGeo)[] = {
          { Py_tp_methods, t_BeidouGeo__methods_ },
          { Py_tp_init, (void *) t_BeidouGeo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouGeo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(BeidouGeo, t_BeidouGeo, BeidouGeo);

        void t_BeidouGeo::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouGeo), &PY_TYPE_DEF(BeidouGeo), module, "BeidouGeo", 0);
        }

        void t_BeidouGeo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "class_", make_descriptor(BeidouGeo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "wrapfn_", make_descriptor(t_BeidouGeo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouGeo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouGeo::initializeClass, 1)))
            return NULL;
          return t_BeidouGeo::wrap_Object(BeidouGeo(((t_BeidouGeo *) arg)->object.this$));
        }
        static PyObject *t_BeidouGeo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouGeo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouGeo_init_(t_BeidouGeo *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouGeo object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouGeo(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/BracketFinder.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *BracketFinder::class$ = NULL;
        jmethodID *BracketFinder::mids$ = NULL;
        bool BracketFinder::live$ = false;

        jclass BracketFinder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/BracketFinder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_75c2da74a5a59fda] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFHi_dff5885c2c873297] = env->getMethodID(cls, "getFHi", "()D");
            mids$[mid_getFLo_dff5885c2c873297] = env->getMethodID(cls, "getFLo", "()D");
            mids$[mid_getFMid_dff5885c2c873297] = env->getMethodID(cls, "getFMid", "()D");
            mids$[mid_getHi_dff5885c2c873297] = env->getMethodID(cls, "getHi", "()D");
            mids$[mid_getLo_dff5885c2c873297] = env->getMethodID(cls, "getLo", "()D");
            mids$[mid_getMaxEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getMid_dff5885c2c873297] = env->getMethodID(cls, "getMid", "()D");
            mids$[mid_search_2267d410d37cdcec] = env->getMethodID(cls, "search", "(Lorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/optim/nonlinear/scalar/GoalType;DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketFinder::BracketFinder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        BracketFinder::BracketFinder(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_75c2da74a5a59fda, a0, a1)) {}

        jint BracketFinder::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
        }

        jdouble BracketFinder::getFHi() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFHi_dff5885c2c873297]);
        }

        jdouble BracketFinder::getFLo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFLo_dff5885c2c873297]);
        }

        jdouble BracketFinder::getFMid() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFMid_dff5885c2c873297]);
        }

        jdouble BracketFinder::getHi() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHi_dff5885c2c873297]);
        }

        jdouble BracketFinder::getLo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLo_dff5885c2c873297]);
        }

        jint BracketFinder::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_570ce0828f81a2c1]);
        }

        jdouble BracketFinder::getMid() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMid_dff5885c2c873297]);
        }

        void BracketFinder::search(const ::org::hipparchus::analysis::UnivariateFunction & a0, const ::org::hipparchus::optim::nonlinear::scalar::GoalType & a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_search_2267d410d37cdcec], a0.this$, a1.this$, a2, a3);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        static PyObject *t_BracketFinder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketFinder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BracketFinder_init_(t_BracketFinder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketFinder_getEvaluations(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getFHi(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getFLo(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getFMid(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getHi(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getLo(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getMaxEvaluations(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getMid(t_BracketFinder *self);
        static PyObject *t_BracketFinder_search(t_BracketFinder *self, PyObject *args);
        static PyObject *t_BracketFinder_get__evaluations(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__fHi(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__fLo(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__fMid(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__hi(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__lo(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__maxEvaluations(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__mid(t_BracketFinder *self, void *data);
        static PyGetSetDef t_BracketFinder__fields_[] = {
          DECLARE_GET_FIELD(t_BracketFinder, evaluations),
          DECLARE_GET_FIELD(t_BracketFinder, fHi),
          DECLARE_GET_FIELD(t_BracketFinder, fLo),
          DECLARE_GET_FIELD(t_BracketFinder, fMid),
          DECLARE_GET_FIELD(t_BracketFinder, hi),
          DECLARE_GET_FIELD(t_BracketFinder, lo),
          DECLARE_GET_FIELD(t_BracketFinder, maxEvaluations),
          DECLARE_GET_FIELD(t_BracketFinder, mid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketFinder__methods_[] = {
          DECLARE_METHOD(t_BracketFinder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketFinder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketFinder, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getFHi, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getFLo, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getFMid, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getHi, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getLo, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getMid, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, search, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketFinder)[] = {
          { Py_tp_methods, t_BracketFinder__methods_ },
          { Py_tp_init, (void *) t_BracketFinder_init_ },
          { Py_tp_getset, t_BracketFinder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketFinder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketFinder, t_BracketFinder, BracketFinder);

        void t_BracketFinder::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketFinder), &PY_TYPE_DEF(BracketFinder), module, "BracketFinder", 0);
        }

        void t_BracketFinder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketFinder), "class_", make_descriptor(BracketFinder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketFinder), "wrapfn_", make_descriptor(t_BracketFinder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketFinder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketFinder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketFinder::initializeClass, 1)))
            return NULL;
          return t_BracketFinder::wrap_Object(BracketFinder(((t_BracketFinder *) arg)->object.this$));
        }
        static PyObject *t_BracketFinder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketFinder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BracketFinder_init_(t_BracketFinder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BracketFinder object((jobject) NULL);

              INT_CALL(object = BracketFinder());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jint a1;
              BracketFinder object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = BracketFinder(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BracketFinder_getEvaluations(t_BracketFinder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketFinder_getFHi(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFHi());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getFLo(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFLo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getFMid(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFMid());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getHi(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHi());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getLo(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getMaxEvaluations(t_BracketFinder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketFinder_getMid(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMid());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_search(t_BracketFinder *self, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::scalar::GoalType a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          jdouble a3;

          if (!parseArgs(args, "kKDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::optim::nonlinear::scalar::GoalType::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::parameters_, &a2, &a3))
          {
            OBJ_CALL(self->object.search(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "search", args);
          return NULL;
        }

        static PyObject *t_BracketFinder_get__evaluations(t_BracketFinder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketFinder_get__fHi(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFHi());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__fLo(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFLo());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__fMid(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFMid());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__hi(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHi());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__lo(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLo());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__maxEvaluations(t_BracketFinder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketFinder_get__mid(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMid());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAngularCoordinates::class$ = NULL;
      jmethodID *FieldAngularCoordinates::mids$ = NULL;
      bool FieldAngularCoordinates::live$ = false;

      jclass FieldAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_36678dbdedc42376] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_d0f1c83862c61b8e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_d0be30050404b9d7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_6f9d9a409c6b64c9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_6c82494359f1e442] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_addOffset_5c4217e0473c8587] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_applyTo_2c604bfeb0a28a2f] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_554e30441a4431d6] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_f76646e67e6a0632] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_applyTo_ddd20dd2dd77e82a] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_createFromModifiedRodrigues_b6da44a362005f7f] = env->getStaticMethodID(cls, "createFromModifiedRodrigues", "([[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_estimateRate_eca05ede80447dac] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_estimateRate_fea02aafbdef9ea8] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getIdentity_527880ef18d4c545] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_getModifiedRodrigues_cd67b2fc6153e86f] = env->getMethodID(cls, "getModifiedRodrigues", "(D)[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRotation_1d339a2ee3a3323a] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_716f50c86ffc8da7] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getRotationRate_716f50c86ffc8da7] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_revert_816428dc64133c35] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_rotationShiftedBy_18cefe87a5836f51] = env->getMethodID(cls, "rotationShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_shiftedBy_d44ae49cec21abff] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_shiftedBy_44ac14fd99cc1f4e] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_subtractOffset_5c4217e0473c8587] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_toAngularCoordinates_8a604053f4d4c39e] = env->getMethodID(cls, "toAngularCoordinates", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_toDerivativeStructureRotation_371facd070e18d41] = env->getMethodID(cls, "toDerivativeStructureRotation", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative1Rotation_1d339a2ee3a3323a] = env->getMethodID(cls, "toUnivariateDerivative1Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative2Rotation_1d339a2ee3a3323a] = env->getMethodID(cls, "toUnivariateDerivative2Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_36678dbdedc42376, a0.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0f1c83862c61b8e, a0.this$, a1.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::AngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0be30050404b9d7, a0.this$, a1.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f9d9a409c6b64c9, a0.this$, a1.this$, a2.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6c82494359f1e442, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

      FieldAngularCoordinates FieldAngularCoordinates::addOffset(const FieldAngularCoordinates & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_5c4217e0473c8587], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_2c604bfeb0a28a2f], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_554e30441a4431d6], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_f76646e67e6a0632], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_ddd20dd2dd77e82a], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::createFromModifiedRodrigues(const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_createFromModifiedRodrigues_b6da44a362005f7f], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_eca05ede80447dac], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_fea02aafbdef9ea8], a0.this$, a1.this$, a2.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_527880ef18d4c545], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldAngularCoordinates::getModifiedRodrigues(jdouble a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getModifiedRodrigues_cd67b2fc6153e86f], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_1d339a2ee3a3323a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_716f50c86ffc8da7]));
      }

      FieldAngularCoordinates FieldAngularCoordinates::revert() const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_816428dc64133c35]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::rotationShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationShiftedBy_18cefe87a5836f51], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_d44ae49cec21abff], a0));
      }

      FieldAngularCoordinates FieldAngularCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_44ac14fd99cc1f4e], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::subtractOffset(const FieldAngularCoordinates & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_5c4217e0473c8587], a0.this$));
      }

      ::org::orekit::utils::AngularCoordinates FieldAngularCoordinates::toAngularCoordinates() const
      {
        return ::org::orekit::utils::AngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngularCoordinates_8a604053f4d4c39e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toDerivativeStructureRotation(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureRotation_371facd070e18d41], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toUnivariateDerivative1Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Rotation_1d339a2ee3a3323a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toUnivariateDerivative2Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Rotation_1d339a2ee3a3323a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_FieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_of_(t_FieldAngularCoordinates *self, PyObject *args);
      static int t_FieldAngularCoordinates_init_(t_FieldAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAngularCoordinates_addOffset(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_applyTo(t_FieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_getModifiedRodrigues(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_getRotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_getRotationAcceleration(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_getRotationRate(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_revert(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_rotationShiftedBy(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_shiftedBy(t_FieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_subtractOffset(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_toAngularCoordinates(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_toDerivativeStructureRotation(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative1Rotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative2Rotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_get__rotation(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__rotationAcceleration(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__rotationRate(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__parameters_(t_FieldAngularCoordinates *self, void *data);
      static PyGetSetDef t_FieldAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotation),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotationRate),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, addOffset, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, applyTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, createFromModifiedRodrigues, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, estimateRate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getModifiedRodrigues, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, revert, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, rotationShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, subtractOffset, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, toAngularCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, toDerivativeStructureRotation, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, toUnivariateDerivative1Rotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, toUnivariateDerivative2Rotation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAngularCoordinates)[] = {
        { Py_tp_methods, t_FieldAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldAngularCoordinates_init_ },
        { Py_tp_getset, t_FieldAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAngularCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAngularCoordinates, t_FieldAngularCoordinates, FieldAngularCoordinates);
      PyObject *t_FieldAngularCoordinates::wrap_Object(const FieldAngularCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAngularCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAngularCoordinates *self = (t_FieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAngularCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAngularCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAngularCoordinates *self = (t_FieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAngularCoordinates), &PY_TYPE_DEF(FieldAngularCoordinates), module, "FieldAngularCoordinates", 0);
      }

      void t_FieldAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "class_", make_descriptor(FieldAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "wrapfn_", make_descriptor(t_FieldAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldAngularCoordinates::wrap_Object(FieldAngularCoordinates(((t_FieldAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAngularCoordinates_of_(t_FieldAngularCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAngularCoordinates_init_(t_FieldAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::AngularCoordinates a1((jobject) NULL);
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKD", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldAngularCoordinates_addOffset(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldAngularCoordinates::initializeClass, &a0, &p0, t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addOffset", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_applyTo(t_FieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "applyTo", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::createFromModifiedRodrigues(a0));
          return t_FieldAngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::estimateRate(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::estimateRate(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "estimateRate", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::getIdentity(a0));
          return t_FieldAngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getModifiedRodrigues(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getModifiedRodrigues(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "getModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getRotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_getRotationAcceleration(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_getRotationRate(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_revert(t_FieldAngularCoordinates *self)
      {
        FieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.revert());
        return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_rotationShiftedBy(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.rotationShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "rotationShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_shiftedBy(t_FieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_subtractOffset(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldAngularCoordinates::initializeClass, &a0, &p0, t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtractOffset", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_toAngularCoordinates(t_FieldAngularCoordinates *self)
      {
        ::org::orekit::utils::AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toAngularCoordinates());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldAngularCoordinates_toDerivativeStructureRotation(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureRotation(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureRotation", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative1Rotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
      }

      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative2Rotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
      }
      static PyObject *t_FieldAngularCoordinates_get__parameters_(t_FieldAngularCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAngularCoordinates_get__rotation(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldAngularCoordinates_get__rotationAcceleration(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldAngularCoordinates_get__rotationRate(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader$EphemerisType::class$ = NULL;
      jmethodID *JPLEphemeridesLoader$EphemerisType::mids$ = NULL;
      bool JPLEphemeridesLoader$EphemerisType::live$ = false;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::EARTH = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::EARTH_MOON = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::JUPITER = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::MARS = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::MERCURY = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::MOON = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::NEPTUNE = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::PLUTO = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::SATURN = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::SOLAR_SYSTEM_BARYCENTER = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::SUN = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::URANUS = NULL;
      JPLEphemeridesLoader$EphemerisType *JPLEphemeridesLoader$EphemerisType::VENUS = NULL;

      jclass JPLEphemeridesLoader$EphemerisType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader$EphemerisType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_0a842ec1813aae26] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;");
          mids$[mid_values_a18035ea5d2488c5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EARTH = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "EARTH", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          EARTH_MOON = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "EARTH_MOON", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          JUPITER = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "JUPITER", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          MARS = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "MARS", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          MERCURY = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "MERCURY", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          MOON = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "MOON", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          NEPTUNE = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "NEPTUNE", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          PLUTO = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "PLUTO", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          SATURN = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "SATURN", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          SOLAR_SYSTEM_BARYCENTER = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          SUN = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "SUN", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          URANUS = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "URANUS", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          VENUS = new JPLEphemeridesLoader$EphemerisType(env->getStaticObjectField(cls, "VENUS", "Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JPLEphemeridesLoader$EphemerisType JPLEphemeridesLoader$EphemerisType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JPLEphemeridesLoader$EphemerisType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0a842ec1813aae26], a0.this$));
      }

      JArray< JPLEphemeridesLoader$EphemerisType > JPLEphemeridesLoader$EphemerisType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JPLEphemeridesLoader$EphemerisType >(env->callStaticObjectMethod(cls, mids$[mid_values_a18035ea5d2488c5]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_of_(t_JPLEphemeridesLoader$EphemerisType *self, PyObject *args);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_values(PyTypeObject *type);
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_get__parameters_(t_JPLEphemeridesLoader$EphemerisType *self, void *data);
      static PyGetSetDef t_JPLEphemeridesLoader$EphemerisType__fields_[] = {
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader$EphemerisType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JPLEphemeridesLoader$EphemerisType__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, of_, METH_VARARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$EphemerisType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader$EphemerisType)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader$EphemerisType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_JPLEphemeridesLoader$EphemerisType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader$EphemerisType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader$EphemerisType, t_JPLEphemeridesLoader$EphemerisType, JPLEphemeridesLoader$EphemerisType);
      PyObject *t_JPLEphemeridesLoader$EphemerisType::wrap_Object(const JPLEphemeridesLoader$EphemerisType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_JPLEphemeridesLoader$EphemerisType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_JPLEphemeridesLoader$EphemerisType *self = (t_JPLEphemeridesLoader$EphemerisType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_JPLEphemeridesLoader$EphemerisType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_JPLEphemeridesLoader$EphemerisType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_JPLEphemeridesLoader$EphemerisType *self = (t_JPLEphemeridesLoader$EphemerisType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_JPLEphemeridesLoader$EphemerisType::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader$EphemerisType), &PY_TYPE_DEF(JPLEphemeridesLoader$EphemerisType), module, "JPLEphemeridesLoader$EphemerisType", 0);
      }

      void t_JPLEphemeridesLoader$EphemerisType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "class_", make_descriptor(JPLEphemeridesLoader$EphemerisType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "boxfn_", make_descriptor(boxObject));
        env->getClass(JPLEphemeridesLoader$EphemerisType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "EARTH", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::EARTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "EARTH_MOON", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::EARTH_MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "JUPITER", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::JUPITER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "MARS", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::MARS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "MERCURY", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::MERCURY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "MOON", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "NEPTUNE", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::NEPTUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "PLUTO", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::PLUTO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "SATURN", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::SATURN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::SOLAR_SYSTEM_BARYCENTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "SUN", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::SUN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "URANUS", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::URANUS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$EphemerisType), "VENUS", make_descriptor(t_JPLEphemeridesLoader$EphemerisType::wrap_Object(*JPLEphemeridesLoader$EphemerisType::VENUS)));
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader$EphemerisType::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader$EphemerisType::wrap_Object(JPLEphemeridesLoader$EphemerisType(((t_JPLEphemeridesLoader$EphemerisType *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader$EphemerisType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_of_(t_JPLEphemeridesLoader$EphemerisType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JPLEphemeridesLoader$EphemerisType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::valueOf(a0));
          return t_JPLEphemeridesLoader$EphemerisType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_JPLEphemeridesLoader$EphemerisType_values(PyTypeObject *type)
      {
        JArray< JPLEphemeridesLoader$EphemerisType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::values());
        return JArray<jobject>(result.this$).wrap(t_JPLEphemeridesLoader$EphemerisType::wrap_jobject);
      }
      static PyObject *t_JPLEphemeridesLoader$EphemerisType_get__parameters_(t_JPLEphemeridesLoader$EphemerisType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmData.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *Omm::class$ = NULL;
              jmethodID *Omm::mids$ = NULL;
              bool Omm::live$ = false;
              ::java::lang::String *Omm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Omm::ROOT = NULL;

              jclass Omm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/Omm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a3c39779efce50a0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_generateKeplerianOrbit_3b8c2ada972e4fd7] = env->getMethodID(cls, "generateKeplerianOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
                  mids$[mid_generateSpacecraftState_c6311115fea01a34] = env->getMethodID(cls, "generateSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
                  mids$[mid_generateTLE_e993eceec98c738b] = env->getMethodID(cls, "generateTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");
                  mids$[mid_getData_466f4b889e77ad6f] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmData;");
                  mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMetadata_a99df25529150639] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Omm::Omm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_a3c39779efce50a0, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::orbits::KeplerianOrbit Omm::generateKeplerianOrbit() const
              {
                return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_3b8c2ada972e4fd7]));
              }

              ::org::orekit::propagation::SpacecraftState Omm::generateSpacecraftState() const
              {
                return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_generateSpacecraftState_c6311115fea01a34]));
              }

              ::org::orekit::propagation::analytical::tle::TLE Omm::generateTLE() const
              {
                return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generateTLE_e993eceec98c738b]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmData Omm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmData(env->callObjectMethod(this$, mids$[mid_getData_466f4b889e77ad6f]));
              }

              ::org::orekit::time::AbsoluteDate Omm::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata Omm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_a99df25529150639]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {
              static PyObject *t_Omm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Omm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Omm_of_(t_Omm *self, PyObject *args);
              static int t_Omm_init_(t_Omm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Omm_generateKeplerianOrbit(t_Omm *self);
              static PyObject *t_Omm_generateSpacecraftState(t_Omm *self);
              static PyObject *t_Omm_generateTLE(t_Omm *self);
              static PyObject *t_Omm_getData(t_Omm *self);
              static PyObject *t_Omm_getDate(t_Omm *self);
              static PyObject *t_Omm_getMetadata(t_Omm *self);
              static PyObject *t_Omm_get__data(t_Omm *self, void *data);
              static PyObject *t_Omm_get__date(t_Omm *self, void *data);
              static PyObject *t_Omm_get__metadata(t_Omm *self, void *data);
              static PyObject *t_Omm_get__parameters_(t_Omm *self, void *data);
              static PyGetSetDef t_Omm__fields_[] = {
                DECLARE_GET_FIELD(t_Omm, data),
                DECLARE_GET_FIELD(t_Omm, date),
                DECLARE_GET_FIELD(t_Omm, metadata),
                DECLARE_GET_FIELD(t_Omm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Omm__methods_[] = {
                DECLARE_METHOD(t_Omm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Omm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Omm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Omm, generateKeplerianOrbit, METH_NOARGS),
                DECLARE_METHOD(t_Omm, generateSpacecraftState, METH_NOARGS),
                DECLARE_METHOD(t_Omm, generateTLE, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getDate, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Omm)[] = {
                { Py_tp_methods, t_Omm__methods_ },
                { Py_tp_init, (void *) t_Omm_init_ },
                { Py_tp_getset, t_Omm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Omm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Omm, t_Omm, Omm);
              PyObject *t_Omm::wrap_Object(const Omm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Omm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Omm *self = (t_Omm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Omm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Omm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Omm *self = (t_Omm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Omm::install(PyObject *module)
              {
                installType(&PY_TYPE(Omm), &PY_TYPE_DEF(Omm), module, "Omm", 0);
              }

              void t_Omm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "class_", make_descriptor(Omm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "wrapfn_", make_descriptor(t_Omm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Omm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Omm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "ROOT", make_descriptor(j2p(*Omm::ROOT)));
              }

              static PyObject *t_Omm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Omm::initializeClass, 1)))
                  return NULL;
                return t_Omm::wrap_Object(Omm(((t_Omm *) arg)->object.this$));
              }
              static PyObject *t_Omm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Omm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Omm_of_(t_Omm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Omm_init_(t_Omm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Omm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Omm(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Omm_generateKeplerianOrbit(t_Omm *self)
              {
                ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.generateKeplerianOrbit());
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }

              static PyObject *t_Omm_generateSpacecraftState(t_Omm *self)
              {
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
                OBJ_CALL(result = self->object.generateSpacecraftState());
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }

              static PyObject *t_Omm_generateTLE(t_Omm *self)
              {
                ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
                OBJ_CALL(result = self->object.generateTLE());
                return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
              }

              static PyObject *t_Omm_getData(t_Omm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmData::wrap_Object(result);
              }

              static PyObject *t_Omm_getDate(t_Omm *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Omm_getMetadata(t_Omm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmMetadata::wrap_Object(result);
              }
              static PyObject *t_Omm_get__parameters_(t_Omm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Omm_get__data(t_Omm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmData::wrap_Object(value);
              }

              static PyObject *t_Omm_get__date(t_Omm *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_Omm_get__metadata(t_Omm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmMetadata::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *ProcessingState::class$ = NULL;
            jmethodID *ProcessingState::mids$ = NULL;
            bool ProcessingState::live$ = false;

            jclass ProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/ProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_processToken_85d9863c57bc3b0c] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_85d9863c57bc3b0c], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {
            static PyObject *t_ProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ProcessingState_processToken(t_ProcessingState *self, PyObject *arg);

            static PyMethodDef t_ProcessingState__methods_[] = {
              DECLARE_METHOD(t_ProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ProcessingState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ProcessingState)[] = {
              { Py_tp_methods, t_ProcessingState__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ProcessingState, t_ProcessingState, ProcessingState);

            void t_ProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(ProcessingState), &PY_TYPE_DEF(ProcessingState), module, "ProcessingState", 0);
            }

            void t_ProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "class_", make_descriptor(ProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "wrapfn_", make_descriptor(t_ProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ProcessingState::initializeClass, 1)))
                return NULL;
              return t_ProcessingState::wrap_Object(ProcessingState(((t_ProcessingState *) arg)->object.this$));
            }
            static PyObject *t_ProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ProcessingState_processToken(t_ProcessingState *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processToken(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processToken", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/CircularFieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *CircularFieldOfView::class$ = NULL;
        jmethodID *CircularFieldOfView::mids$ = NULL;
        bool CircularFieldOfView::live$ = false;

        jclass CircularFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/CircularFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a55d6d358b7d4a5f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DD)V");
            mids$[mid_getHalfAperture_dff5885c2c873297] = env->getMethodID(cls, "getHalfAperture", "()D");
            mids$[mid_offsetFromBoundary_92bc6ba59ebf6937] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_d0fe714ef34714f7] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_9137bba253a33d9c] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CircularFieldOfView::CircularFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, jdouble a2) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_a55d6d358b7d4a5f, a0.this$, a1, a2)) {}

        jdouble CircularFieldOfView::getHalfAperture() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfAperture_dff5885c2c873297]);
        }

        jdouble CircularFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_92bc6ba59ebf6937], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D CircularFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_d0fe714ef34714f7], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        static PyObject *t_CircularFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CircularFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CircularFieldOfView_init_(t_CircularFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CircularFieldOfView_getHalfAperture(t_CircularFieldOfView *self);
        static PyObject *t_CircularFieldOfView_offsetFromBoundary(t_CircularFieldOfView *self, PyObject *args);
        static PyObject *t_CircularFieldOfView_projectToBoundary(t_CircularFieldOfView *self, PyObject *args);
        static PyObject *t_CircularFieldOfView_get__halfAperture(t_CircularFieldOfView *self, void *data);
        static PyGetSetDef t_CircularFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_CircularFieldOfView, halfAperture),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CircularFieldOfView__methods_[] = {
          DECLARE_METHOD(t_CircularFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CircularFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CircularFieldOfView, getHalfAperture, METH_NOARGS),
          DECLARE_METHOD(t_CircularFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_CircularFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CircularFieldOfView)[] = {
          { Py_tp_methods, t_CircularFieldOfView__methods_ },
          { Py_tp_init, (void *) t_CircularFieldOfView_init_ },
          { Py_tp_getset, t_CircularFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CircularFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(CircularFieldOfView, t_CircularFieldOfView, CircularFieldOfView);

        void t_CircularFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(CircularFieldOfView), &PY_TYPE_DEF(CircularFieldOfView), module, "CircularFieldOfView", 0);
        }

        void t_CircularFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "class_", make_descriptor(CircularFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "wrapfn_", make_descriptor(t_CircularFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CircularFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CircularFieldOfView::initializeClass, 1)))
            return NULL;
          return t_CircularFieldOfView::wrap_Object(CircularFieldOfView(((t_CircularFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_CircularFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CircularFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CircularFieldOfView_init_(t_CircularFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          CircularFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = CircularFieldOfView(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CircularFieldOfView_getHalfAperture(t_CircularFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfAperture());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CircularFieldOfView_offsetFromBoundary(t_CircularFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CircularFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_CircularFieldOfView_projectToBoundary(t_CircularFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(CircularFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_CircularFieldOfView_get__halfAperture(t_CircularFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfAperture());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovariance::class$ = NULL;
              jmethodID *AttitudeCovariance::mids$ = NULL;
              bool AttitudeCovariance::live$ = false;

              jclass AttitudeCovariance::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_dcfac03f71576299] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMatrix_c1458e35d8bd3b65] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/DiagonalMatrix;");
                  mids$[mid_getType_dbbc6c3c22ca640c] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovariance::AttitudeCovariance(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< ::java::lang::String > & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dcfac03f71576299, a0.this$, a1.this$, a2.this$, a3)) {}

              ::org::orekit::time::AbsoluteDate AttitudeCovariance::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
              }

              ::org::hipparchus::linear::DiagonalMatrix AttitudeCovariance::getMatrix() const
              {
                return ::org::hipparchus::linear::DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_c1458e35d8bd3b65]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeCovariance::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getType_dbbc6c3c22ca640c]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AttitudeCovariance_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovariance_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovariance_init_(t_AttitudeCovariance *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovariance_getDate(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_getMatrix(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_getType(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_get__date(t_AttitudeCovariance *self, void *data);
              static PyObject *t_AttitudeCovariance_get__matrix(t_AttitudeCovariance *self, void *data);
              static PyObject *t_AttitudeCovariance_get__type(t_AttitudeCovariance *self, void *data);
              static PyGetSetDef t_AttitudeCovariance__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovariance, date),
                DECLARE_GET_FIELD(t_AttitudeCovariance, matrix),
                DECLARE_GET_FIELD(t_AttitudeCovariance, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovariance__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovariance, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovariance, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovariance, getDate, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovariance, getMatrix, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovariance, getType, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovariance)[] = {
                { Py_tp_methods, t_AttitudeCovariance__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovariance_init_ },
                { Py_tp_getset, t_AttitudeCovariance__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovariance)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeCovariance, t_AttitudeCovariance, AttitudeCovariance);

              void t_AttitudeCovariance::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovariance), &PY_TYPE_DEF(AttitudeCovariance), module, "AttitudeCovariance", 0);
              }

              void t_AttitudeCovariance::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "class_", make_descriptor(AttitudeCovariance::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "wrapfn_", make_descriptor(t_AttitudeCovariance::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovariance_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovariance::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovariance::wrap_Object(AttitudeCovariance(((t_AttitudeCovariance *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovariance_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovariance::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovariance_init_(t_AttitudeCovariance *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                JArray< ::java::lang::String > a2((jobject) NULL);
                jint a3;
                AttitudeCovariance object((jobject) NULL);

                if (!parseArgs(args, "Kk[sI", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = AttitudeCovariance(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeCovariance_getDate(t_AttitudeCovariance *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_getMatrix(t_AttitudeCovariance *self)
              {
                ::org::hipparchus::linear::DiagonalMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getMatrix());
                return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_getType(t_AttitudeCovariance *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_get__date(t_AttitudeCovariance *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovariance_get__matrix(t_AttitudeCovariance *self, void *data)
              {
                ::org::hipparchus::linear::DiagonalMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getMatrix());
                return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovariance_get__type(t_AttitudeCovariance *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToGroundMapping.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToSensorMapping.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *Observables::class$ = NULL;
          jmethodID *Observables::mids$ = NULL;
          bool Observables::live$ = false;

          jclass Observables::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/Observables");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_addGroundMapping_3c453fa32a2c5ba5] = env->getMethodID(cls, "addGroundMapping", "(Lorg/orekit/rugged/adjustment/measurements/SensorToGroundMapping;)V");
              mids$[mid_addInterMapping_d927b7daafd7c09a] = env->getMethodID(cls, "addInterMapping", "(Lorg/orekit/rugged/adjustment/measurements/SensorToSensorMapping;)V");
              mids$[mid_getGroundMapping_67bb76e411ff1ed2] = env->getMethodID(cls, "getGroundMapping", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/rugged/adjustment/measurements/SensorToGroundMapping;");
              mids$[mid_getGroundMappings_37528d110cff6b74] = env->getMethodID(cls, "getGroundMappings", "()Ljava/util/Collection;");
              mids$[mid_getInterMapping_eeb650d7ed3a1f0b] = env->getMethodID(cls, "getInterMapping", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/rugged/adjustment/measurements/SensorToSensorMapping;");
              mids$[mid_getInterMappings_37528d110cff6b74] = env->getMethodID(cls, "getInterMappings", "()Ljava/util/Collection;");
              mids$[mid_getNbModels_570ce0828f81a2c1] = env->getMethodID(cls, "getNbModels", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Observables::Observables(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

          void Observables::addGroundMapping(const ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGroundMapping_3c453fa32a2c5ba5], a0.this$);
          }

          void Observables::addInterMapping(const ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addInterMapping_d927b7daafd7c09a], a0.this$);
          }

          ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping Observables::getGroundMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) const
          {
            return ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping(env->callObjectMethod(this$, mids$[mid_getGroundMapping_67bb76e411ff1ed2], a0.this$, a1.this$));
          }

          ::java::util::Collection Observables::getGroundMappings() const
          {
            return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getGroundMappings_37528d110cff6b74]));
          }

          ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping Observables::getInterMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) const
          {
            return ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping(env->callObjectMethod(this$, mids$[mid_getInterMapping_eeb650d7ed3a1f0b], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::java::util::Collection Observables::getInterMappings() const
          {
            return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getInterMappings_37528d110cff6b74]));
          }

          jint Observables::getNbModels() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbModels_570ce0828f81a2c1]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          static PyObject *t_Observables_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Observables_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Observables_init_(t_Observables *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Observables_addGroundMapping(t_Observables *self, PyObject *arg);
          static PyObject *t_Observables_addInterMapping(t_Observables *self, PyObject *arg);
          static PyObject *t_Observables_getGroundMapping(t_Observables *self, PyObject *args);
          static PyObject *t_Observables_getGroundMappings(t_Observables *self);
          static PyObject *t_Observables_getInterMapping(t_Observables *self, PyObject *args);
          static PyObject *t_Observables_getInterMappings(t_Observables *self);
          static PyObject *t_Observables_getNbModels(t_Observables *self);
          static PyObject *t_Observables_get__groundMappings(t_Observables *self, void *data);
          static PyObject *t_Observables_get__interMappings(t_Observables *self, void *data);
          static PyObject *t_Observables_get__nbModels(t_Observables *self, void *data);
          static PyGetSetDef t_Observables__fields_[] = {
            DECLARE_GET_FIELD(t_Observables, groundMappings),
            DECLARE_GET_FIELD(t_Observables, interMappings),
            DECLARE_GET_FIELD(t_Observables, nbModels),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Observables__methods_[] = {
            DECLARE_METHOD(t_Observables, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Observables, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Observables, addGroundMapping, METH_O),
            DECLARE_METHOD(t_Observables, addInterMapping, METH_O),
            DECLARE_METHOD(t_Observables, getGroundMapping, METH_VARARGS),
            DECLARE_METHOD(t_Observables, getGroundMappings, METH_NOARGS),
            DECLARE_METHOD(t_Observables, getInterMapping, METH_VARARGS),
            DECLARE_METHOD(t_Observables, getInterMappings, METH_NOARGS),
            DECLARE_METHOD(t_Observables, getNbModels, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Observables)[] = {
            { Py_tp_methods, t_Observables__methods_ },
            { Py_tp_init, (void *) t_Observables_init_ },
            { Py_tp_getset, t_Observables__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Observables)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Observables, t_Observables, Observables);

          void t_Observables::install(PyObject *module)
          {
            installType(&PY_TYPE(Observables), &PY_TYPE_DEF(Observables), module, "Observables", 0);
          }

          void t_Observables::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Observables), "class_", make_descriptor(Observables::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Observables), "wrapfn_", make_descriptor(t_Observables::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Observables), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Observables_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Observables::initializeClass, 1)))
              return NULL;
            return t_Observables::wrap_Object(Observables(((t_Observables *) arg)->object.this$));
          }
          static PyObject *t_Observables_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Observables::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Observables_init_(t_Observables *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            Observables object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Observables(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Observables_addGroundMapping(t_Observables *self, PyObject *arg)
          {
            ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGroundMapping(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGroundMapping", arg);
            return NULL;
          }

          static PyObject *t_Observables_addInterMapping(t_Observables *self, PyObject *arg)
          {
            ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addInterMapping(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addInterMapping", arg);
            return NULL;
          }

          static PyObject *t_Observables_getGroundMapping(t_Observables *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping result((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGroundMapping(a0, a1));
              return ::org::orekit::rugged::adjustment::measurements::t_SensorToGroundMapping::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getGroundMapping", args);
            return NULL;
          }

          static PyObject *t_Observables_getGroundMappings(t_Observables *self)
          {
            ::java::util::Collection result((jobject) NULL);
            OBJ_CALL(result = self->object.getGroundMappings());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::rugged::adjustment::measurements::PY_TYPE(SensorToGroundMapping));
          }

          static PyObject *t_Observables_getInterMapping(t_Observables *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping result((jobject) NULL);

            if (!parseArgs(args, "ssss", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getInterMapping(a0, a1, a2, a3));
              return ::org::orekit::rugged::adjustment::measurements::t_SensorToSensorMapping::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInterMapping", args);
            return NULL;
          }

          static PyObject *t_Observables_getInterMappings(t_Observables *self)
          {
            ::java::util::Collection result((jobject) NULL);
            OBJ_CALL(result = self->object.getInterMappings());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::rugged::adjustment::measurements::PY_TYPE(SensorToSensorMapping));
          }

          static PyObject *t_Observables_getNbModels(t_Observables *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbModels());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Observables_get__groundMappings(t_Observables *self, void *data)
          {
            ::java::util::Collection value((jobject) NULL);
            OBJ_CALL(value = self->object.getGroundMappings());
            return ::java::util::t_Collection::wrap_Object(value);
          }

          static PyObject *t_Observables_get__interMappings(t_Observables *self, void *data)
          {
            ::java::util::Collection value((jobject) NULL);
            OBJ_CALL(value = self->object.getInterMappings());
            return ::java::util::t_Collection::wrap_Object(value);
          }

          static PyObject *t_Observables_get__nbModels(t_Observables *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbModels());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphereBDGIMMessage.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereBDGIMMessage::class$ = NULL;
          jmethodID *IonosphereBDGIMMessage::mids$ = NULL;
          bool IonosphereBDGIMMessage::live$ = false;

          jclass IonosphereBDGIMMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereBDGIMMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a82ff7a18fa6993f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAlpha_60c7040667a7dc5c] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_setAlphaI_bb79ca80d85d0a66] = env->getMethodID(cls, "setAlphaI", "(ID)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereBDGIMMessage::IonosphereBDGIMMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_a82ff7a18fa6993f, a0.this$, a1, a2.this$)) {}

          JArray< jdouble > IonosphereBDGIMMessage::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_60c7040667a7dc5c]));
          }

          void IonosphereBDGIMMessage::setAlphaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setAlphaI_bb79ca80d85d0a66], a0, a1);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          static PyObject *t_IonosphereBDGIMMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereBDGIMMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereBDGIMMessage_init_(t_IonosphereBDGIMMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereBDGIMMessage_getAlpha(t_IonosphereBDGIMMessage *self);
          static PyObject *t_IonosphereBDGIMMessage_setAlphaI(t_IonosphereBDGIMMessage *self, PyObject *args);
          static PyObject *t_IonosphereBDGIMMessage_get__alpha(t_IonosphereBDGIMMessage *self, void *data);
          static PyGetSetDef t_IonosphereBDGIMMessage__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphereBDGIMMessage, alpha),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereBDGIMMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereBDGIMMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, setAlphaI, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereBDGIMMessage)[] = {
            { Py_tp_methods, t_IonosphereBDGIMMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereBDGIMMessage_init_ },
            { Py_tp_getset, t_IonosphereBDGIMMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereBDGIMMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereBDGIMMessage, t_IonosphereBDGIMMessage, IonosphereBDGIMMessage);

          void t_IonosphereBDGIMMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereBDGIMMessage), &PY_TYPE_DEF(IonosphereBDGIMMessage), module, "IonosphereBDGIMMessage", 0);
          }

          void t_IonosphereBDGIMMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "class_", make_descriptor(IonosphereBDGIMMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "wrapfn_", make_descriptor(t_IonosphereBDGIMMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereBDGIMMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereBDGIMMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereBDGIMMessage::wrap_Object(IonosphereBDGIMMessage(((t_IonosphereBDGIMMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereBDGIMMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereBDGIMMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereBDGIMMessage_init_(t_IonosphereBDGIMMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereBDGIMMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereBDGIMMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereBDGIMMessage_getAlpha(t_IonosphereBDGIMMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_IonosphereBDGIMMessage_setAlphaI(t_IonosphereBDGIMMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setAlphaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAlphaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereBDGIMMessage_get__alpha(t_IonosphereBDGIMMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractEphemerisMessage::class$ = NULL;
            jmethodID *AbstractEphemerisMessage::mids$ = NULL;
            bool AbstractEphemerisMessage::live$ = false;

            jclass AbstractEphemerisMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getEpochToc_85703d13e302437e] = env->getMethodID(cls, "getEpochToc", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getHealth_dff5885c2c873297] = env->getMethodID(cls, "getHealth", "()D");
                mids$[mid_getPRN_570ce0828f81a2c1] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getX_dff5885c2c873297] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_dff5885c2c873297] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_dff5885c2c873297] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_dff5885c2c873297] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_dff5885c2c873297] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_dff5885c2c873297] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_dff5885c2c873297] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_dff5885c2c873297] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_dff5885c2c873297] = env->getMethodID(cls, "getZDotDot", "()D");
                mids$[mid_setDate_600a2a61652bc473] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setEpochToc_600a2a61652bc473] = env->getMethodID(cls, "setEpochToc", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setHealth_17db3a65980d3441] = env->getMethodID(cls, "setHealth", "(D)V");
                mids$[mid_setPRN_99803b0791f320ff] = env->getMethodID(cls, "setPRN", "(I)V");
                mids$[mid_setX_17db3a65980d3441] = env->getMethodID(cls, "setX", "(D)V");
                mids$[mid_setXDot_17db3a65980d3441] = env->getMethodID(cls, "setXDot", "(D)V");
                mids$[mid_setXDotDot_17db3a65980d3441] = env->getMethodID(cls, "setXDotDot", "(D)V");
                mids$[mid_setY_17db3a65980d3441] = env->getMethodID(cls, "setY", "(D)V");
                mids$[mid_setYDot_17db3a65980d3441] = env->getMethodID(cls, "setYDot", "(D)V");
                mids$[mid_setYDotDot_17db3a65980d3441] = env->getMethodID(cls, "setYDotDot", "(D)V");
                mids$[mid_setZ_17db3a65980d3441] = env->getMethodID(cls, "setZ", "(D)V");
                mids$[mid_setZDot_17db3a65980d3441] = env->getMethodID(cls, "setZDot", "(D)V");
                mids$[mid_setZDotDot_17db3a65980d3441] = env->getMethodID(cls, "setZDotDot", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractEphemerisMessage::AbstractEphemerisMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            ::org::orekit::time::AbsoluteDate AbstractEphemerisMessage::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
            }

            ::org::orekit::time::AbsoluteDate AbstractEphemerisMessage::getEpochToc() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochToc_85703d13e302437e]));
            }

            jdouble AbstractEphemerisMessage::getHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHealth_dff5885c2c873297]);
            }

            jint AbstractEphemerisMessage::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_570ce0828f81a2c1]);
            }

            jdouble AbstractEphemerisMessage::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_dff5885c2c873297]);
            }

            jdouble AbstractEphemerisMessage::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_dff5885c2c873297]);
            }

            jdouble AbstractEphemerisMessage::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_dff5885c2c873297]);
            }

            jdouble AbstractEphemerisMessage::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_dff5885c2c873297]);
            }

            jdouble AbstractEphemerisMessage::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_dff5885c2c873297]);
            }

            jdouble AbstractEphemerisMessage::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_dff5885c2c873297]);
            }

            jdouble AbstractEphemerisMessage::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_dff5885c2c873297]);
            }

            jdouble AbstractEphemerisMessage::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_dff5885c2c873297]);
            }

            jdouble AbstractEphemerisMessage::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_dff5885c2c873297]);
            }

            void AbstractEphemerisMessage::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDate_600a2a61652bc473], a0.this$);
            }

            void AbstractEphemerisMessage::setEpochToc(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpochToc_600a2a61652bc473], a0.this$);
            }

            void AbstractEphemerisMessage::setHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_17db3a65980d3441], a0);
            }

            void AbstractEphemerisMessage::setPRN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPRN_99803b0791f320ff], a0);
            }

            void AbstractEphemerisMessage::setX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setX_17db3a65980d3441], a0);
            }

            void AbstractEphemerisMessage::setXDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXDot_17db3a65980d3441], a0);
            }

            void AbstractEphemerisMessage::setXDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXDotDot_17db3a65980d3441], a0);
            }

            void AbstractEphemerisMessage::setY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setY_17db3a65980d3441], a0);
            }

            void AbstractEphemerisMessage::setYDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYDot_17db3a65980d3441], a0);
            }

            void AbstractEphemerisMessage::setYDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYDotDot_17db3a65980d3441], a0);
            }

            void AbstractEphemerisMessage::setZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZ_17db3a65980d3441], a0);
            }

            void AbstractEphemerisMessage::setZDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZDot_17db3a65980d3441], a0);
            }

            void AbstractEphemerisMessage::setZDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZDotDot_17db3a65980d3441], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_AbstractEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractEphemerisMessage_init_(t_AbstractEphemerisMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractEphemerisMessage_getDate(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getEpochToc(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getHealth(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getPRN(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getX(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getXDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getXDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getY(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getYDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getYDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZ(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_setDate(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setEpochToc(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setHealth(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setPRN(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setX(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setXDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setXDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setY(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setYDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setYDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZ(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_get__date(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__date(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__epochToc(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__epochToc(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__health(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__health(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__pRN(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__pRN(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__x(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__x(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__xDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__xDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__xDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__xDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__y(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__y(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__yDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__yDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__yDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__yDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__z(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__z(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__zDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__zDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__zDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__zDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_AbstractEphemerisMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, date),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, epochToc),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, health),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, pRN),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, x),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, xDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, xDotDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, y),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, yDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, yDotDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, z),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, zDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractEphemerisMessage__methods_[] = {
              DECLARE_METHOD(t_AbstractEphemerisMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getEpochToc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getX, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getY, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZ, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setDate, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setEpochToc, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setHealth, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setPRN, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setX, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setXDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setXDotDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setY, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setYDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setYDotDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZ, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZDotDot, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractEphemerisMessage)[] = {
              { Py_tp_methods, t_AbstractEphemerisMessage__methods_ },
              { Py_tp_init, (void *) t_AbstractEphemerisMessage_init_ },
              { Py_tp_getset, t_AbstractEphemerisMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractEphemerisMessage)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractEphemerisMessage, t_AbstractEphemerisMessage, AbstractEphemerisMessage);

            void t_AbstractEphemerisMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractEphemerisMessage), &PY_TYPE_DEF(AbstractEphemerisMessage), module, "AbstractEphemerisMessage", 0);
            }

            void t_AbstractEphemerisMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "class_", make_descriptor(AbstractEphemerisMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "wrapfn_", make_descriptor(t_AbstractEphemerisMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractEphemerisMessage::initializeClass, 1)))
                return NULL;
              return t_AbstractEphemerisMessage::wrap_Object(AbstractEphemerisMessage(((t_AbstractEphemerisMessage *) arg)->object.this$));
            }
            static PyObject *t_AbstractEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractEphemerisMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractEphemerisMessage_init_(t_AbstractEphemerisMessage *self, PyObject *args, PyObject *kwds)
            {
              AbstractEphemerisMessage object((jobject) NULL);

              INT_CALL(object = AbstractEphemerisMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_AbstractEphemerisMessage_getDate(t_AbstractEphemerisMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractEphemerisMessage_getEpochToc(t_AbstractEphemerisMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractEphemerisMessage_getHealth(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getPRN(t_AbstractEphemerisMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getX(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getXDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getXDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getY(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getYDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getYDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZ(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_setDate(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setEpochToc(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpochToc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpochToc", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setHealth(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setPRN(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setPRN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPRN", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setX(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setX", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setXDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setXDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setY(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setY", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setYDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setYDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZ(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZ", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_get__date(t_AbstractEphemerisMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractEphemerisMessage_set__date(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "date", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__epochToc(t_AbstractEphemerisMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractEphemerisMessage_set__epochToc(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpochToc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epochToc", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__health(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__health(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__pRN(t_AbstractEphemerisMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }
            static int t_AbstractEphemerisMessage_set__pRN(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setPRN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pRN", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__x(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__x(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "x", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__xDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__xDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__xDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__xDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xDotDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__y(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__y(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "y", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__yDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__yDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "yDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__yDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__yDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "yDotDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__z(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__z(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "z", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__zDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__zDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__zDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__zDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zDotDot", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
