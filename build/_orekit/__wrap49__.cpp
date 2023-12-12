#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader.h"
#include "java/io/IOException.h"
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "java/util/SortedSet.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *DtcDataLoader::class$ = NULL;
            jmethodID *DtcDataLoader::mids$ = NULL;
            bool DtcDataLoader::live$ = false;

            jclass DtcDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/DtcDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3e3301925c0131d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_c6b6a992db588a51] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
                mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DtcDataLoader::DtcDataLoader(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e3301925c0131d4, a0.this$)) {}

            ::java::util::SortedSet DtcDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_c6b6a992db588a51]));
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
            }

            void DtcDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
            }

            jboolean DtcDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_89b302893bdbe1f1]);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_DtcDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DtcDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DtcDataLoader_init_(t_DtcDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DtcDataLoader_getDataSet(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_getMaxDate(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_getMinDate(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_loadData(t_DtcDataLoader *self, PyObject *args);
            static PyObject *t_DtcDataLoader_stillAcceptsData(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_get__dataSet(t_DtcDataLoader *self, void *data);
            static PyObject *t_DtcDataLoader_get__maxDate(t_DtcDataLoader *self, void *data);
            static PyObject *t_DtcDataLoader_get__minDate(t_DtcDataLoader *self, void *data);
            static PyGetSetDef t_DtcDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_DtcDataLoader, dataSet),
              DECLARE_GET_FIELD(t_DtcDataLoader, maxDate),
              DECLARE_GET_FIELD(t_DtcDataLoader, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DtcDataLoader__methods_[] = {
              DECLARE_METHOD(t_DtcDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, loadData, METH_VARARGS),
              DECLARE_METHOD(t_DtcDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DtcDataLoader)[] = {
              { Py_tp_methods, t_DtcDataLoader__methods_ },
              { Py_tp_init, (void *) t_DtcDataLoader_init_ },
              { Py_tp_getset, t_DtcDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DtcDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DtcDataLoader, t_DtcDataLoader, DtcDataLoader);

            void t_DtcDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(DtcDataLoader), &PY_TYPE_DEF(DtcDataLoader), module, "DtcDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(DtcDataLoader$LineParameters)));
            }

            void t_DtcDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "class_", make_descriptor(DtcDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "wrapfn_", make_descriptor(t_DtcDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DtcDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DtcDataLoader::initializeClass, 1)))
                return NULL;
              return t_DtcDataLoader::wrap_Object(DtcDataLoader(((t_DtcDataLoader *) arg)->object.this$));
            }
            static PyObject *t_DtcDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DtcDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DtcDataLoader_init_(t_DtcDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              DtcDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = DtcDataLoader(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DtcDataLoader_getDataSet(t_DtcDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(DtcDataLoader$LineParameters));
            }

            static PyObject *t_DtcDataLoader_getMaxDate(t_DtcDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader_getMinDate(t_DtcDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader_loadData(t_DtcDataLoader *self, PyObject *args)
            {
              ::java::io::InputStream a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.loadData(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "loadData", args);
              return NULL;
            }

            static PyObject *t_DtcDataLoader_stillAcceptsData(t_DtcDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_DtcDataLoader_get__dataSet(t_DtcDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_DtcDataLoader_get__maxDate(t_DtcDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_DtcDataLoader_get__minDate(t_DtcDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldUnivariateVectorFunction.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateVectorFunction::class$ = NULL;
      jmethodID *FieldUnivariateVectorFunction::mids$ = NULL;
      bool FieldUnivariateVectorFunction::live$ = false;

      jclass FieldUnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateVectorFunction_fa57fb650f468ffb] = env->getMethodID(cls, "toCalculusFieldUnivariateVectorFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateVectorFunction;");
          mids$[mid_value_0baeeb97b799c59f] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction FieldUnivariateVectorFunction::toCalculusFieldUnivariateVectorFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateVectorFunction_fa57fb650f468ffb], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldUnivariateVectorFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_0baeeb97b799c59f], a0.this$));
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
      static PyObject *t_FieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_toCalculusFieldUnivariateVectorFunction(t_FieldUnivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_value(t_FieldUnivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, toCalculusFieldUnivariateVectorFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateVectorFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateVectorFunction, t_FieldUnivariateVectorFunction, FieldUnivariateVectorFunction);

      void t_FieldUnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateVectorFunction), &PY_TYPE_DEF(FieldUnivariateVectorFunction), module, "FieldUnivariateVectorFunction", 0);
      }

      void t_FieldUnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "class_", make_descriptor(FieldUnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "wrapfn_", make_descriptor(t_FieldUnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateVectorFunction::wrap_Object(FieldUnivariateVectorFunction(((t_FieldUnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateVectorFunction_toCalculusFieldUnivariateVectorFunction(t_FieldUnivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateVectorFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateVectorFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateVectorFunction_value(t_FieldUnivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader$Parser.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIHistoryFilesLoader$Parser::class$ = NULL;
      jmethodID *UTCTAIHistoryFilesLoader$Parser::mids$ = NULL;
      bool UTCTAIHistoryFilesLoader$Parser::live$ = false;

      jclass UTCTAIHistoryFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIHistoryFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_e3101d06c7a1bcab] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIHistoryFilesLoader$Parser::UTCTAIHistoryFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ::java::util::List UTCTAIHistoryFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_e3101d06c7a1bcab], a0.this$, a1.this$));
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
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIHistoryFilesLoader$Parser_init_(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_parse(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_UTCTAIHistoryFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIHistoryFilesLoader$Parser)[] = {
        { Py_tp_methods, t_UTCTAIHistoryFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_UTCTAIHistoryFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIHistoryFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIHistoryFilesLoader$Parser, t_UTCTAIHistoryFilesLoader$Parser, UTCTAIHistoryFilesLoader$Parser);

      void t_UTCTAIHistoryFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIHistoryFilesLoader$Parser), &PY_TYPE_DEF(UTCTAIHistoryFilesLoader$Parser), module, "UTCTAIHistoryFilesLoader$Parser", 0);
      }

      void t_UTCTAIHistoryFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "class_", make_descriptor(UTCTAIHistoryFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "wrapfn_", make_descriptor(t_UTCTAIHistoryFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIHistoryFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_UTCTAIHistoryFilesLoader$Parser::wrap_Object(UTCTAIHistoryFilesLoader$Parser(((t_UTCTAIHistoryFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIHistoryFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIHistoryFilesLoader$Parser_init_(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        UTCTAIHistoryFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = UTCTAIHistoryFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_parse(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/NetworkCrawler.h"
#include "java/lang/Class.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *NetworkCrawler::class$ = NULL;
      jmethodID *NetworkCrawler::mids$ = NULL;
      bool NetworkCrawler::live$ = false;

      jclass NetworkCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/NetworkCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_547df9b9500361a7] = env->getMethodID(cls, "<init>", "([Ljava/net/URL;)V");
          mids$[mid_setTimeout_a3da1a935cb37f7b] = env->getMethodID(cls, "setTimeout", "(I)V");
          mids$[mid_getCompleteName_13c5aa3bcbbd9c42] = env->getMethodID(cls, "getCompleteName", "(Ljava/net/URL;)Ljava/lang/String;");
          mids$[mid_getBaseName_13c5aa3bcbbd9c42] = env->getMethodID(cls, "getBaseName", "(Ljava/net/URL;)Ljava/lang/String;");
          mids$[mid_getZipJarCrawler_28ea1f296b724d3d] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/net/URL;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_getStream_4c4eb733996e551b] = env->getMethodID(cls, "getStream", "(Ljava/net/URL;)Ljava/io/InputStream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NetworkCrawler::NetworkCrawler(const JArray< ::java::net::URL > & a0) : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_547df9b9500361a7, a0.this$)) {}

      void NetworkCrawler::setTimeout(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setTimeout_a3da1a935cb37f7b], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_NetworkCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NetworkCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NetworkCrawler_of_(t_NetworkCrawler *self, PyObject *args);
      static int t_NetworkCrawler_init_(t_NetworkCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NetworkCrawler_setTimeout(t_NetworkCrawler *self, PyObject *arg);
      static int t_NetworkCrawler_set__timeout(t_NetworkCrawler *self, PyObject *arg, void *data);
      static PyObject *t_NetworkCrawler_get__parameters_(t_NetworkCrawler *self, void *data);
      static PyGetSetDef t_NetworkCrawler__fields_[] = {
        DECLARE_SET_FIELD(t_NetworkCrawler, timeout),
        DECLARE_GET_FIELD(t_NetworkCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_NetworkCrawler__methods_[] = {
        DECLARE_METHOD(t_NetworkCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NetworkCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NetworkCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_NetworkCrawler, setTimeout, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NetworkCrawler)[] = {
        { Py_tp_methods, t_NetworkCrawler__methods_ },
        { Py_tp_init, (void *) t_NetworkCrawler_init_ },
        { Py_tp_getset, t_NetworkCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NetworkCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(NetworkCrawler, t_NetworkCrawler, NetworkCrawler);
      PyObject *t_NetworkCrawler::wrap_Object(const NetworkCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_NetworkCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_NetworkCrawler *self = (t_NetworkCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_NetworkCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_NetworkCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_NetworkCrawler *self = (t_NetworkCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_NetworkCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(NetworkCrawler), &PY_TYPE_DEF(NetworkCrawler), module, "NetworkCrawler", 0);
      }

      void t_NetworkCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "class_", make_descriptor(NetworkCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "wrapfn_", make_descriptor(t_NetworkCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NetworkCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NetworkCrawler::initializeClass, 1)))
          return NULL;
        return t_NetworkCrawler::wrap_Object(NetworkCrawler(((t_NetworkCrawler *) arg)->object.this$));
      }
      static PyObject *t_NetworkCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NetworkCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NetworkCrawler_of_(t_NetworkCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_NetworkCrawler_init_(t_NetworkCrawler *self, PyObject *args, PyObject *kwds)
      {
        JArray< ::java::net::URL > a0((jobject) NULL);
        NetworkCrawler object((jobject) NULL);

        if (!parseArgs(args, "[k", ::java::net::URL::initializeClass, &a0))
        {
          INT_CALL(object = NetworkCrawler(a0));
          self->object = object;
          self->parameters[0] = ::java::net::PY_TYPE(URL);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_NetworkCrawler_setTimeout(t_NetworkCrawler *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setTimeout(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setTimeout", arg);
        return NULL;
      }
      static PyObject *t_NetworkCrawler_get__parameters_(t_NetworkCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static int t_NetworkCrawler_set__timeout(t_NetworkCrawler *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setTimeout(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "timeout", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldStepHandlerMultiplexer::class$ = NULL;
        jmethodID *FieldStepHandlerMultiplexer::mids$ = NULL;
        bool FieldStepHandlerMultiplexer::live$ = false;

        jclass FieldStepHandlerMultiplexer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldStepHandlerMultiplexer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_69a7e501f9a938a3] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");
            mids$[mid_add_c9f4018f814d2514] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_finish_b66c84a5711243d5] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getHandlers_0d9551367f7ecdef] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
            mids$[mid_handleStep_c006764357a9d9b2] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_remove_a1360aa6c3a89612] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_remove_69a7e501f9a938a3] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepHandlerMultiplexer::FieldStepHandlerMultiplexer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void FieldStepHandlerMultiplexer::add(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_69a7e501f9a938a3], a0.this$);
        }

        void FieldStepHandlerMultiplexer::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_add_c9f4018f814d2514], a0.this$, a1.this$);
        }

        void FieldStepHandlerMultiplexer::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
        }

        void FieldStepHandlerMultiplexer::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_b66c84a5711243d5], a0.this$);
        }

        ::java::util::List FieldStepHandlerMultiplexer::getHandlers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_0d9551367f7ecdef]));
        }

        void FieldStepHandlerMultiplexer::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_c006764357a9d9b2], a0.this$);
        }

        void FieldStepHandlerMultiplexer::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
        }

        void FieldStepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_a1360aa6c3a89612], a0.this$);
        }

        void FieldStepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_69a7e501f9a938a3], a0.this$);
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
      namespace sampling {
        static PyObject *t_FieldStepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_of_(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static int t_FieldStepHandlerMultiplexer_init_(t_FieldStepHandlerMultiplexer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldStepHandlerMultiplexer_add(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_FieldStepHandlerMultiplexer_clear(t_FieldStepHandlerMultiplexer *self);
        static PyObject *t_FieldStepHandlerMultiplexer_finish(t_FieldStepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_getHandlers(t_FieldStepHandlerMultiplexer *self);
        static PyObject *t_FieldStepHandlerMultiplexer_handleStep(t_FieldStepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_init(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_FieldStepHandlerMultiplexer_remove(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_FieldStepHandlerMultiplexer_get__handlers(t_FieldStepHandlerMultiplexer *self, void *data);
        static PyObject *t_FieldStepHandlerMultiplexer_get__parameters_(t_FieldStepHandlerMultiplexer *self, void *data);
        static PyGetSetDef t_FieldStepHandlerMultiplexer__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStepHandlerMultiplexer, handlers),
          DECLARE_GET_FIELD(t_FieldStepHandlerMultiplexer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStepHandlerMultiplexer__methods_[] = {
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, clear, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, finish, METH_O),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, getHandlers, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, handleStep, METH_O),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, remove, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStepHandlerMultiplexer)[] = {
          { Py_tp_methods, t_FieldStepHandlerMultiplexer__methods_ },
          { Py_tp_init, (void *) t_FieldStepHandlerMultiplexer_init_ },
          { Py_tp_getset, t_FieldStepHandlerMultiplexer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStepHandlerMultiplexer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStepHandlerMultiplexer, t_FieldStepHandlerMultiplexer, FieldStepHandlerMultiplexer);
        PyObject *t_FieldStepHandlerMultiplexer::wrap_Object(const FieldStepHandlerMultiplexer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepHandlerMultiplexer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepHandlerMultiplexer *self = (t_FieldStepHandlerMultiplexer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStepHandlerMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepHandlerMultiplexer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepHandlerMultiplexer *self = (t_FieldStepHandlerMultiplexer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStepHandlerMultiplexer::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStepHandlerMultiplexer), &PY_TYPE_DEF(FieldStepHandlerMultiplexer), module, "FieldStepHandlerMultiplexer", 0);
        }

        void t_FieldStepHandlerMultiplexer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepHandlerMultiplexer), "class_", make_descriptor(FieldStepHandlerMultiplexer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepHandlerMultiplexer), "wrapfn_", make_descriptor(t_FieldStepHandlerMultiplexer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepHandlerMultiplexer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStepHandlerMultiplexer::initializeClass, 1)))
            return NULL;
          return t_FieldStepHandlerMultiplexer::wrap_Object(FieldStepHandlerMultiplexer(((t_FieldStepHandlerMultiplexer *) arg)->object.this$));
        }
        static PyObject *t_FieldStepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStepHandlerMultiplexer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_of_(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldStepHandlerMultiplexer_init_(t_FieldStepHandlerMultiplexer *self, PyObject *args, PyObject *kwds)
        {
          FieldStepHandlerMultiplexer object((jobject) NULL);

          INT_CALL(object = FieldStepHandlerMultiplexer());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_add(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::FieldOrekitStepHandler a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepHandler::parameters_))
              {
                OBJ_CALL(self->object.add(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
              {
                OBJ_CALL(self->object.add(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_clear(t_FieldStepHandlerMultiplexer *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_finish(t_FieldStepHandlerMultiplexer *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_getHandlers(t_FieldStepHandlerMultiplexer *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldStepHandlerMultiplexer_handleStep(t_FieldStepHandlerMultiplexer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_init(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_remove(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::sampling::FieldOrekitStepHandler a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepHandler::parameters_))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remove", args);
          return NULL;
        }
        static PyObject *t_FieldStepHandlerMultiplexer_get__parameters_(t_FieldStepHandlerMultiplexer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldStepHandlerMultiplexer_get__handlers(t_FieldStepHandlerMultiplexer *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedRealFieldUnivariateSolver::class$ = NULL;
        jmethodID *BracketedRealFieldUnivariateSolver::mids$ = NULL;
        bool BracketedRealFieldUnivariateSolver::live$ = false;

        jclass BracketedRealFieldUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_613c8f46c659f636] = env->getMethodID(cls, "getAbsoluteAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_613c8f46c659f636] = env->getMethodID(cls, "getFunctionValueAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMaxEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getRelativeAccuracy_613c8f46c659f636] = env->getMethodID(cls, "getRelativeAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_f6a5d6fadadd7d54] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_430e429ac2a8f17e] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solveInterval_acb4742c5c4534ec] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");
            mids$[mid_solveInterval_1d0ea34064f6834b] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getAbsoluteAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbsoluteAccuracy_613c8f46c659f636]));
        }

        jint BracketedRealFieldUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getFunctionValueAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFunctionValueAccuracy_613c8f46c659f636]));
        }

        jint BracketedRealFieldUnivariateSolver::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_412668abc8d889e9]);
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getRelativeAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRelativeAccuracy_613c8f46c659f636]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_f6a5d6fadadd7d54], a0, a1.this$, a2.this$, a3.this$, a4.this$));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_430e429ac2a8f17e], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval BracketedRealFieldUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_acb4742c5c4534ec], a0, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval BracketedRealFieldUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_1d0ea34064f6834b], a0, a1.this$, a2.this$, a3.this$, a4.this$));
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
        static PyObject *t_BracketedRealFieldUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver_of_(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getAbsoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getEvaluations(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getFunctionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getMaxEvaluations(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getRelativeAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_solve(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_solveInterval(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__absoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__evaluations(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__functionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__maxEvaluations(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__relativeAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__parameters_(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyGetSetDef t_BracketedRealFieldUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, maxEvaluations),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedRealFieldUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedRealFieldUnivariateSolver)[] = {
          { Py_tp_methods, t_BracketedRealFieldUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BracketedRealFieldUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedRealFieldUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedRealFieldUnivariateSolver, t_BracketedRealFieldUnivariateSolver, BracketedRealFieldUnivariateSolver);
        PyObject *t_BracketedRealFieldUnivariateSolver::wrap_Object(const BracketedRealFieldUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver *self = (t_BracketedRealFieldUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedRealFieldUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver *self = (t_BracketedRealFieldUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedRealFieldUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedRealFieldUnivariateSolver), &PY_TYPE_DEF(BracketedRealFieldUnivariateSolver), module, "BracketedRealFieldUnivariateSolver", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "Interval", make_descriptor(&PY_TYPE_DEF(BracketedRealFieldUnivariateSolver$Interval)));
        }

        void t_BracketedRealFieldUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "class_", make_descriptor(BracketedRealFieldUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "wrapfn_", make_descriptor(t_BracketedRealFieldUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedRealFieldUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BracketedRealFieldUnivariateSolver::wrap_Object(BracketedRealFieldUnivariateSolver(((t_BracketedRealFieldUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedRealFieldUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_of_(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getAbsoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getEvaluations(t_BracketedRealFieldUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getFunctionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getMaxEvaluations(t_BracketedRealFieldUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getRelativeAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_solve(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_solveInterval(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3));
                return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
                return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__parameters_(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__absoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__evaluations(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__functionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__maxEvaluations(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__relativeAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/BaseOptimizer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *BaseOptimizer::class$ = NULL;
      jmethodID *BaseOptimizer::mids$ = NULL;
      bool BaseOptimizer::live$ = false;

      jclass BaseOptimizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/BaseOptimizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConvergenceChecker_4c680323f2c08379] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getIterations_412668abc8d889e9] = env->getMethodID(cls, "getIterations", "()I");
          mids$[mid_getMaxEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getMaxIterations_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterations", "()I");
          mids$[mid_optimize_e661fe3ba2fafb22] = env->getMethodID(cls, "optimize", "()Ljava/lang/Object;");
          mids$[mid_optimize_531d71f92ce59bee] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_incrementIterationCount_0640e6acf969ed28] = env->getMethodID(cls, "incrementIterationCount", "()V");
          mids$[mid_incrementEvaluationCount_0640e6acf969ed28] = env->getMethodID(cls, "incrementEvaluationCount", "()V");
          mids$[mid_doOptimize_e661fe3ba2fafb22] = env->getMethodID(cls, "doOptimize", "()Ljava/lang/Object;");
          mids$[mid_parseOptimizationData_946a92401917c130] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker BaseOptimizer::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_4c680323f2c08379]));
      }

      jint BaseOptimizer::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
      }

      jint BaseOptimizer::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_412668abc8d889e9]);
      }

      jint BaseOptimizer::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_412668abc8d889e9]);
      }

      jint BaseOptimizer::getMaxIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIterations_412668abc8d889e9]);
      }

      ::java::lang::Object BaseOptimizer::optimize() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_e661fe3ba2fafb22]));
      }

      ::java::lang::Object BaseOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_531d71f92ce59bee], a0.this$));
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
      static PyObject *t_BaseOptimizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseOptimizer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseOptimizer_of_(t_BaseOptimizer *self, PyObject *args);
      static PyObject *t_BaseOptimizer_getConvergenceChecker(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getEvaluations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getIterations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getMaxEvaluations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getMaxIterations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_optimize(t_BaseOptimizer *self, PyObject *args);
      static PyObject *t_BaseOptimizer_get__convergenceChecker(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__evaluations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__iterations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__maxEvaluations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__maxIterations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__parameters_(t_BaseOptimizer *self, void *data);
      static PyGetSetDef t_BaseOptimizer__fields_[] = {
        DECLARE_GET_FIELD(t_BaseOptimizer, convergenceChecker),
        DECLARE_GET_FIELD(t_BaseOptimizer, evaluations),
        DECLARE_GET_FIELD(t_BaseOptimizer, iterations),
        DECLARE_GET_FIELD(t_BaseOptimizer, maxEvaluations),
        DECLARE_GET_FIELD(t_BaseOptimizer, maxIterations),
        DECLARE_GET_FIELD(t_BaseOptimizer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseOptimizer__methods_[] = {
        DECLARE_METHOD(t_BaseOptimizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseOptimizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseOptimizer, of_, METH_VARARGS),
        DECLARE_METHOD(t_BaseOptimizer, getConvergenceChecker, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getIterations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getMaxIterations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, optimize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseOptimizer)[] = {
        { Py_tp_methods, t_BaseOptimizer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BaseOptimizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseOptimizer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BaseOptimizer, t_BaseOptimizer, BaseOptimizer);
      PyObject *t_BaseOptimizer::wrap_Object(const BaseOptimizer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseOptimizer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseOptimizer *self = (t_BaseOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BaseOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseOptimizer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseOptimizer *self = (t_BaseOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BaseOptimizer::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseOptimizer), &PY_TYPE_DEF(BaseOptimizer), module, "BaseOptimizer", 0);
      }

      void t_BaseOptimizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "class_", make_descriptor(BaseOptimizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "wrapfn_", make_descriptor(t_BaseOptimizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseOptimizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseOptimizer::initializeClass, 1)))
          return NULL;
        return t_BaseOptimizer::wrap_Object(BaseOptimizer(((t_BaseOptimizer *) arg)->object.this$));
      }
      static PyObject *t_BaseOptimizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseOptimizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseOptimizer_of_(t_BaseOptimizer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_BaseOptimizer_getConvergenceChecker(t_BaseOptimizer *self)
      {
        ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
        OBJ_CALL(result = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_BaseOptimizer_getEvaluations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getIterations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getMaxEvaluations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getMaxIterations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_optimize(t_BaseOptimizer *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::Object result((jobject) NULL);
            OBJ_CALL(result = self->object.optimize());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
          break;
         case 1:
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::java::lang::Object result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "optimize", args);
        return NULL;
      }
      static PyObject *t_BaseOptimizer_get__parameters_(t_BaseOptimizer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BaseOptimizer_get__convergenceChecker(t_BaseOptimizer *self, void *data)
      {
        ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
        OBJ_CALL(value = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
      }

      static PyObject *t_BaseOptimizer_get__evaluations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__iterations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__maxEvaluations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__maxIterations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/GTODProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/GTODProvider.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *GTODProvider::class$ = NULL;
      jmethodID *GTODProvider::mids$ = NULL;
      bool GTODProvider::live$ = false;

      jclass GTODProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/GTODProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_9a64cc378cf7ab6b] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_082f42517b988af4] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/GTODProvider;");
          mids$[mid_getStaticTransform_7265a2d9c3b9a38a] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_68fd5b9bb9184393] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_df04e3927954349e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_e70631ba002d9a32] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory GTODProvider::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_9a64cc378cf7ab6b]));
      }

      GTODProvider GTODProvider::getNonInterpolatingProvider() const
      {
        return GTODProvider(env->callObjectMethod(this$, mids$[mid_getNonInterpolatingProvider_082f42517b988af4]));
      }

      ::org::orekit::frames::StaticTransform GTODProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_7265a2d9c3b9a38a], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform GTODProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_68fd5b9bb9184393], a0.this$));
      }

      ::org::orekit::frames::Transform GTODProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_df04e3927954349e], a0.this$));
      }

      ::org::orekit::frames::FieldTransform GTODProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_e70631ba002d9a32], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_GTODProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GTODProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GTODProvider_getEOPHistory(t_GTODProvider *self);
      static PyObject *t_GTODProvider_getNonInterpolatingProvider(t_GTODProvider *self);
      static PyObject *t_GTODProvider_getStaticTransform(t_GTODProvider *self, PyObject *args);
      static PyObject *t_GTODProvider_getTransform(t_GTODProvider *self, PyObject *args);
      static PyObject *t_GTODProvider_get__eOPHistory(t_GTODProvider *self, void *data);
      static PyObject *t_GTODProvider_get__nonInterpolatingProvider(t_GTODProvider *self, void *data);
      static PyGetSetDef t_GTODProvider__fields_[] = {
        DECLARE_GET_FIELD(t_GTODProvider, eOPHistory),
        DECLARE_GET_FIELD(t_GTODProvider, nonInterpolatingProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GTODProvider__methods_[] = {
        DECLARE_METHOD(t_GTODProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GTODProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GTODProvider, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_GTODProvider, getNonInterpolatingProvider, METH_NOARGS),
        DECLARE_METHOD(t_GTODProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_GTODProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GTODProvider)[] = {
        { Py_tp_methods, t_GTODProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GTODProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GTODProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GTODProvider, t_GTODProvider, GTODProvider);

      void t_GTODProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(GTODProvider), &PY_TYPE_DEF(GTODProvider), module, "GTODProvider", 0);
      }

      void t_GTODProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "class_", make_descriptor(GTODProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "wrapfn_", make_descriptor(t_GTODProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GTODProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GTODProvider::initializeClass, 1)))
          return NULL;
        return t_GTODProvider::wrap_Object(GTODProvider(((t_GTODProvider *) arg)->object.this$));
      }
      static PyObject *t_GTODProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GTODProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GTODProvider_getEOPHistory(t_GTODProvider *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_GTODProvider_getNonInterpolatingProvider(t_GTODProvider *self)
      {
        GTODProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getNonInterpolatingProvider());
        return t_GTODProvider::wrap_Object(result);
      }

      static PyObject *t_GTODProvider_getStaticTransform(t_GTODProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_GTODProvider_getTransform(t_GTODProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_GTODProvider_get__eOPHistory(t_GTODProvider *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_GTODProvider_get__nonInterpolatingProvider(t_GTODProvider *self, void *data)
      {
        GTODProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getNonInterpolatingProvider());
        return t_GTODProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexLabels.h"
#include "org/orekit/files/rinex/section/RinexLabels.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          ::java::lang::Class *RinexLabels::class$ = NULL;
          jmethodID *RinexLabels::mids$ = NULL;
          bool RinexLabels::live$ = false;
          RinexLabels *RinexLabels::ANTENNA_B_SIGHT_XYZ = NULL;
          RinexLabels *RinexLabels::ANTENNA_DELTA_H_E_N = NULL;
          RinexLabels *RinexLabels::ANTENNA_DELTA_X_Y_Z = NULL;
          RinexLabels *RinexLabels::ANTENNA_PHASE_CENTER = NULL;
          RinexLabels *RinexLabels::ANTENNA_ZERODIR_AZI = NULL;
          RinexLabels *RinexLabels::ANTENNA_ZERODIR_XYZ = NULL;
          RinexLabels *RinexLabels::ANT_NB_TYPE = NULL;
          RinexLabels *RinexLabels::APPROX_POSITION_XYZ = NULL;
          RinexLabels *RinexLabels::CENTER_OF_MASS_XYZ = NULL;
          RinexLabels *RinexLabels::COMMENT = NULL;
          RinexLabels *RinexLabels::DOI = NULL;
          RinexLabels *RinexLabels::END = NULL;
          RinexLabels *RinexLabels::GLONASS_COD_PHS_BIS = NULL;
          RinexLabels *RinexLabels::GLONASS_SLOT_FRQ_NB = NULL;
          RinexLabels *RinexLabels::INTERVAL = NULL;
          RinexLabels *RinexLabels::LEAP_SECONDS = NULL;
          RinexLabels *RinexLabels::LICENSE = NULL;
          RinexLabels *RinexLabels::MARKER_NAME = NULL;
          RinexLabels *RinexLabels::MARKER_NUMBER = NULL;
          RinexLabels *RinexLabels::MARKER_TYPE = NULL;
          RinexLabels *RinexLabels::NB_OF_SATELLITES = NULL;
          RinexLabels *RinexLabels::NB_TYPES_OF_OBSERV = NULL;
          RinexLabels *RinexLabels::OBSERVER_AGENCY = NULL;
          RinexLabels *RinexLabels::OBS_SCALE_FACTOR = NULL;
          RinexLabels *RinexLabels::PRN_NB_OF_OBS = NULL;
          RinexLabels *RinexLabels::PROGRAM = NULL;
          RinexLabels *RinexLabels::RCV_CLOCK_OFFS_APPL = NULL;
          RinexLabels *RinexLabels::REC_NB_TYPE_VERS = NULL;
          RinexLabels *RinexLabels::SIGNAL_STRENGTH_UNIT = NULL;
          RinexLabels *RinexLabels::STATION_INFORMATION = NULL;
          RinexLabels *RinexLabels::SYS_DCBS_APPLIED = NULL;
          RinexLabels *RinexLabels::SYS_NB_TYPES_OF_OBSERV = NULL;
          RinexLabels *RinexLabels::SYS_PCVS_APPLIED = NULL;
          RinexLabels *RinexLabels::SYS_PHASE_SHIFT = NULL;
          RinexLabels *RinexLabels::SYS_SCALE_FACTOR = NULL;
          RinexLabels *RinexLabels::TIME_OF_FIRST_OBS = NULL;
          RinexLabels *RinexLabels::TIME_OF_LAST_OBS = NULL;
          RinexLabels *RinexLabels::VERSION = NULL;
          RinexLabels *RinexLabels::WAVELENGTH_FACT_L1_2 = NULL;

          jclass RinexLabels::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/section/RinexLabels");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getLabel_3cffd47377eca18a] = env->getMethodID(cls, "getLabel", "()Ljava/lang/String;");
              mids$[mid_matches_fd2162b8a05a22fe] = env->getMethodID(cls, "matches", "(Ljava/lang/String;)Z");
              mids$[mid_valueOf_b31250dda514ea56] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/section/RinexLabels;");
              mids$[mid_values_3bfff4c4ee184087] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/section/RinexLabels;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              ANTENNA_B_SIGHT_XYZ = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_B_SIGHT_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_DELTA_H_E_N = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_DELTA_H_E_N", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_DELTA_X_Y_Z = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_DELTA_X_Y_Z", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_PHASE_CENTER = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_PHASE_CENTER", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_ZERODIR_AZI = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_ZERODIR_AZI", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_ZERODIR_XYZ = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_ZERODIR_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANT_NB_TYPE = new RinexLabels(env->getStaticObjectField(cls, "ANT_NB_TYPE", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              APPROX_POSITION_XYZ = new RinexLabels(env->getStaticObjectField(cls, "APPROX_POSITION_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              CENTER_OF_MASS_XYZ = new RinexLabels(env->getStaticObjectField(cls, "CENTER_OF_MASS_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              COMMENT = new RinexLabels(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              DOI = new RinexLabels(env->getStaticObjectField(cls, "DOI", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              END = new RinexLabels(env->getStaticObjectField(cls, "END", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              GLONASS_COD_PHS_BIS = new RinexLabels(env->getStaticObjectField(cls, "GLONASS_COD_PHS_BIS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              GLONASS_SLOT_FRQ_NB = new RinexLabels(env->getStaticObjectField(cls, "GLONASS_SLOT_FRQ_NB", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              INTERVAL = new RinexLabels(env->getStaticObjectField(cls, "INTERVAL", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              LEAP_SECONDS = new RinexLabels(env->getStaticObjectField(cls, "LEAP_SECONDS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              LICENSE = new RinexLabels(env->getStaticObjectField(cls, "LICENSE", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              MARKER_NAME = new RinexLabels(env->getStaticObjectField(cls, "MARKER_NAME", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              MARKER_NUMBER = new RinexLabels(env->getStaticObjectField(cls, "MARKER_NUMBER", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              MARKER_TYPE = new RinexLabels(env->getStaticObjectField(cls, "MARKER_TYPE", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              NB_OF_SATELLITES = new RinexLabels(env->getStaticObjectField(cls, "NB_OF_SATELLITES", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              NB_TYPES_OF_OBSERV = new RinexLabels(env->getStaticObjectField(cls, "NB_TYPES_OF_OBSERV", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              OBSERVER_AGENCY = new RinexLabels(env->getStaticObjectField(cls, "OBSERVER_AGENCY", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              OBS_SCALE_FACTOR = new RinexLabels(env->getStaticObjectField(cls, "OBS_SCALE_FACTOR", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              PRN_NB_OF_OBS = new RinexLabels(env->getStaticObjectField(cls, "PRN_NB_OF_OBS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              PROGRAM = new RinexLabels(env->getStaticObjectField(cls, "PROGRAM", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              RCV_CLOCK_OFFS_APPL = new RinexLabels(env->getStaticObjectField(cls, "RCV_CLOCK_OFFS_APPL", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              REC_NB_TYPE_VERS = new RinexLabels(env->getStaticObjectField(cls, "REC_NB_TYPE_VERS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SIGNAL_STRENGTH_UNIT = new RinexLabels(env->getStaticObjectField(cls, "SIGNAL_STRENGTH_UNIT", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              STATION_INFORMATION = new RinexLabels(env->getStaticObjectField(cls, "STATION_INFORMATION", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_DCBS_APPLIED = new RinexLabels(env->getStaticObjectField(cls, "SYS_DCBS_APPLIED", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_NB_TYPES_OF_OBSERV = new RinexLabels(env->getStaticObjectField(cls, "SYS_NB_TYPES_OF_OBSERV", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_PCVS_APPLIED = new RinexLabels(env->getStaticObjectField(cls, "SYS_PCVS_APPLIED", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_PHASE_SHIFT = new RinexLabels(env->getStaticObjectField(cls, "SYS_PHASE_SHIFT", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_SCALE_FACTOR = new RinexLabels(env->getStaticObjectField(cls, "SYS_SCALE_FACTOR", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              TIME_OF_FIRST_OBS = new RinexLabels(env->getStaticObjectField(cls, "TIME_OF_FIRST_OBS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              TIME_OF_LAST_OBS = new RinexLabels(env->getStaticObjectField(cls, "TIME_OF_LAST_OBS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              VERSION = new RinexLabels(env->getStaticObjectField(cls, "VERSION", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              WAVELENGTH_FACT_L1_2 = new RinexLabels(env->getStaticObjectField(cls, "WAVELENGTH_FACT_L1_2", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String RinexLabels::getLabel() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLabel_3cffd47377eca18a]));
          }

          jboolean RinexLabels::matches(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_matches_fd2162b8a05a22fe], a0.this$);
          }

          RinexLabels RinexLabels::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexLabels(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b31250dda514ea56], a0.this$));
          }

          JArray< RinexLabels > RinexLabels::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexLabels >(env->callStaticObjectMethod(cls, mids$[mid_values_3bfff4c4ee184087]));
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
        namespace section {
          static PyObject *t_RinexLabels_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexLabels_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexLabels_of_(t_RinexLabels *self, PyObject *args);
          static PyObject *t_RinexLabels_getLabel(t_RinexLabels *self);
          static PyObject *t_RinexLabels_matches(t_RinexLabels *self, PyObject *arg);
          static PyObject *t_RinexLabels_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexLabels_values(PyTypeObject *type);
          static PyObject *t_RinexLabels_get__label(t_RinexLabels *self, void *data);
          static PyObject *t_RinexLabels_get__parameters_(t_RinexLabels *self, void *data);
          static PyGetSetDef t_RinexLabels__fields_[] = {
            DECLARE_GET_FIELD(t_RinexLabels, label),
            DECLARE_GET_FIELD(t_RinexLabels, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexLabels__methods_[] = {
            DECLARE_METHOD(t_RinexLabels, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexLabels, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexLabels, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexLabels, getLabel, METH_NOARGS),
            DECLARE_METHOD(t_RinexLabels, matches, METH_O),
            DECLARE_METHOD(t_RinexLabels, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexLabels, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexLabels)[] = {
            { Py_tp_methods, t_RinexLabels__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexLabels__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexLabels)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexLabels, t_RinexLabels, RinexLabels);
          PyObject *t_RinexLabels::wrap_Object(const RinexLabels& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexLabels::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexLabels *self = (t_RinexLabels *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexLabels::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexLabels::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexLabels *self = (t_RinexLabels *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexLabels::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexLabels), &PY_TYPE_DEF(RinexLabels), module, "RinexLabels", 0);
          }

          void t_RinexLabels::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "class_", make_descriptor(RinexLabels::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "wrapfn_", make_descriptor(t_RinexLabels::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexLabels::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_B_SIGHT_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_B_SIGHT_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_DELTA_H_E_N", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_DELTA_H_E_N)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_DELTA_X_Y_Z", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_DELTA_X_Y_Z)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_PHASE_CENTER", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_PHASE_CENTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_ZERODIR_AZI", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_ZERODIR_AZI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_ZERODIR_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_ZERODIR_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANT_NB_TYPE", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANT_NB_TYPE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "APPROX_POSITION_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::APPROX_POSITION_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "CENTER_OF_MASS_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::CENTER_OF_MASS_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "COMMENT", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::COMMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "DOI", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::DOI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "END", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::END)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "GLONASS_COD_PHS_BIS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::GLONASS_COD_PHS_BIS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "GLONASS_SLOT_FRQ_NB", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::GLONASS_SLOT_FRQ_NB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "INTERVAL", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::INTERVAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "LEAP_SECONDS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::LEAP_SECONDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "LICENSE", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::LICENSE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "MARKER_NAME", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::MARKER_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "MARKER_NUMBER", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::MARKER_NUMBER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "MARKER_TYPE", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::MARKER_TYPE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "NB_OF_SATELLITES", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::NB_OF_SATELLITES)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "NB_TYPES_OF_OBSERV", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::NB_TYPES_OF_OBSERV)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "OBSERVER_AGENCY", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::OBSERVER_AGENCY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "OBS_SCALE_FACTOR", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::OBS_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "PRN_NB_OF_OBS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::PRN_NB_OF_OBS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "PROGRAM", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::PROGRAM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "RCV_CLOCK_OFFS_APPL", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::RCV_CLOCK_OFFS_APPL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "REC_NB_TYPE_VERS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::REC_NB_TYPE_VERS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SIGNAL_STRENGTH_UNIT", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SIGNAL_STRENGTH_UNIT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "STATION_INFORMATION", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::STATION_INFORMATION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_DCBS_APPLIED", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_DCBS_APPLIED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_NB_TYPES_OF_OBSERV", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_NB_TYPES_OF_OBSERV)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_PCVS_APPLIED", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_PCVS_APPLIED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_PHASE_SHIFT", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_PHASE_SHIFT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_SCALE_FACTOR", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "TIME_OF_FIRST_OBS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::TIME_OF_FIRST_OBS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "TIME_OF_LAST_OBS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::TIME_OF_LAST_OBS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "VERSION", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::VERSION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "WAVELENGTH_FACT_L1_2", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::WAVELENGTH_FACT_L1_2)));
          }

          static PyObject *t_RinexLabels_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexLabels::initializeClass, 1)))
              return NULL;
            return t_RinexLabels::wrap_Object(RinexLabels(((t_RinexLabels *) arg)->object.this$));
          }
          static PyObject *t_RinexLabels_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexLabels::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexLabels_of_(t_RinexLabels *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexLabels_getLabel(t_RinexLabels *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLabel());
            return j2p(result);
          }

          static PyObject *t_RinexLabels_matches(t_RinexLabels *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.matches(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "matches", arg);
            return NULL;
          }

          static PyObject *t_RinexLabels_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexLabels result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::section::RinexLabels::valueOf(a0));
              return t_RinexLabels::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexLabels_values(PyTypeObject *type)
          {
            JArray< RinexLabels > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::section::RinexLabels::values());
            return JArray<jobject>(result.this$).wrap(t_RinexLabels::wrap_jobject);
          }
          static PyObject *t_RinexLabels_get__parameters_(t_RinexLabels *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexLabels_get__label(t_RinexLabels *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLabel());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldODEStepEndHandler::class$ = NULL;
        jmethodID *FieldODEStepEndHandler::mids$ = NULL;
        bool FieldODEStepEndHandler::live$ = false;

        jclass FieldODEStepEndHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldODEStepEndHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_f808a4f21f8be825] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_resetState_b8cb4bf937fbd995] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/FieldODEState;");
            mids$[mid_stepEndOccurred_3385c85b1bdb5b9a] = env->getMethodID(cls, "stepEndOccurred", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Z)Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEStepEndHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_f808a4f21f8be825], a0.this$, a1.this$);
        }

        ::org::hipparchus::ode::FieldODEState FieldODEStepEndHandler::resetState(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_resetState_b8cb4bf937fbd995], a0.this$));
        }

        ::org::hipparchus::ode::events::Action FieldODEStepEndHandler::stepEndOccurred(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, jboolean a1) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_stepEndOccurred_3385c85b1bdb5b9a], a0.this$, a1));
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
    namespace ode {
      namespace events {
        static PyObject *t_FieldODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_of_(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_init(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_resetState(t_FieldODEStepEndHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_stepEndOccurred(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_get__parameters_(t_FieldODEStepEndHandler *self, void *data);
        static PyGetSetDef t_FieldODEStepEndHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStepEndHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStepEndHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEStepEndHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, resetState, METH_O),
          DECLARE_METHOD(t_FieldODEStepEndHandler, stepEndOccurred, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStepEndHandler)[] = {
          { Py_tp_methods, t_FieldODEStepEndHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStepEndHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStepEndHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStepEndHandler, t_FieldODEStepEndHandler, FieldODEStepEndHandler);
        PyObject *t_FieldODEStepEndHandler::wrap_Object(const FieldODEStepEndHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepEndHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepEndHandler *self = (t_FieldODEStepEndHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStepEndHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepEndHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepEndHandler *self = (t_FieldODEStepEndHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStepEndHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStepEndHandler), &PY_TYPE_DEF(FieldODEStepEndHandler), module, "FieldODEStepEndHandler", 0);
        }

        void t_FieldODEStepEndHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "class_", make_descriptor(FieldODEStepEndHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "wrapfn_", make_descriptor(t_FieldODEStepEndHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStepEndHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEStepEndHandler::wrap_Object(FieldODEStepEndHandler(((t_FieldODEStepEndHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStepEndHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStepEndHandler_of_(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStepEndHandler_init(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldODEStepEndHandler_resetState(t_FieldODEStepEndHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.resetState(a0));
            return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStepEndHandler_stepEndOccurred(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "KZ", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.stepEndOccurred(a0, a1));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "stepEndOccurred", args);
          return NULL;
        }
        static PyObject *t_FieldODEStepEndHandler_get__parameters_(t_FieldODEStepEndHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {

          ::java::lang::Class *UnscentedKalmanFilter::class$ = NULL;
          jmethodID *UnscentedKalmanFilter::mids$ = NULL;
          bool UnscentedKalmanFilter::live$ = false;

          jclass UnscentedKalmanFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_da60c12455e60f25] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/unscented/UnscentedProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;Lorg/hipparchus/util/UnscentedTransformProvider;)V");
              mids$[mid_estimationStep_8438f0b1b3460266] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getCorrected_55b445719d7de2a7] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getPredicted_55b445719d7de2a7] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getUnscentedTransformProvider_8c4a909424e66af4] = env->getMethodID(cls, "getUnscentedTransformProvider", "()Lorg/hipparchus/util/UnscentedTransformProvider;");
              mids$[mid_predictionAndCorrectionSteps_c773c6d72a608e00] = env->getMethodID(cls, "predictionAndCorrectionSteps", "(Lorg/hipparchus/filtering/kalman/Measurement;[Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UnscentedKalmanFilter::UnscentedKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2, const ::org::hipparchus::util::UnscentedTransformProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_da60c12455e60f25, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_8438f0b1b3460266], a0.this$));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::getCorrected() const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_55b445719d7de2a7]));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::getPredicted() const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_55b445719d7de2a7]));
          }

          ::org::hipparchus::util::UnscentedTransformProvider UnscentedKalmanFilter::getUnscentedTransformProvider() const
          {
            return ::org::hipparchus::util::UnscentedTransformProvider(env->callObjectMethod(this$, mids$[mid_getUnscentedTransformProvider_8c4a909424e66af4]));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::predictionAndCorrectionSteps(const ::org::hipparchus::filtering::kalman::Measurement & a0, const JArray< ::org::hipparchus::linear::RealVector > & a1) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_predictionAndCorrectionSteps_c773c6d72a608e00], a0.this$, a1.this$));
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
    namespace filtering {
      namespace kalman {
        namespace unscented {
          static PyObject *t_UnscentedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_of_(t_UnscentedKalmanFilter *self, PyObject *args);
          static int t_UnscentedKalmanFilter_init_(t_UnscentedKalmanFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_UnscentedKalmanFilter_estimationStep(t_UnscentedKalmanFilter *self, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_getCorrected(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_getPredicted(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_getUnscentedTransformProvider(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_predictionAndCorrectionSteps(t_UnscentedKalmanFilter *self, PyObject *args);
          static PyObject *t_UnscentedKalmanFilter_get__corrected(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__predicted(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__unscentedTransformProvider(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__parameters_(t_UnscentedKalmanFilter *self, void *data);
          static PyGetSetDef t_UnscentedKalmanFilter__fields_[] = {
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, corrected),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, predicted),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, unscentedTransformProvider),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UnscentedKalmanFilter__methods_[] = {
            DECLARE_METHOD(t_UnscentedKalmanFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, estimationStep, METH_O),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getCorrected, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getPredicted, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getUnscentedTransformProvider, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, predictionAndCorrectionSteps, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanFilter)[] = {
            { Py_tp_methods, t_UnscentedKalmanFilter__methods_ },
            { Py_tp_init, (void *) t_UnscentedKalmanFilter_init_ },
            { Py_tp_getset, t_UnscentedKalmanFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnscentedKalmanFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(UnscentedKalmanFilter, t_UnscentedKalmanFilter, UnscentedKalmanFilter);
          PyObject *t_UnscentedKalmanFilter::wrap_Object(const UnscentedKalmanFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedKalmanFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedKalmanFilter *self = (t_UnscentedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_UnscentedKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedKalmanFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedKalmanFilter *self = (t_UnscentedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_UnscentedKalmanFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(UnscentedKalmanFilter), &PY_TYPE_DEF(UnscentedKalmanFilter), module, "UnscentedKalmanFilter", 0);
          }

          void t_UnscentedKalmanFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "class_", make_descriptor(UnscentedKalmanFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "wrapfn_", make_descriptor(t_UnscentedKalmanFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnscentedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnscentedKalmanFilter::initializeClass, 1)))
              return NULL;
            return t_UnscentedKalmanFilter::wrap_Object(UnscentedKalmanFilter(((t_UnscentedKalmanFilter *) arg)->object.this$));
          }
          static PyObject *t_UnscentedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnscentedKalmanFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnscentedKalmanFilter_of_(t_UnscentedKalmanFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_UnscentedKalmanFilter_init_(t_UnscentedKalmanFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::filtering::kalman::ProcessEstimate a2((jobject) NULL);
            ::org::hipparchus::util::UnscentedTransformProvider a3((jobject) NULL);
            UnscentedKalmanFilter object((jobject) NULL);

            if (!parseArgs(args, "kKkk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::unscented::t_UnscentedProcess::parameters_, &a2, &a3))
            {
              INT_CALL(object = UnscentedKalmanFilter(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_UnscentedKalmanFilter_estimationStep(t_UnscentedKalmanFilter *self, PyObject *arg)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.estimationStep(a0));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
            return NULL;
          }

          static PyObject *t_UnscentedKalmanFilter_getCorrected(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCorrected());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_getPredicted(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
            OBJ_CALL(result = self->object.getPredicted());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_getUnscentedTransformProvider(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::util::UnscentedTransformProvider result((jobject) NULL);
            OBJ_CALL(result = self->object.getUnscentedTransformProvider());
            return ::org::hipparchus::util::t_UnscentedTransformProvider::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_predictionAndCorrectionSteps(t_UnscentedKalmanFilter *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArgs(args, "k[k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.predictionAndCorrectionSteps(a0, a1));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "predictionAndCorrectionSteps", args);
            return NULL;
          }
          static PyObject *t_UnscentedKalmanFilter_get__parameters_(t_UnscentedKalmanFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_UnscentedKalmanFilter_get__corrected(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCorrected());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
          }

          static PyObject *t_UnscentedKalmanFilter_get__predicted(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
            OBJ_CALL(value = self->object.getPredicted());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
          }

          static PyObject *t_UnscentedKalmanFilter_get__unscentedTransformProvider(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::util::UnscentedTransformProvider value((jobject) NULL);
            OBJ_CALL(value = self->object.getUnscentedTransformProvider());
            return ::org::hipparchus::util::t_UnscentedTransformProvider::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/LutherFieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *LutherFieldIntegrator::class$ = NULL;
        jmethodID *LutherFieldIntegrator::mids$ = NULL;
        bool LutherFieldIntegrator::live$ = false;

        jclass LutherFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/LutherFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9ae9949e6b74bf6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_f180d140dce78d62] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_41762fd4377ff26e] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_41762fd4377ff26e] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_856bb1855471790d] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/LutherFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherFieldIntegrator::LutherFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_c9ae9949e6b74bf6, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > LutherFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_f180d140dce78d62]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > LutherFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_41762fd4377ff26e]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > LutherFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_41762fd4377ff26e]));
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
    namespace ode {
      namespace nonstiff {
        static PyObject *t_LutherFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegrator_of_(t_LutherFieldIntegrator *self, PyObject *args);
        static int t_LutherFieldIntegrator_init_(t_LutherFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherFieldIntegrator_getA(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_getB(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_getC(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_get__a(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__b(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__c(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__parameters_(t_LutherFieldIntegrator *self, void *data);
        static PyGetSetDef t_LutherFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, a),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, b),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, c),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_LutherFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherFieldIntegrator)[] = {
          { Py_tp_methods, t_LutherFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_LutherFieldIntegrator_init_ },
          { Py_tp_getset, t_LutherFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(LutherFieldIntegrator, t_LutherFieldIntegrator, LutherFieldIntegrator);
        PyObject *t_LutherFieldIntegrator::wrap_Object(const LutherFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegrator *self = (t_LutherFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LutherFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegrator *self = (t_LutherFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LutherFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherFieldIntegrator), &PY_TYPE_DEF(LutherFieldIntegrator), module, "LutherFieldIntegrator", 0);
        }

        void t_LutherFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "class_", make_descriptor(LutherFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "wrapfn_", make_descriptor(t_LutherFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_LutherFieldIntegrator::wrap_Object(LutherFieldIntegrator(((t_LutherFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_LutherFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LutherFieldIntegrator_of_(t_LutherFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LutherFieldIntegrator_init_(t_LutherFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          LutherFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = LutherFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherFieldIntegrator_getA(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_LutherFieldIntegrator_getB(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_LutherFieldIntegrator_getC(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_LutherFieldIntegrator_get__parameters_(t_LutherFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LutherFieldIntegrator_get__a(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_LutherFieldIntegrator_get__b(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_LutherFieldIntegrator_get__c(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/InterSatellitesRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *InterSatellitesRangeBuilder::class$ = NULL;
          jmethodID *InterSatellitesRangeBuilder::mids$ = NULL;
          bool InterSatellitesRangeBuilder::live$ = false;

          jclass InterSatellitesRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/InterSatellitesRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_512b58c073d0db17] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;ZDD)V");
              mids$[mid_build_a063e7dbb8ab6062] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/InterSatellitesRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesRangeBuilder::InterSatellitesRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::estimation::measurements::ObservableSatellite & a2, jboolean a3, jdouble a4, jdouble a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_512b58c073d0db17, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

          ::org::orekit::estimation::measurements::InterSatellitesRange InterSatellitesRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::InterSatellitesRange(env->callObjectMethod(this$, mids$[mid_build_a063e7dbb8ab6062], a0.this$, a1.this$));
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
        namespace generation {
          static PyObject *t_InterSatellitesRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesRangeBuilder_of_(t_InterSatellitesRangeBuilder *self, PyObject *args);
          static int t_InterSatellitesRangeBuilder_init_(t_InterSatellitesRangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesRangeBuilder_build(t_InterSatellitesRangeBuilder *self, PyObject *args);
          static PyObject *t_InterSatellitesRangeBuilder_get__parameters_(t_InterSatellitesRangeBuilder *self, void *data);
          static PyGetSetDef t_InterSatellitesRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesRangeBuilder)[] = {
            { Py_tp_methods, t_InterSatellitesRangeBuilder__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesRangeBuilder_init_ },
            { Py_tp_getset, t_InterSatellitesRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(InterSatellitesRangeBuilder, t_InterSatellitesRangeBuilder, InterSatellitesRangeBuilder);
          PyObject *t_InterSatellitesRangeBuilder::wrap_Object(const InterSatellitesRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesRangeBuilder *self = (t_InterSatellitesRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesRangeBuilder *self = (t_InterSatellitesRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesRangeBuilder), &PY_TYPE_DEF(InterSatellitesRangeBuilder), module, "InterSatellitesRangeBuilder", 0);
          }

          void t_InterSatellitesRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "class_", make_descriptor(InterSatellitesRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "wrapfn_", make_descriptor(t_InterSatellitesRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesRangeBuilder::wrap_Object(InterSatellitesRangeBuilder(((t_InterSatellitesRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesRangeBuilder_of_(t_InterSatellitesRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesRangeBuilder_init_(t_InterSatellitesRangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a2((jobject) NULL);
            jboolean a3;
            jdouble a4;
            jdouble a5;
            InterSatellitesRangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkZDD", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = InterSatellitesRangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(InterSatellitesRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesRangeBuilder_build(t_InterSatellitesRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::InterSatellitesRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_InterSatellitesRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(InterSatellitesRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_InterSatellitesRangeBuilder_get__parameters_(t_InterSatellitesRangeBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTZonalContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTZonalContext::class$ = NULL;
            jmethodID *DSSTZonalContext::mids$ = NULL;
            bool DSSTZonalContext::live$ = false;

            jclass DSSTZonalContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTZonalContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getBB_557b8123390d8d0c] = env->getMethodID(cls, "getBB", "()D");
                mids$[mid_getBoA_557b8123390d8d0c] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_557b8123390d8d0c] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getCXO2N2A2_557b8123390d8d0c] = env->getMethodID(cls, "getCXO2N2A2", "()D");
                mids$[mid_getHK_557b8123390d8d0c] = env->getMethodID(cls, "getHK", "()D");
                mids$[mid_getK2MH2_557b8123390d8d0c] = env->getMethodID(cls, "getK2MH2", "()D");
                mids$[mid_getK2MH2O2_557b8123390d8d0c] = env->getMethodID(cls, "getK2MH2O2", "()D");
                mids$[mid_getM2aoA_557b8123390d8d0c] = env->getMethodID(cls, "getM2aoA", "()D");
                mids$[mid_getMCo2AB_557b8123390d8d0c] = env->getMethodID(cls, "getMCo2AB", "()D");
                mids$[mid_getMeanMotion_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMuoa_557b8123390d8d0c] = env->getMethodID(cls, "getMuoa", "()D");
                mids$[mid_getOON2A2_557b8123390d8d0c] = env->getMethodID(cls, "getOON2A2", "()D");
                mids$[mid_getOoAB_557b8123390d8d0c] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getRoa_557b8123390d8d0c] = env->getMethodID(cls, "getRoa", "()D");
                mids$[mid_getX_557b8123390d8d0c] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getX2ON2A2XP1_557b8123390d8d0c] = env->getMethodID(cls, "getX2ON2A2XP1", "()D");
                mids$[mid_getX3ON2A_557b8123390d8d0c] = env->getMethodID(cls, "getX3ON2A", "()D");
                mids$[mid_getXON2A2_557b8123390d8d0c] = env->getMethodID(cls, "getXON2A2", "()D");
                mids$[mid_getXX_557b8123390d8d0c] = env->getMethodID(cls, "getXX", "()D");
                mids$[mid_getXXX_557b8123390d8d0c] = env->getMethodID(cls, "getXXX", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble DSSTZonalContext::getBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBB_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getCXO2N2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCXO2N2A2_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getHK() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHK_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getK2MH2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK2MH2_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getK2MH2O2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK2MH2O2_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getM2aoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM2aoA_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getMCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMCo2AB_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getMuoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuoa_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getOON2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOON2A2_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getRoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRoa_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getX2ON2A2XP1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX2ON2A2XP1_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getX3ON2A() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX3ON2A_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getXON2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXON2A2_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXX_557b8123390d8d0c]);
            }

            jdouble DSSTZonalContext::getXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXXX_557b8123390d8d0c]);
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
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_DSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonalContext_getBB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getBoA(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getBoABpo(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getCXO2N2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getHK(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getK2MH2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getK2MH2O2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getM2aoA(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMCo2AB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMeanMotion(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMuoa(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getOON2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getOoAB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getRoa(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX2ON2A2XP1(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX3ON2A(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXON2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXXX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_get__bB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__boA(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__boABpo(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__cXO2N2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__hK(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__k2MH2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__k2MH2O2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__m2aoA(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__mCo2AB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__meanMotion(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__muoa(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__oON2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__ooAB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__roa(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x2ON2A2XP1(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x3ON2A(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xON2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xX(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xXX(t_DSSTZonalContext *self, void *data);
            static PyGetSetDef t_DSSTZonalContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTZonalContext, bB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, boA),
              DECLARE_GET_FIELD(t_DSSTZonalContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTZonalContext, cXO2N2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, hK),
              DECLARE_GET_FIELD(t_DSSTZonalContext, k2MH2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, k2MH2O2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, m2aoA),
              DECLARE_GET_FIELD(t_DSSTZonalContext, mCo2AB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTZonalContext, muoa),
              DECLARE_GET_FIELD(t_DSSTZonalContext, oON2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, roa),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x2ON2A2XP1),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x3ON2A),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xON2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xX),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xXX),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTZonalContext__methods_[] = {
              DECLARE_METHOD(t_DSSTZonalContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonalContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonalContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getCXO2N2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getHK, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getK2MH2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getK2MH2O2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMuoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getOON2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX2ON2A2XP1, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX3ON2A, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXON2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXXX, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTZonalContext)[] = {
              { Py_tp_methods, t_DSSTZonalContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTZonalContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTZonalContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTZonalContext, t_DSSTZonalContext, DSSTZonalContext);

            void t_DSSTZonalContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTZonalContext), &PY_TYPE_DEF(DSSTZonalContext), module, "DSSTZonalContext", 0);
            }

            void t_DSSTZonalContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "class_", make_descriptor(DSSTZonalContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "wrapfn_", make_descriptor(t_DSSTZonalContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTZonalContext::initializeClass, 1)))
                return NULL;
              return t_DSSTZonalContext::wrap_Object(DSSTZonalContext(((t_DSSTZonalContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTZonalContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTZonalContext_getBB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getBoA(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getBoABpo(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getCXO2N2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCXO2N2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getHK(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHK());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getK2MH2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK2MH2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getK2MH2O2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK2MH2O2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getM2aoA(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2aoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMCo2AB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMeanMotion(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMuoa(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getOON2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOON2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getOoAB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getRoa(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX2ON2A2XP1(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX2ON2A2XP1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX3ON2A(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX3ON2A());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXON2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXON2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXXX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_get__bB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__boA(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__boABpo(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__cXO2N2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCXO2N2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__hK(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHK());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__k2MH2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK2MH2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__k2MH2O2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK2MH2O2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__m2aoA(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM2aoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__mCo2AB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__meanMotion(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__muoa(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__oON2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOON2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__ooAB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__roa(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x2ON2A2XP1(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX2ON2A2XP1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x3ON2A(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX3ON2A());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xON2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXON2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xX(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xXX(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXXX());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/MultivariateInterpolator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *MultivariateInterpolator::class$ = NULL;
        jmethodID *MultivariateInterpolator::mids$ = NULL;
        bool MultivariateInterpolator::live$ = false;

        jclass MultivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/MultivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_7fe6a527b1a5d65c] = env->getMethodID(cls, "interpolate", "([[D[D)Lorg/hipparchus/analysis/MultivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::MultivariateFunction MultivariateInterpolator::interpolate(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_7fe6a527b1a5d65c], a0.this$, a1.this$));
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
      namespace interpolation {
        static PyObject *t_MultivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateInterpolator_interpolate(t_MultivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_MultivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_MultivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateInterpolator)[] = {
          { Py_tp_methods, t_MultivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultivariateInterpolator, t_MultivariateInterpolator, MultivariateInterpolator);

        void t_MultivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateInterpolator), &PY_TYPE_DEF(MultivariateInterpolator), module, "MultivariateInterpolator", 0);
        }

        void t_MultivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "class_", make_descriptor(MultivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "wrapfn_", make_descriptor(t_MultivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_MultivariateInterpolator::wrap_Object(MultivariateInterpolator(((t_MultivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_MultivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateInterpolator_interpolate(t_MultivariateInterpolator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Subtract.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Subtract::class$ = NULL;
        jmethodID *Subtract::mids$ = NULL;
        bool Subtract::live$ = false;

        jclass Subtract::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Subtract");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Subtract::Subtract() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Subtract::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
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
      namespace function {
        static PyObject *t_Subtract_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Subtract_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Subtract_init_(t_Subtract *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Subtract_value(t_Subtract *self, PyObject *args);

        static PyMethodDef t_Subtract__methods_[] = {
          DECLARE_METHOD(t_Subtract, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Subtract, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Subtract, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Subtract)[] = {
          { Py_tp_methods, t_Subtract__methods_ },
          { Py_tp_init, (void *) t_Subtract_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Subtract)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Subtract, t_Subtract, Subtract);

        void t_Subtract::install(PyObject *module)
        {
          installType(&PY_TYPE(Subtract), &PY_TYPE_DEF(Subtract), module, "Subtract", 0);
        }

        void t_Subtract::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Subtract), "class_", make_descriptor(Subtract::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Subtract), "wrapfn_", make_descriptor(t_Subtract::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Subtract), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Subtract_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Subtract::initializeClass, 1)))
            return NULL;
          return t_Subtract::wrap_Object(Subtract(((t_Subtract *) arg)->object.this$));
        }
        static PyObject *t_Subtract_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Subtract::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Subtract_init_(t_Subtract *self, PyObject *args, PyObject *kwds)
        {
          Subtract object((jobject) NULL);

          INT_CALL(object = Subtract());
          self->object = object;

          return 0;
        }

        static PyObject *t_Subtract_value(t_Subtract *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *Aem::class$ = NULL;
              jmethodID *Aem::mids$ = NULL;
              bool Aem::live$ = false;
              ::java::lang::String *Aem::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Aem::ROOT = NULL;

              jclass Aem::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/Aem");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f4c63464eb8f0477] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getSatellites_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Aem::Aem(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_f4c63464eb8f0477, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map Aem::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_1e62c2f73fbdd1c4]));
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
            namespace aem {
              static PyObject *t_Aem_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Aem_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Aem_of_(t_Aem *self, PyObject *args);
              static int t_Aem_init_(t_Aem *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Aem_getSatellites(t_Aem *self);
              static PyObject *t_Aem_get__satellites(t_Aem *self, void *data);
              static PyObject *t_Aem_get__parameters_(t_Aem *self, void *data);
              static PyGetSetDef t_Aem__fields_[] = {
                DECLARE_GET_FIELD(t_Aem, satellites),
                DECLARE_GET_FIELD(t_Aem, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Aem__methods_[] = {
                DECLARE_METHOD(t_Aem, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Aem, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Aem, of_, METH_VARARGS),
                DECLARE_METHOD(t_Aem, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Aem)[] = {
                { Py_tp_methods, t_Aem__methods_ },
                { Py_tp_init, (void *) t_Aem_init_ },
                { Py_tp_getset, t_Aem__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Aem)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Aem, t_Aem, Aem);
              PyObject *t_Aem::wrap_Object(const Aem& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Aem::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Aem *self = (t_Aem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Aem::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Aem::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Aem *self = (t_Aem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Aem::install(PyObject *module)
              {
                installType(&PY_TYPE(Aem), &PY_TYPE_DEF(Aem), module, "Aem", 0);
              }

              void t_Aem::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "class_", make_descriptor(Aem::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "wrapfn_", make_descriptor(t_Aem::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "boxfn_", make_descriptor(boxObject));
                env->getClass(Aem::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Aem::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "ROOT", make_descriptor(j2p(*Aem::ROOT)));
              }

              static PyObject *t_Aem_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Aem::initializeClass, 1)))
                  return NULL;
                return t_Aem::wrap_Object(Aem(((t_Aem *) arg)->object.this$));
              }
              static PyObject *t_Aem_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Aem::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Aem_of_(t_Aem *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Aem_init_(t_Aem *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Aem object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Aem(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Aem_getSatellites(t_Aem *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSatelliteEphemeris));
              }
              static PyObject *t_Aem_get__parameters_(t_Aem *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Aem_get__satellites(t_Aem *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *StreamingAemWriter$SegmentWriter::class$ = NULL;
              jmethodID *StreamingAemWriter$SegmentWriter::mids$ = NULL;
              bool StreamingAemWriter$SegmentWriter::live$ = false;

              jclass StreamingAemWriter$SegmentWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_93fe4dcc8115e7b3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter;)V");
                  mids$[mid_finish_8655761ebf04b503] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_8655761ebf04b503] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_a423d7aa7c2fe850] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingAemWriter$SegmentWriter::StreamingAemWriter$SegmentWriter(const ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_93fe4dcc8115e7b3, a0.this$)) {}

              void StreamingAemWriter$SegmentWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_8655761ebf04b503], a0.this$);
              }

              void StreamingAemWriter$SegmentWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_8655761ebf04b503], a0.this$);
              }

              void StreamingAemWriter$SegmentWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_a423d7aa7c2fe850], a0.this$, a1.this$, a2);
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
            namespace aem {
              static PyObject *t_StreamingAemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingAemWriter$SegmentWriter_init_(t_StreamingAemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingAemWriter$SegmentWriter_finish(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_handleStep(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_init(t_StreamingAemWriter$SegmentWriter *self, PyObject *args);

              static PyMethodDef t_StreamingAemWriter$SegmentWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingAemWriter$SegmentWriter)[] = {
                { Py_tp_methods, t_StreamingAemWriter$SegmentWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingAemWriter$SegmentWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingAemWriter$SegmentWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingAemWriter$SegmentWriter, t_StreamingAemWriter$SegmentWriter, StreamingAemWriter$SegmentWriter);

              void t_StreamingAemWriter$SegmentWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingAemWriter$SegmentWriter), &PY_TYPE_DEF(StreamingAemWriter$SegmentWriter), module, "StreamingAemWriter$SegmentWriter", 0);
              }

              void t_StreamingAemWriter$SegmentWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "class_", make_descriptor(StreamingAemWriter$SegmentWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "wrapfn_", make_descriptor(t_StreamingAemWriter$SegmentWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingAemWriter$SegmentWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingAemWriter$SegmentWriter::wrap_Object(StreamingAemWriter$SegmentWriter(((t_StreamingAemWriter$SegmentWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingAemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingAemWriter$SegmentWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingAemWriter$SegmentWriter_init_(t_StreamingAemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter a0((jobject) NULL);
                StreamingAemWriter$SegmentWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingAemWriter$SegmentWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_finish(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.finish(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "finish", arg);
                return NULL;
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_handleStep(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.handleStep(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
                return NULL;
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_init(t_StreamingAemWriter$SegmentWriter *self, PyObject *args)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.init(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "init", args);
                return NULL;
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Perturbations::class$ = NULL;
              jmethodID *Perturbations::mids$ = NULL;
              bool Perturbations::live$ = false;

              jclass Perturbations::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Perturbations");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_cfbdb077cf5027f4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBodies;)V");
                  mids$[mid_getAlbedoGridSize_412668abc8d889e9] = env->getMethodID(cls, "getAlbedoGridSize", "()I");
                  mids$[mid_getAlbedoModel_3cffd47377eca18a] = env->getMethodID(cls, "getAlbedoModel", "()Ljava/lang/String;");
                  mids$[mid_getAtmosphericModel_3cffd47377eca18a] = env->getMethodID(cls, "getAtmosphericModel", "()Ljava/lang/String;");
                  mids$[mid_getCentralBodyRotation_557b8123390d8d0c] = env->getMethodID(cls, "getCentralBodyRotation", "()D");
                  mids$[mid_getEquatorialRadius_557b8123390d8d0c] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                  mids$[mid_getFixedF10P7_557b8123390d8d0c] = env->getMethodID(cls, "getFixedF10P7", "()D");
                  mids$[mid_getFixedF10P7Mean_557b8123390d8d0c] = env->getMethodID(cls, "getFixedF10P7Mean", "()D");
                  mids$[mid_getFixedGeomagneticAp_557b8123390d8d0c] = env->getMethodID(cls, "getFixedGeomagneticAp", "()D");
                  mids$[mid_getFixedGeomagneticDst_557b8123390d8d0c] = env->getMethodID(cls, "getFixedGeomagneticDst", "()D");
                  mids$[mid_getFixedGeomagneticKp_557b8123390d8d0c] = env->getMethodID(cls, "getFixedGeomagneticKp", "()D");
                  mids$[mid_getFixedM10P7_557b8123390d8d0c] = env->getMethodID(cls, "getFixedM10P7", "()D");
                  mids$[mid_getFixedM10P7Mean_557b8123390d8d0c] = env->getMethodID(cls, "getFixedM10P7Mean", "()D");
                  mids$[mid_getFixedS10P7_557b8123390d8d0c] = env->getMethodID(cls, "getFixedS10P7", "()D");
                  mids$[mid_getFixedS10P7Mean_557b8123390d8d0c] = env->getMethodID(cls, "getFixedS10P7Mean", "()D");
                  mids$[mid_getFixedY10P7_557b8123390d8d0c] = env->getMethodID(cls, "getFixedY10P7", "()D");
                  mids$[mid_getFixedY10P7Mean_557b8123390d8d0c] = env->getMethodID(cls, "getFixedY10P7Mean", "()D");
                  mids$[mid_getGm_557b8123390d8d0c] = env->getMethodID(cls, "getGm", "()D");
                  mids$[mid_getGravityDegree_412668abc8d889e9] = env->getMethodID(cls, "getGravityDegree", "()I");
                  mids$[mid_getGravityModel_3cffd47377eca18a] = env->getMethodID(cls, "getGravityModel", "()Ljava/lang/String;");
                  mids$[mid_getGravityOrder_412668abc8d889e9] = env->getMethodID(cls, "getGravityOrder", "()I");
                  mids$[mid_getInterpMethodSW_3cffd47377eca18a] = env->getMethodID(cls, "getInterpMethodSW", "()Ljava/lang/String;");
                  mids$[mid_getNBodyPerturbations_0d9551367f7ecdef] = env->getMethodID(cls, "getNBodyPerturbations", "()Ljava/util/List;");
                  mids$[mid_getOblateFlattening_557b8123390d8d0c] = env->getMethodID(cls, "getOblateFlattening", "()D");
                  mids$[mid_getOceanTidesModel_3cffd47377eca18a] = env->getMethodID(cls, "getOceanTidesModel", "()Ljava/lang/String;");
                  mids$[mid_getReductionTheory_3cffd47377eca18a] = env->getMethodID(cls, "getReductionTheory", "()Ljava/lang/String;");
                  mids$[mid_getShadowBodies_0d9551367f7ecdef] = env->getMethodID(cls, "getShadowBodies", "()Ljava/util/List;");
                  mids$[mid_getShadowModel_4f569c115bfd19f6] = env->getMethodID(cls, "getShadowModel", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");
                  mids$[mid_getSolidTidesModel_3cffd47377eca18a] = env->getMethodID(cls, "getSolidTidesModel", "()Ljava/lang/String;");
                  mids$[mid_getSpaceWeatherEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getSpaceWeatherEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getSpaceWeatherSource_3cffd47377eca18a] = env->getMethodID(cls, "getSpaceWeatherSource", "()Ljava/lang/String;");
                  mids$[mid_getSrpModel_3cffd47377eca18a] = env->getMethodID(cls, "getSrpModel", "()Ljava/lang/String;");
                  mids$[mid_setAlbedoGridSize_a3da1a935cb37f7b] = env->getMethodID(cls, "setAlbedoGridSize", "(I)V");
                  mids$[mid_setAlbedoModel_f5ffdf29129ef90a] = env->getMethodID(cls, "setAlbedoModel", "(Ljava/lang/String;)V");
                  mids$[mid_setAtmosphericModel_f5ffdf29129ef90a] = env->getMethodID(cls, "setAtmosphericModel", "(Ljava/lang/String;)V");
                  mids$[mid_setCentralBodyRotation_10f281d777284cea] = env->getMethodID(cls, "setCentralBodyRotation", "(D)V");
                  mids$[mid_setEquatorialRadius_10f281d777284cea] = env->getMethodID(cls, "setEquatorialRadius", "(D)V");
                  mids$[mid_setFixedF10P7_10f281d777284cea] = env->getMethodID(cls, "setFixedF10P7", "(D)V");
                  mids$[mid_setFixedF10P7Mean_10f281d777284cea] = env->getMethodID(cls, "setFixedF10P7Mean", "(D)V");
                  mids$[mid_setFixedGeomagneticAp_10f281d777284cea] = env->getMethodID(cls, "setFixedGeomagneticAp", "(D)V");
                  mids$[mid_setFixedGeomagneticDst_10f281d777284cea] = env->getMethodID(cls, "setFixedGeomagneticDst", "(D)V");
                  mids$[mid_setFixedGeomagneticKp_10f281d777284cea] = env->getMethodID(cls, "setFixedGeomagneticKp", "(D)V");
                  mids$[mid_setFixedM10P7_10f281d777284cea] = env->getMethodID(cls, "setFixedM10P7", "(D)V");
                  mids$[mid_setFixedM10P7Mean_10f281d777284cea] = env->getMethodID(cls, "setFixedM10P7Mean", "(D)V");
                  mids$[mid_setFixedS10P7_10f281d777284cea] = env->getMethodID(cls, "setFixedS10P7", "(D)V");
                  mids$[mid_setFixedS10P7Mean_10f281d777284cea] = env->getMethodID(cls, "setFixedS10P7Mean", "(D)V");
                  mids$[mid_setFixedY10P7_10f281d777284cea] = env->getMethodID(cls, "setFixedY10P7", "(D)V");
                  mids$[mid_setFixedY10P7Mean_10f281d777284cea] = env->getMethodID(cls, "setFixedY10P7Mean", "(D)V");
                  mids$[mid_setGm_10f281d777284cea] = env->getMethodID(cls, "setGm", "(D)V");
                  mids$[mid_setGravityModel_96097c5e4aacac76] = env->getMethodID(cls, "setGravityModel", "(Ljava/lang/String;II)V");
                  mids$[mid_setInterpMethodSW_f5ffdf29129ef90a] = env->getMethodID(cls, "setInterpMethodSW", "(Ljava/lang/String;)V");
                  mids$[mid_setNBodyPerturbations_4ccaedadb068bdeb] = env->getMethodID(cls, "setNBodyPerturbations", "(Ljava/util/List;)V");
                  mids$[mid_setOblateFlattening_10f281d777284cea] = env->getMethodID(cls, "setOblateFlattening", "(D)V");
                  mids$[mid_setOceanTidesModel_f5ffdf29129ef90a] = env->getMethodID(cls, "setOceanTidesModel", "(Ljava/lang/String;)V");
                  mids$[mid_setReductionTheory_f5ffdf29129ef90a] = env->getMethodID(cls, "setReductionTheory", "(Ljava/lang/String;)V");
                  mids$[mid_setShadowBodies_4ccaedadb068bdeb] = env->getMethodID(cls, "setShadowBodies", "(Ljava/util/List;)V");
                  mids$[mid_setShadowModel_a726b7239e493a85] = env->getMethodID(cls, "setShadowModel", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;)V");
                  mids$[mid_setSolidTidesModel_f5ffdf29129ef90a] = env->getMethodID(cls, "setSolidTidesModel", "(Ljava/lang/String;)V");
                  mids$[mid_setSpaceWeatherEpoch_20affcbd28542333] = env->getMethodID(cls, "setSpaceWeatherEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setSpaceWeatherSource_f5ffdf29129ef90a] = env->getMethodID(cls, "setSpaceWeatherSource", "(Ljava/lang/String;)V");
                  mids$[mid_setSrpModel_f5ffdf29129ef90a] = env->getMethodID(cls, "setSrpModel", "(Ljava/lang/String;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Perturbations::Perturbations(const ::org::orekit::bodies::CelestialBodies & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_cfbdb077cf5027f4, a0.this$)) {}

              jint Perturbations::getAlbedoGridSize() const
              {
                return env->callIntMethod(this$, mids$[mid_getAlbedoGridSize_412668abc8d889e9]);
              }

              ::java::lang::String Perturbations::getAlbedoModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAlbedoModel_3cffd47377eca18a]));
              }

              ::java::lang::String Perturbations::getAtmosphericModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAtmosphericModel_3cffd47377eca18a]));
              }

              jdouble Perturbations::getCentralBodyRotation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCentralBodyRotation_557b8123390d8d0c]);
              }

              jdouble Perturbations::getEquatorialRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_557b8123390d8d0c]);
              }

              jdouble Perturbations::getFixedF10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedF10P7_557b8123390d8d0c]);
              }

              jdouble Perturbations::getFixedF10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedF10P7Mean_557b8123390d8d0c]);
              }

              jdouble Perturbations::getFixedGeomagneticAp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticAp_557b8123390d8d0c]);
              }

              jdouble Perturbations::getFixedGeomagneticDst() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticDst_557b8123390d8d0c]);
              }

              jdouble Perturbations::getFixedGeomagneticKp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticKp_557b8123390d8d0c]);
              }

              jdouble Perturbations::getFixedM10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedM10P7_557b8123390d8d0c]);
              }

              jdouble Perturbations::getFixedM10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedM10P7Mean_557b8123390d8d0c]);
              }

              jdouble Perturbations::getFixedS10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedS10P7_557b8123390d8d0c]);
              }

              jdouble Perturbations::getFixedS10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedS10P7Mean_557b8123390d8d0c]);
              }

              jdouble Perturbations::getFixedY10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedY10P7_557b8123390d8d0c]);
              }

              jdouble Perturbations::getFixedY10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedY10P7Mean_557b8123390d8d0c]);
              }

              jdouble Perturbations::getGm() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGm_557b8123390d8d0c]);
              }

              jint Perturbations::getGravityDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getGravityDegree_412668abc8d889e9]);
              }

              ::java::lang::String Perturbations::getGravityModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGravityModel_3cffd47377eca18a]));
              }

              jint Perturbations::getGravityOrder() const
              {
                return env->callIntMethod(this$, mids$[mid_getGravityOrder_412668abc8d889e9]);
              }

              ::java::lang::String Perturbations::getInterpMethodSW() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpMethodSW_3cffd47377eca18a]));
              }

              ::java::util::List Perturbations::getNBodyPerturbations() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNBodyPerturbations_0d9551367f7ecdef]));
              }

              jdouble Perturbations::getOblateFlattening() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getOblateFlattening_557b8123390d8d0c]);
              }

              ::java::lang::String Perturbations::getOceanTidesModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOceanTidesModel_3cffd47377eca18a]));
              }

              ::java::lang::String Perturbations::getReductionTheory() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReductionTheory_3cffd47377eca18a]));
              }

              ::java::util::List Perturbations::getShadowBodies() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getShadowBodies_0d9551367f7ecdef]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel Perturbations::getShadowModel() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel(env->callObjectMethod(this$, mids$[mid_getShadowModel_4f569c115bfd19f6]));
              }

              ::java::lang::String Perturbations::getSolidTidesModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSolidTidesModel_3cffd47377eca18a]));
              }

              ::org::orekit::time::AbsoluteDate Perturbations::getSpaceWeatherEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getSpaceWeatherEpoch_7a97f7e149e79afb]));
              }

              ::java::lang::String Perturbations::getSpaceWeatherSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpaceWeatherSource_3cffd47377eca18a]));
              }

              ::java::lang::String Perturbations::getSrpModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSrpModel_3cffd47377eca18a]));
              }

              void Perturbations::setAlbedoGridSize(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlbedoGridSize_a3da1a935cb37f7b], a0);
              }

              void Perturbations::setAlbedoModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlbedoModel_f5ffdf29129ef90a], a0.this$);
              }

              void Perturbations::setAtmosphericModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAtmosphericModel_f5ffdf29129ef90a], a0.this$);
              }

              void Perturbations::setCentralBodyRotation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCentralBodyRotation_10f281d777284cea], a0);
              }

              void Perturbations::setEquatorialRadius(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEquatorialRadius_10f281d777284cea], a0);
              }

              void Perturbations::setFixedF10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedF10P7_10f281d777284cea], a0);
              }

              void Perturbations::setFixedF10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedF10P7Mean_10f281d777284cea], a0);
              }

              void Perturbations::setFixedGeomagneticAp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticAp_10f281d777284cea], a0);
              }

              void Perturbations::setFixedGeomagneticDst(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticDst_10f281d777284cea], a0);
              }

              void Perturbations::setFixedGeomagneticKp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticKp_10f281d777284cea], a0);
              }

              void Perturbations::setFixedM10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedM10P7_10f281d777284cea], a0);
              }

              void Perturbations::setFixedM10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedM10P7Mean_10f281d777284cea], a0);
              }

              void Perturbations::setFixedS10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedS10P7_10f281d777284cea], a0);
              }

              void Perturbations::setFixedS10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedS10P7Mean_10f281d777284cea], a0);
              }

              void Perturbations::setFixedY10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedY10P7_10f281d777284cea], a0);
              }

              void Perturbations::setFixedY10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedY10P7Mean_10f281d777284cea], a0);
              }

              void Perturbations::setGm(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGm_10f281d777284cea], a0);
              }

              void Perturbations::setGravityModel(const ::java::lang::String & a0, jint a1, jint a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setGravityModel_96097c5e4aacac76], a0.this$, a1, a2);
              }

              void Perturbations::setInterpMethodSW(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpMethodSW_f5ffdf29129ef90a], a0.this$);
              }

              void Perturbations::setNBodyPerturbations(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNBodyPerturbations_4ccaedadb068bdeb], a0.this$);
              }

              void Perturbations::setOblateFlattening(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOblateFlattening_10f281d777284cea], a0);
              }

              void Perturbations::setOceanTidesModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOceanTidesModel_f5ffdf29129ef90a], a0.this$);
              }

              void Perturbations::setReductionTheory(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setReductionTheory_f5ffdf29129ef90a], a0.this$);
              }

              void Perturbations::setShadowBodies(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setShadowBodies_4ccaedadb068bdeb], a0.this$);
              }

              void Perturbations::setShadowModel(const ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setShadowModel_a726b7239e493a85], a0.this$);
              }

              void Perturbations::setSolidTidesModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolidTidesModel_f5ffdf29129ef90a], a0.this$);
              }

              void Perturbations::setSpaceWeatherEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpaceWeatherEpoch_20affcbd28542333], a0.this$);
              }

              void Perturbations::setSpaceWeatherSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpaceWeatherSource_f5ffdf29129ef90a], a0.this$);
              }

              void Perturbations::setSrpModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpModel_f5ffdf29129ef90a], a0.this$);
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
            namespace ocm {
              static PyObject *t_Perturbations_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Perturbations_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Perturbations_init_(t_Perturbations *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Perturbations_getAlbedoGridSize(t_Perturbations *self);
              static PyObject *t_Perturbations_getAlbedoModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getAtmosphericModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getCentralBodyRotation(t_Perturbations *self);
              static PyObject *t_Perturbations_getEquatorialRadius(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedF10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedF10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticAp(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticDst(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticKp(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedM10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedM10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedS10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedS10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedY10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedY10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getGm(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityDegree(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityOrder(t_Perturbations *self);
              static PyObject *t_Perturbations_getInterpMethodSW(t_Perturbations *self);
              static PyObject *t_Perturbations_getNBodyPerturbations(t_Perturbations *self);
              static PyObject *t_Perturbations_getOblateFlattening(t_Perturbations *self);
              static PyObject *t_Perturbations_getOceanTidesModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getReductionTheory(t_Perturbations *self);
              static PyObject *t_Perturbations_getShadowBodies(t_Perturbations *self);
              static PyObject *t_Perturbations_getShadowModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getSolidTidesModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getSpaceWeatherEpoch(t_Perturbations *self);
              static PyObject *t_Perturbations_getSpaceWeatherSource(t_Perturbations *self);
              static PyObject *t_Perturbations_getSrpModel(t_Perturbations *self);
              static PyObject *t_Perturbations_setAlbedoGridSize(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setAlbedoModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setAtmosphericModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setCentralBodyRotation(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setEquatorialRadius(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedF10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedF10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticAp(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticDst(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticKp(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedM10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedM10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedS10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedS10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedY10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedY10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setGm(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setGravityModel(t_Perturbations *self, PyObject *args);
              static PyObject *t_Perturbations_setInterpMethodSW(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setNBodyPerturbations(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setOblateFlattening(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setOceanTidesModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setReductionTheory(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setShadowBodies(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setShadowModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSolidTidesModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSpaceWeatherEpoch(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSpaceWeatherSource(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSrpModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_get__albedoGridSize(t_Perturbations *self, void *data);
              static int t_Perturbations_set__albedoGridSize(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__albedoModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__albedoModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__atmosphericModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__atmosphericModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__centralBodyRotation(t_Perturbations *self, void *data);
              static int t_Perturbations_set__centralBodyRotation(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__equatorialRadius(t_Perturbations *self, void *data);
              static int t_Perturbations_set__equatorialRadius(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedF10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedF10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedF10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedF10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticAp(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticAp(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticDst(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticDst(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticKp(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticKp(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedM10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedM10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedM10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedM10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedS10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedS10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedS10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedS10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedY10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedY10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedY10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedY10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__gm(t_Perturbations *self, void *data);
              static int t_Perturbations_set__gm(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__gravityDegree(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__gravityModel(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__gravityOrder(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__interpMethodSW(t_Perturbations *self, void *data);
              static int t_Perturbations_set__interpMethodSW(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__nBodyPerturbations(t_Perturbations *self, void *data);
              static int t_Perturbations_set__nBodyPerturbations(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__oblateFlattening(t_Perturbations *self, void *data);
              static int t_Perturbations_set__oblateFlattening(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__oceanTidesModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__oceanTidesModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__reductionTheory(t_Perturbations *self, void *data);
              static int t_Perturbations_set__reductionTheory(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__shadowBodies(t_Perturbations *self, void *data);
              static int t_Perturbations_set__shadowBodies(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__shadowModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__shadowModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__solidTidesModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__solidTidesModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__spaceWeatherEpoch(t_Perturbations *self, void *data);
              static int t_Perturbations_set__spaceWeatherEpoch(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__spaceWeatherSource(t_Perturbations *self, void *data);
              static int t_Perturbations_set__spaceWeatherSource(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__srpModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__srpModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyGetSetDef t_Perturbations__fields_[] = {
                DECLARE_GETSET_FIELD(t_Perturbations, albedoGridSize),
                DECLARE_GETSET_FIELD(t_Perturbations, albedoModel),
                DECLARE_GETSET_FIELD(t_Perturbations, atmosphericModel),
                DECLARE_GETSET_FIELD(t_Perturbations, centralBodyRotation),
                DECLARE_GETSET_FIELD(t_Perturbations, equatorialRadius),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedF10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedF10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticAp),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticDst),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticKp),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedM10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedM10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedS10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedS10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedY10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedY10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, gm),
                DECLARE_GET_FIELD(t_Perturbations, gravityDegree),
                DECLARE_GET_FIELD(t_Perturbations, gravityModel),
                DECLARE_GET_FIELD(t_Perturbations, gravityOrder),
                DECLARE_GETSET_FIELD(t_Perturbations, interpMethodSW),
                DECLARE_GETSET_FIELD(t_Perturbations, nBodyPerturbations),
                DECLARE_GETSET_FIELD(t_Perturbations, oblateFlattening),
                DECLARE_GETSET_FIELD(t_Perturbations, oceanTidesModel),
                DECLARE_GETSET_FIELD(t_Perturbations, reductionTheory),
                DECLARE_GETSET_FIELD(t_Perturbations, shadowBodies),
                DECLARE_GETSET_FIELD(t_Perturbations, shadowModel),
                DECLARE_GETSET_FIELD(t_Perturbations, solidTidesModel),
                DECLARE_GETSET_FIELD(t_Perturbations, spaceWeatherEpoch),
                DECLARE_GETSET_FIELD(t_Perturbations, spaceWeatherSource),
                DECLARE_GETSET_FIELD(t_Perturbations, srpModel),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Perturbations__methods_[] = {
                DECLARE_METHOD(t_Perturbations, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Perturbations, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Perturbations, getAlbedoGridSize, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getAlbedoModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getAtmosphericModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getCentralBodyRotation, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getEquatorialRadius, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedF10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedF10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticAp, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticDst, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticKp, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedM10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedM10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedS10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedS10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedY10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedY10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGm, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityDegree, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityOrder, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getInterpMethodSW, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getNBodyPerturbations, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getOblateFlattening, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getOceanTidesModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getReductionTheory, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getShadowBodies, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getShadowModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSolidTidesModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSpaceWeatherEpoch, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSpaceWeatherSource, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSrpModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, setAlbedoGridSize, METH_O),
                DECLARE_METHOD(t_Perturbations, setAlbedoModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setAtmosphericModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setCentralBodyRotation, METH_O),
                DECLARE_METHOD(t_Perturbations, setEquatorialRadius, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedF10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedF10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticAp, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticDst, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticKp, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedM10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedM10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedS10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedS10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedY10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedY10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setGm, METH_O),
                DECLARE_METHOD(t_Perturbations, setGravityModel, METH_VARARGS),
                DECLARE_METHOD(t_Perturbations, setInterpMethodSW, METH_O),
                DECLARE_METHOD(t_Perturbations, setNBodyPerturbations, METH_O),
                DECLARE_METHOD(t_Perturbations, setOblateFlattening, METH_O),
                DECLARE_METHOD(t_Perturbations, setOceanTidesModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setReductionTheory, METH_O),
                DECLARE_METHOD(t_Perturbations, setShadowBodies, METH_O),
                DECLARE_METHOD(t_Perturbations, setShadowModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setSolidTidesModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setSpaceWeatherEpoch, METH_O),
                DECLARE_METHOD(t_Perturbations, setSpaceWeatherSource, METH_O),
                DECLARE_METHOD(t_Perturbations, setSrpModel, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Perturbations)[] = {
                { Py_tp_methods, t_Perturbations__methods_ },
                { Py_tp_init, (void *) t_Perturbations_init_ },
                { Py_tp_getset, t_Perturbations__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Perturbations)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Perturbations, t_Perturbations, Perturbations);

              void t_Perturbations::install(PyObject *module)
              {
                installType(&PY_TYPE(Perturbations), &PY_TYPE_DEF(Perturbations), module, "Perturbations", 0);
              }

              void t_Perturbations::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "class_", make_descriptor(Perturbations::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "wrapfn_", make_descriptor(t_Perturbations::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Perturbations_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Perturbations::initializeClass, 1)))
                  return NULL;
                return t_Perturbations::wrap_Object(Perturbations(((t_Perturbations *) arg)->object.this$));
              }
              static PyObject *t_Perturbations_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Perturbations::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Perturbations_init_(t_Perturbations *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::bodies::CelestialBodies a0((jobject) NULL);
                Perturbations object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &a0))
                {
                  INT_CALL(object = Perturbations(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Perturbations_getAlbedoGridSize(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getAlbedoGridSize());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getAlbedoModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAlbedoModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getAtmosphericModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAtmosphericModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getCentralBodyRotation(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCentralBodyRotation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getEquatorialRadius(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedF10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedF10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedF10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedF10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticAp(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticAp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticDst(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticDst());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticKp(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticKp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedM10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedM10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedM10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedM10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedS10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedS10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedS10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedS10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedY10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedY10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedY10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedY10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getGm(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGm());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getGravityDegree(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGravityDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getGravityModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getGravityModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getGravityOrder(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGravityOrder());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getInterpMethodSW(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpMethodSW());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getNBodyPerturbations(t_Perturbations *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getNBodyPerturbations());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
              }

              static PyObject *t_Perturbations_getOblateFlattening(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getOblateFlattening());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getOceanTidesModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOceanTidesModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getReductionTheory(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getReductionTheory());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getShadowBodies(t_Perturbations *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getShadowBodies());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
              }

              static PyObject *t_Perturbations_getShadowModel(t_Perturbations *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel result((jobject) NULL);
                OBJ_CALL(result = self->object.getShadowModel());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::wrap_Object(result);
              }

              static PyObject *t_Perturbations_getSolidTidesModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSolidTidesModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getSpaceWeatherEpoch(t_Perturbations *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpaceWeatherEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Perturbations_getSpaceWeatherSource(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpaceWeatherSource());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getSrpModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSrpModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_setAlbedoGridSize(t_Perturbations *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setAlbedoGridSize(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAlbedoGridSize", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setAlbedoModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAlbedoModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAlbedoModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setAtmosphericModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAtmosphericModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAtmosphericModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setCentralBodyRotation(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCentralBodyRotation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCentralBodyRotation", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setEquatorialRadius(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEquatorialRadius(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEquatorialRadius", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedF10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedF10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedF10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedF10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedF10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedF10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticAp(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticAp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticAp", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticDst(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticDst(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticDst", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticKp(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticKp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticKp", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedM10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedM10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedM10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedM10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedM10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedM10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedS10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedS10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedS10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedS10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedS10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedS10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedY10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedY10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedY10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedY10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedY10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedY10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setGm(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGm", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setGravityModel(t_Perturbations *self, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                jint a1;
                jint a2;

                if (!parseArgs(args, "sII", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setGravityModel(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGravityModel", args);
                return NULL;
              }

              static PyObject *t_Perturbations_setInterpMethodSW(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInterpMethodSW(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpMethodSW", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setNBodyPerturbations(t_Perturbations *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setNBodyPerturbations(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNBodyPerturbations", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setOblateFlattening(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setOblateFlattening(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOblateFlattening", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setOceanTidesModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOceanTidesModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOceanTidesModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setReductionTheory(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setReductionTheory(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setReductionTheory", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setShadowBodies(t_Perturbations *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setShadowBodies(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setShadowBodies", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setShadowModel(t_Perturbations *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::parameters_))
                {
                  OBJ_CALL(self->object.setShadowModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setShadowModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSolidTidesModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSolidTidesModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSolidTidesModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSpaceWeatherEpoch(t_Perturbations *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setSpaceWeatherEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpaceWeatherEpoch", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSpaceWeatherSource(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSpaceWeatherSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpaceWeatherSource", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSrpModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSrpModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_get__albedoGridSize(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getAlbedoGridSize());
                return PyLong_FromLong((long) value);
              }
              static int t_Perturbations_set__albedoGridSize(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setAlbedoGridSize(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "albedoGridSize", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__albedoModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAlbedoModel());
                return j2p(value);
              }
              static int t_Perturbations_set__albedoModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAlbedoModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "albedoModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__atmosphericModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAtmosphericModel());
                return j2p(value);
              }
              static int t_Perturbations_set__atmosphericModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAtmosphericModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "atmosphericModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__centralBodyRotation(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCentralBodyRotation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__centralBodyRotation(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCentralBodyRotation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centralBodyRotation", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__equatorialRadius(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__equatorialRadius(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEquatorialRadius(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "equatorialRadius", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedF10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedF10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedF10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedF10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedF10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedF10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedF10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedF10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedF10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedF10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticAp(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticAp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticAp(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticAp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticAp", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticDst(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticDst());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticDst(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticDst(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticDst", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticKp(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticKp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticKp(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticKp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticKp", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedM10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedM10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedM10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedM10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedM10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedM10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedM10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedM10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedM10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedM10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedS10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedS10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedS10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedS10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedS10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedS10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedS10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedS10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedS10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedS10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedY10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedY10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedY10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedY10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedY10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedY10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedY10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedY10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedY10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedY10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__gm(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGm());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__gm(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gm", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__gravityDegree(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGravityDegree());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Perturbations_get__gravityModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getGravityModel());
                return j2p(value);
              }

              static PyObject *t_Perturbations_get__gravityOrder(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGravityOrder());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Perturbations_get__interpMethodSW(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpMethodSW());
                return j2p(value);
              }
              static int t_Perturbations_set__interpMethodSW(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInterpMethodSW(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpMethodSW", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__nBodyPerturbations(t_Perturbations *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getNBodyPerturbations());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_Perturbations_set__nBodyPerturbations(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setNBodyPerturbations(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nBodyPerturbations", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__oblateFlattening(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getOblateFlattening());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__oblateFlattening(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setOblateFlattening(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "oblateFlattening", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__oceanTidesModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOceanTidesModel());
                return j2p(value);
              }
              static int t_Perturbations_set__oceanTidesModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOceanTidesModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "oceanTidesModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__reductionTheory(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getReductionTheory());
                return j2p(value);
              }
              static int t_Perturbations_set__reductionTheory(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setReductionTheory(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "reductionTheory", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__shadowBodies(t_Perturbations *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getShadowBodies());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_Perturbations_set__shadowBodies(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setShadowBodies(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "shadowBodies", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__shadowModel(t_Perturbations *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel value((jobject) NULL);
                OBJ_CALL(value = self->object.getShadowModel());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::wrap_Object(value);
              }
              static int t_Perturbations_set__shadowModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::initializeClass, &value))
                  {
                    INT_CALL(self->object.setShadowModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "shadowModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__solidTidesModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSolidTidesModel());
                return j2p(value);
              }
              static int t_Perturbations_set__solidTidesModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSolidTidesModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "solidTidesModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__spaceWeatherEpoch(t_Perturbations *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpaceWeatherEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_Perturbations_set__spaceWeatherEpoch(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSpaceWeatherEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spaceWeatherEpoch", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__spaceWeatherSource(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpaceWeatherSource());
                return j2p(value);
              }
              static int t_Perturbations_set__spaceWeatherSource(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSpaceWeatherSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spaceWeatherSource", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__srpModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSrpModel());
                return j2p(value);
              }
              static int t_Perturbations_set__srpModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSrpModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpModel", arg);
                return -1;
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
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::mids$ = NULL;
          bool UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::live$ = false;

          jclass UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getUnnormalizedCnm_21b81d54c06b64b0] = env->getMethodID(cls, "getUnnormalizedCnm", "(II)D");
              mids$[mid_getUnnormalizedSnm_21b81d54c06b64b0] = env->getMethodID(cls, "getUnnormalizedSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::getUnnormalizedCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUnnormalizedCnm_21b81d54c06b64b0], a0, a1);
          }

          jdouble UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::getUnnormalizedSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUnnormalizedSnm_21b81d54c06b64b0], a0, a1);
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
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedCnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedSnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, getUnnormalizedCnm, METH_VARARGS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, getUnnormalizedSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics);

          void t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), &PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), module, "UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics", 0);
          }

          void t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "class_", make_descriptor(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_Object(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics(((t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedCnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedCnm", args);
            return NULL;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedSnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *Quaternion::class$ = NULL;
      jmethodID *Quaternion::mids$ = NULL;
      bool Quaternion::live$ = false;
      Quaternion *Quaternion::I = NULL;
      Quaternion *Quaternion::IDENTITY = NULL;
      Quaternion *Quaternion::J = NULL;
      Quaternion *Quaternion::K = NULL;
      Quaternion *Quaternion::ZERO = NULL;

      jclass Quaternion::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/Quaternion");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_092013acd44a9e63] = env->getMethodID(cls, "<init>", "(D[D)V");
          mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
          mids$[mid_add_37c713f90f85ec7a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_add_d60006ca19659f21] = env->getStaticMethodID(cls, "add", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_dotProduct_df61a033821d7ce9] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/complex/Quaternion;)D");
          mids$[mid_dotProduct_4e92dca16a9ca947] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)D");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_d9091f6e7df43c9e] = env->getMethodID(cls, "equals", "(Lorg/hipparchus/complex/Quaternion;D)Z");
          mids$[mid_getConjugate_ed563d4dda2b9f62] = env->getMethodID(cls, "getConjugate", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getInverse_ed563d4dda2b9f62] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getNorm_557b8123390d8d0c] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getPositivePolarForm_ed563d4dda2b9f62] = env->getMethodID(cls, "getPositivePolarForm", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getQ0_557b8123390d8d0c] = env->getMethodID(cls, "getQ0", "()D");
          mids$[mid_getQ1_557b8123390d8d0c] = env->getMethodID(cls, "getQ1", "()D");
          mids$[mid_getQ2_557b8123390d8d0c] = env->getMethodID(cls, "getQ2", "()D");
          mids$[mid_getQ3_557b8123390d8d0c] = env->getMethodID(cls, "getQ3", "()D");
          mids$[mid_getScalarPart_557b8123390d8d0c] = env->getMethodID(cls, "getScalarPart", "()D");
          mids$[mid_getVectorPart_a53a7513ecedada2] = env->getMethodID(cls, "getVectorPart", "()[D");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isPureQuaternion_dd69c3ab2404bb71] = env->getMethodID(cls, "isPureQuaternion", "(D)Z");
          mids$[mid_isUnitQuaternion_dd69c3ab2404bb71] = env->getMethodID(cls, "isUnitQuaternion", "(D)Z");
          mids$[mid_multiply_37c713f90f85ec7a] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_multiply_e6749c879fbbeb60] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_multiply_d60006ca19659f21] = env->getStaticMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_normalize_ed563d4dda2b9f62] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_subtract_37c713f90f85ec7a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_subtract_d60006ca19659f21] = env->getStaticMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          I = new Quaternion(env->getStaticObjectField(cls, "I", "Lorg/hipparchus/complex/Quaternion;"));
          IDENTITY = new Quaternion(env->getStaticObjectField(cls, "IDENTITY", "Lorg/hipparchus/complex/Quaternion;"));
          J = new Quaternion(env->getStaticObjectField(cls, "J", "Lorg/hipparchus/complex/Quaternion;"));
          K = new Quaternion(env->getStaticObjectField(cls, "K", "Lorg/hipparchus/complex/Quaternion;"));
          ZERO = new Quaternion(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/complex/Quaternion;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Quaternion::Quaternion(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

      Quaternion::Quaternion(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_092013acd44a9e63, a0, a1.this$)) {}

      Quaternion::Quaternion(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

      Quaternion Quaternion::add(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_add_37c713f90f85ec7a], a0.this$));
      }

      Quaternion Quaternion::add(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_add_d60006ca19659f21], a0.this$, a1.this$));
      }

      jdouble Quaternion::dotProduct(const Quaternion & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_df61a033821d7ce9], a0.this$);
      }

      jdouble Quaternion::dotProduct(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_dotProduct_4e92dca16a9ca947], a0.this$, a1.this$);
      }

      jboolean Quaternion::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      jboolean Quaternion::equals(const Quaternion & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_d9091f6e7df43c9e], a0.this$, a1);
      }

      Quaternion Quaternion::getConjugate() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getConjugate_ed563d4dda2b9f62]));
      }

      Quaternion Quaternion::getInverse() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getInverse_ed563d4dda2b9f62]));
      }

      jdouble Quaternion::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_557b8123390d8d0c]);
      }

      Quaternion Quaternion::getPositivePolarForm() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getPositivePolarForm_ed563d4dda2b9f62]));
      }

      jdouble Quaternion::getQ0() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ0_557b8123390d8d0c]);
      }

      jdouble Quaternion::getQ1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ1_557b8123390d8d0c]);
      }

      jdouble Quaternion::getQ2() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ2_557b8123390d8d0c]);
      }

      jdouble Quaternion::getQ3() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ3_557b8123390d8d0c]);
      }

      jdouble Quaternion::getScalarPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getScalarPart_557b8123390d8d0c]);
      }

      JArray< jdouble > Quaternion::getVectorPart() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVectorPart_a53a7513ecedada2]));
      }

      jint Quaternion::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      jboolean Quaternion::isPureQuaternion(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPureQuaternion_dd69c3ab2404bb71], a0);
      }

      jboolean Quaternion::isUnitQuaternion(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isUnitQuaternion_dd69c3ab2404bb71], a0);
      }

      Quaternion Quaternion::multiply(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_multiply_37c713f90f85ec7a], a0.this$));
      }

      Quaternion Quaternion::multiply(jdouble a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_multiply_e6749c879fbbeb60], a0));
      }

      Quaternion Quaternion::multiply(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_multiply_d60006ca19659f21], a0.this$, a1.this$));
      }

      Quaternion Quaternion::normalize() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_normalize_ed563d4dda2b9f62]));
      }

      Quaternion Quaternion::subtract(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_subtract_37c713f90f85ec7a], a0.this$));
      }

      Quaternion Quaternion::subtract(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_subtract_d60006ca19659f21], a0.this$, a1.this$));
      }

      ::java::lang::String Quaternion::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_Quaternion_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Quaternion_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Quaternion_init_(t_Quaternion *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Quaternion_add(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_add_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_dotProduct(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_dotProduct_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_equals(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_getConjugate(t_Quaternion *self);
      static PyObject *t_Quaternion_getInverse(t_Quaternion *self);
      static PyObject *t_Quaternion_getNorm(t_Quaternion *self);
      static PyObject *t_Quaternion_getPositivePolarForm(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ0(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ1(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ2(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ3(t_Quaternion *self);
      static PyObject *t_Quaternion_getScalarPart(t_Quaternion *self);
      static PyObject *t_Quaternion_getVectorPart(t_Quaternion *self);
      static PyObject *t_Quaternion_hashCode(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_isPureQuaternion(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_isUnitQuaternion(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_multiply(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_multiply_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_normalize(t_Quaternion *self);
      static PyObject *t_Quaternion_subtract(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_subtract_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_toString(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_get__conjugate(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__inverse(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__norm(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__positivePolarForm(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q0(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q1(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q2(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q3(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__scalarPart(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__vectorPart(t_Quaternion *self, void *data);
      static PyGetSetDef t_Quaternion__fields_[] = {
        DECLARE_GET_FIELD(t_Quaternion, conjugate),
        DECLARE_GET_FIELD(t_Quaternion, inverse),
        DECLARE_GET_FIELD(t_Quaternion, norm),
        DECLARE_GET_FIELD(t_Quaternion, positivePolarForm),
        DECLARE_GET_FIELD(t_Quaternion, q0),
        DECLARE_GET_FIELD(t_Quaternion, q1),
        DECLARE_GET_FIELD(t_Quaternion, q2),
        DECLARE_GET_FIELD(t_Quaternion, q3),
        DECLARE_GET_FIELD(t_Quaternion, scalarPart),
        DECLARE_GET_FIELD(t_Quaternion, vectorPart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Quaternion__methods_[] = {
        DECLARE_METHOD(t_Quaternion, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, add, METH_O),
        DECLARE_METHOD(t_Quaternion, add_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, dotProduct, METH_O),
        DECLARE_METHOD(t_Quaternion, dotProduct_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, equals, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, getConjugate, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getPositivePolarForm, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ0, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ1, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ2, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ3, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getScalarPart, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getVectorPart, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, isPureQuaternion, METH_O),
        DECLARE_METHOD(t_Quaternion, isUnitQuaternion, METH_O),
        DECLARE_METHOD(t_Quaternion, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, multiply_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, normalize, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, subtract, METH_O),
        DECLARE_METHOD(t_Quaternion, subtract_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Quaternion)[] = {
        { Py_tp_methods, t_Quaternion__methods_ },
        { Py_tp_init, (void *) t_Quaternion_init_ },
        { Py_tp_getset, t_Quaternion__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Quaternion)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Quaternion, t_Quaternion, Quaternion);

      void t_Quaternion::install(PyObject *module)
      {
        installType(&PY_TYPE(Quaternion), &PY_TYPE_DEF(Quaternion), module, "Quaternion", 0);
      }

      void t_Quaternion::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "class_", make_descriptor(Quaternion::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "wrapfn_", make_descriptor(t_Quaternion::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "boxfn_", make_descriptor(boxObject));
        env->getClass(Quaternion::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "I", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "IDENTITY", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::IDENTITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "J", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::J)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "K", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::K)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "ZERO", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::ZERO)));
      }

      static PyObject *t_Quaternion_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Quaternion::initializeClass, 1)))
          return NULL;
        return t_Quaternion::wrap_Object(Quaternion(((t_Quaternion *) arg)->object.this$));
      }
      static PyObject *t_Quaternion_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Quaternion::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Quaternion_init_(t_Quaternion *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = Quaternion(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "D[D", &a0, &a1))
            {
              INT_CALL(object = Quaternion(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Quaternion(a0, a1, a2, a3));
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

      static PyObject *t_Quaternion_add(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_add_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::add(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "add_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_dotProduct(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_dotProduct_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::dotProduct(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "dotProduct_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_equals(t_Quaternion *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 2:
          {
            Quaternion a0((jobject) NULL);
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "kD", Quaternion::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Quaternion_getConjugate(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getConjugate());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getInverse(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getNorm(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getPositivePolarForm(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositivePolarForm());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getQ0(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ0());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ1(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ2(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ2());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ3(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ3());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getScalarPart(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getScalarPart());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getVectorPart(t_Quaternion *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getVectorPart());
        return result.wrap();
      }

      static PyObject *t_Quaternion_hashCode(t_Quaternion *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Quaternion_isPureQuaternion(t_Quaternion *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isPureQuaternion(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isPureQuaternion", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_isUnitQuaternion(t_Quaternion *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isUnitQuaternion(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isUnitQuaternion", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_multiply(t_Quaternion *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Quaternion a0((jobject) NULL);
            Quaternion result((jobject) NULL);

            if (!parseArgs(args, "k", Quaternion::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Quaternion::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Quaternion result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Quaternion::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Quaternion_multiply_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::multiply(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "multiply_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_normalize(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_subtract(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_subtract_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::subtract(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "subtract_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_toString(t_Quaternion *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Quaternion_get__conjugate(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getConjugate());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__inverse(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__norm(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__positivePolarForm(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositivePolarForm());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__q0(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ0());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q1(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q2(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ2());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q3(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ3());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__scalarPart(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getScalarPart());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__vectorPart(t_Quaternion *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getVectorPart());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FramesFactory.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/String.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FramesFactory::class$ = NULL;
      jmethodID *FramesFactory::mids$ = NULL;
      bool FramesFactory::live$ = false;
      ::java::lang::String *FramesFactory::BULLETINA_FILENAME = NULL;
      ::java::lang::String *FramesFactory::BULLETINB_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::BULLETINB_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::CSV_FILENAME = NULL;
      ::java::lang::String *FramesFactory::EOPC04_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::EOPC04_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::XML_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::XML_2000_FILENAME = NULL;

      jclass FramesFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FramesFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addDefaultEOP1980HistoryLoaders_7ef3cb05fa691170] = env->getStaticMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_7ef3cb05fa691170] = env->getStaticMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addEOPHistoryLoader_4f61b75864dcff87] = env->getStaticMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_buildUncachedITRF_cda2d3efafd0c0db] = env->getStaticMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/frames/EOPHistory;Lorg/orekit/time/UTCScale;)Lorg/orekit/frames/Frame;");
          mids$[mid_clearEOPHistoryLoaders_0640e6acf969ed28] = env->getStaticMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_findEOP_289e035f9d645fc8] = env->getStaticMethodID(cls, "findEOP", "(Lorg/orekit/frames/Frame;)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getCIRF_af417399ee2f3e0d] = env->getStaticMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_e96d0d85e78fc6bd] = env->getStaticMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_9cf4a1ec2e53bbd3] = env->getStaticMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_bb61238dc14574bc] = env->getStaticMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_9103848bb456e582] = env->getStaticMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrames_19dab31df3f9900d] = env->getStaticMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGCRF_6c9bc0a928c56d4e] = env->getStaticMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_a06a41ba6e4eb36a] = env->getStaticMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_af417399ee2f3e0d] = env->getStaticMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_6c9bc0a928c56d4e] = env->getStaticMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_af417399ee2f3e0d] = env->getStaticMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_e7702de838b8de68] = env->getStaticMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_af417399ee2f3e0d] = env->getStaticMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_57509cacf2364dd9] = env->getStaticMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_a06a41ba6e4eb36a] = env->getStaticMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getNonInterpolatingTransform_28d0e572b753aaa4] = env->getStaticMethodID(cls, "getNonInterpolatingTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getNonInterpolatingTransform_2ae6ba70779ea979] = env->getStaticMethodID(cls, "getNonInterpolatingTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getPZ9011_af417399ee2f3e0d] = env->getStaticMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_e96d0d85e78fc6bd] = env->getStaticMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_57509cacf2364dd9] = env->getStaticMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_af417399ee2f3e0d] = env->getStaticMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_a06a41ba6e4eb36a] = env->getStaticMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_af417399ee2f3e0d] = env->getStaticMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_e96d0d85e78fc6bd] = env->getStaticMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_setEOPContinuityThreshold_10f281d777284cea] = env->getStaticMethodID(cls, "setEOPContinuityThreshold", "(D)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BULLETINA_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINA_FILENAME", "Ljava/lang/String;"));
          BULLETINB_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINB_1980_FILENAME", "Ljava/lang/String;"));
          BULLETINB_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINB_2000_FILENAME", "Ljava/lang/String;"));
          CSV_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "CSV_FILENAME", "Ljava/lang/String;"));
          EOPC04_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EOPC04_1980_FILENAME", "Ljava/lang/String;"));
          EOPC04_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EOPC04_2000_FILENAME", "Ljava/lang/String;"));
          RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME", "Ljava/lang/String;"));
          RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME", "Ljava/lang/String;"));
          XML_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "XML_1980_FILENAME", "Ljava/lang/String;"));
          XML_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "XML_2000_FILENAME", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FramesFactory::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultEOP1980HistoryLoaders_7ef3cb05fa691170], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void FramesFactory::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultEOP2000HistoryLoaders_7ef3cb05fa691170], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void FramesFactory::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addEOPHistoryLoader_4f61b75864dcff87], a0.this$, a1.this$);
      }

      ::org::orekit::frames::Frame FramesFactory::buildUncachedITRF(const ::org::orekit::frames::EOPHistory & a0, const ::org::orekit::time::UTCScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_buildUncachedITRF_cda2d3efafd0c0db], a0.this$, a1.this$));
      }

      void FramesFactory::clearEOPHistoryLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearEOPHistoryLoaders_0640e6acf969ed28]);
      }

      ::org::orekit::frames::EOPHistory FramesFactory::findEOP(const ::org::orekit::frames::Frame & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::EOPHistory(env->callStaticObjectMethod(cls, mids$[mid_findEOP_289e035f9d645fc8], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getCIRF_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getEME2000()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getEME2000_e96d0d85e78fc6bd]));
      }

      ::org::orekit::frames::EOPHistory FramesFactory::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::EOPHistory(env->callStaticObjectMethod(cls, mids$[mid_getEOPHistory_9cf4a1ec2e53bbd3], a0.this$, a1));
      }

      ::org::orekit::frames::Frame FramesFactory::getEcliptic(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getEcliptic_bb61238dc14574bc], a0.this$));
      }

      ::org::orekit::frames::Frame FramesFactory::getFrame(const ::org::orekit::frames::Predefined & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getFrame_9103848bb456e582], a0.this$));
      }

      ::org::orekit::frames::LazyLoadedFrames FramesFactory::getFrames()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::LazyLoadedFrames(env->callStaticObjectMethod(cls, mids$[mid_getFrames_19dab31df3f9900d]));
      }

      ::org::orekit::frames::Frame FramesFactory::getGCRF()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getGCRF_6c9bc0a928c56d4e]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getGTOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getGTOD_a06a41ba6e4eb36a], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getGTOD_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::Frame FramesFactory::getICRF()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getICRF_6c9bc0a928c56d4e]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getITRF_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF FramesFactory::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::VersionedITRF(env->callStaticObjectMethod(cls, mids$[mid_getITRF_e7702de838b8de68], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getITRFEquinox_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getMOD(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getMOD_57509cacf2364dd9], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getMOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getMOD_a06a41ba6e4eb36a], a0));
      }

      ::org::orekit::frames::Transform FramesFactory::getNonInterpolatingTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_getNonInterpolatingTransform_28d0e572b753aaa4], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::FieldTransform FramesFactory::getNonInterpolatingTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_getNonInterpolatingTransform_2ae6ba70779ea979], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getPZ9011_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTEME()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTEME_e96d0d85e78fc6bd]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTIRF(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTIRF_57509cacf2364dd9], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTIRF_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTOD_a06a41ba6e4eb36a], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTOD_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getVeis1950()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getVeis1950_e96d0d85e78fc6bd]));
      }

      void FramesFactory::setEOPContinuityThreshold(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setEOPContinuityThreshold_10f281d777284cea], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_FramesFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_addDefaultEOP1980HistoryLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_addDefaultEOP2000HistoryLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_addEOPHistoryLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_buildUncachedITRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_clearEOPHistoryLoaders(PyTypeObject *type);
      static PyObject *t_FramesFactory_findEOP(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getCIRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getEME2000(PyTypeObject *type);
      static PyObject *t_FramesFactory_getEOPHistory(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getEcliptic(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getFrame(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getFrames(PyTypeObject *type);
      static PyObject *t_FramesFactory_getGCRF(PyTypeObject *type);
      static PyObject *t_FramesFactory_getGTOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getICRF(PyTypeObject *type);
      static PyObject *t_FramesFactory_getITRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getITRFEquinox(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getMOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getNonInterpolatingTransform(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getPZ9011(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getTEME(PyTypeObject *type);
      static PyObject *t_FramesFactory_getTIRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getTOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getVeis1950(PyTypeObject *type);
      static PyObject *t_FramesFactory_setEOPContinuityThreshold(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_get__eME2000(t_FramesFactory *self, void *data);
      static int t_FramesFactory_set__eOPContinuityThreshold(t_FramesFactory *self, PyObject *arg, void *data);
      static PyObject *t_FramesFactory_get__frames(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__gCRF(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__iCRF(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__tEME(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__veis1950(t_FramesFactory *self, void *data);
      static PyGetSetDef t_FramesFactory__fields_[] = {
        DECLARE_GET_FIELD(t_FramesFactory, eME2000),
        DECLARE_SET_FIELD(t_FramesFactory, eOPContinuityThreshold),
        DECLARE_GET_FIELD(t_FramesFactory, frames),
        DECLARE_GET_FIELD(t_FramesFactory, gCRF),
        DECLARE_GET_FIELD(t_FramesFactory, iCRF),
        DECLARE_GET_FIELD(t_FramesFactory, tEME),
        DECLARE_GET_FIELD(t_FramesFactory, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FramesFactory__methods_[] = {
        DECLARE_METHOD(t_FramesFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addDefaultEOP1980HistoryLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addDefaultEOP2000HistoryLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addEOPHistoryLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, buildUncachedITRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, clearEOPHistoryLoaders, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, findEOP, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getCIRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEME2000, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEOPHistory, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEcliptic, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getFrame, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getFrames, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getGCRF, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getGTOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getICRF, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getITRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getITRFEquinox, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getMOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getNonInterpolatingTransform, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getPZ9011, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTEME, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTIRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getVeis1950, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, setEOPContinuityThreshold, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FramesFactory)[] = {
        { Py_tp_methods, t_FramesFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FramesFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FramesFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FramesFactory, t_FramesFactory, FramesFactory);

      void t_FramesFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(FramesFactory), &PY_TYPE_DEF(FramesFactory), module, "FramesFactory", 0);
      }

      void t_FramesFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "class_", make_descriptor(FramesFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "wrapfn_", make_descriptor(t_FramesFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "boxfn_", make_descriptor(boxObject));
        env->getClass(FramesFactory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINA_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINA_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINB_1980_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINB_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINB_2000_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINB_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "CSV_FILENAME", make_descriptor(j2p(*FramesFactory::CSV_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "EOPC04_1980_FILENAME", make_descriptor(j2p(*FramesFactory::EOPC04_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "EOPC04_2000_FILENAME", make_descriptor(j2p(*FramesFactory::EOPC04_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME", make_descriptor(j2p(*FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME", make_descriptor(j2p(*FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "XML_1980_FILENAME", make_descriptor(j2p(*FramesFactory::XML_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "XML_2000_FILENAME", make_descriptor(j2p(*FramesFactory::XML_2000_FILENAME)));
      }

      static PyObject *t_FramesFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FramesFactory::initializeClass, 1)))
          return NULL;
        return t_FramesFactory::wrap_Object(FramesFactory(((t_FramesFactory *) arg)->object.this$));
      }
      static PyObject *t_FramesFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FramesFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FramesFactory_addDefaultEOP1980HistoryLoaders(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_addDefaultEOP2000HistoryLoaders(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_addEOPHistoryLoader(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::EopHistoryLoader a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::EopHistoryLoader::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addEOPHistoryLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addEOPHistoryLoader", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_buildUncachedITRF(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::UTCScale a1((jobject) NULL);
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::time::UTCScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::buildUncachedITRF(a0, a1));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "buildUncachedITRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_clearEOPHistoryLoaders(PyTypeObject *type)
      {
        OBJ_CALL(::org::orekit::frames::FramesFactory::clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_FramesFactory_findEOP(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::findEOP(a0));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "findEOP", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getCIRF(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getCIRF(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCIRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getEME2000(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getEOPHistory(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEOPHistory(a0, a1));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getEcliptic(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEcliptic(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getEcliptic", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getFrame(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Predefined a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::frames::Predefined::initializeClass, &a0, &p0, ::org::orekit::frames::t_Predefined::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getFrame(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFrame", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getFrames(PyTypeObject *type)
      {
        ::org::orekit::frames::LazyLoadedFrames result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getGCRF(PyTypeObject *type)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getGTOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getGTOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getICRF(PyTypeObject *type)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getITRF(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::frames::VersionedITRF result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::frames::t_ITRFVersion::parameters_, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRF(a0, a1, a2));
              return ::org::orekit::frames::t_VersionedITRF::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getITRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getITRFEquinox(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRFEquinox(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getITRFEquinox", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getMOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getMOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getNonInterpolatingTransform(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getNonInterpolatingTransform(a0, a1, a2));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getNonInterpolatingTransform(a0, a1, a2));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getNonInterpolatingTransform", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getPZ9011(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getPZ9011(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPZ9011", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getTEME(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getTIRF(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTIRF(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTIRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getTIRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getTOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getTOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getVeis1950(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_setEOPContinuityThreshold(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::setEOPContinuityThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setEOPContinuityThreshold", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_get__eME2000(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static int t_FramesFactory_set__eOPContinuityThreshold(t_FramesFactory *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setEOPContinuityThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "eOPContinuityThreshold", arg);
        return -1;
      }

      static PyObject *t_FramesFactory_get__frames(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::LazyLoadedFrames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__gCRF(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__iCRF(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__tEME(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__veis1950(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PositionBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PositionBuilder::class$ = NULL;
          jmethodID *PositionBuilder::mids$ = NULL;
          bool PositionBuilder::live$ = false;

          jclass PositionBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PositionBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c6d5bf8c476330d3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_5812c2d3106b1048] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/Position;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PositionBuilder::PositionBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, const ::org::orekit::estimation::measurements::ObservableSatellite & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_c6d5bf8c476330d3, a0.this$, a1, a2, a3.this$)) {}

          ::org::orekit::estimation::measurements::Position PositionBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::Position(env->callObjectMethod(this$, mids$[mid_build_5812c2d3106b1048], a0.this$, a1.this$));
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
        namespace generation {
          static PyObject *t_PositionBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PositionBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PositionBuilder_of_(t_PositionBuilder *self, PyObject *args);
          static int t_PositionBuilder_init_(t_PositionBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PositionBuilder_build(t_PositionBuilder *self, PyObject *args);
          static PyObject *t_PositionBuilder_get__parameters_(t_PositionBuilder *self, void *data);
          static PyGetSetDef t_PositionBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PositionBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PositionBuilder__methods_[] = {
            DECLARE_METHOD(t_PositionBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PositionBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PositionBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PositionBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PositionBuilder)[] = {
            { Py_tp_methods, t_PositionBuilder__methods_ },
            { Py_tp_init, (void *) t_PositionBuilder_init_ },
            { Py_tp_getset, t_PositionBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PositionBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PositionBuilder, t_PositionBuilder, PositionBuilder);
          PyObject *t_PositionBuilder::wrap_Object(const PositionBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PositionBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PositionBuilder *self = (t_PositionBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PositionBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PositionBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PositionBuilder *self = (t_PositionBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PositionBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PositionBuilder), &PY_TYPE_DEF(PositionBuilder), module, "PositionBuilder", 0);
          }

          void t_PositionBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "class_", make_descriptor(PositionBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "wrapfn_", make_descriptor(t_PositionBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PositionBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PositionBuilder::initializeClass, 1)))
              return NULL;
            return t_PositionBuilder::wrap_Object(PositionBuilder(((t_PositionBuilder *) arg)->object.this$));
          }
          static PyObject *t_PositionBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PositionBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PositionBuilder_of_(t_PositionBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PositionBuilder_init_(t_PositionBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            ::org::orekit::estimation::measurements::ObservableSatellite a3((jobject) NULL);
            PositionBuilder object((jobject) NULL);

            if (!parseArgs(args, "kDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PositionBuilder(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PositionBuilder_build(t_PositionBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::Position result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_Position::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PositionBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PositionBuilder_get__parameters_(t_PositionBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEStateAndDerivative::class$ = NULL;
      jmethodID *FieldODEStateAndDerivative::mids$ = NULL;
      bool FieldODEStateAndDerivative::live$ = false;

      jclass FieldODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e9795fccc89fdc2b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_176ec9f2d788ac95] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getCompleteDerivative_41762fd4377ff26e] = env->getMethodID(cls, "getCompleteDerivative", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPrimaryDerivative_41762fd4377ff26e] = env->getMethodID(cls, "getPrimaryDerivative", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSecondaryDerivative_9566838049dc0d99] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldODEStateAndDerivative::FieldODEStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) : ::org::hipparchus::ode::FieldODEState(env->newObject(initializeClass, &mids$, mid_init$_e9795fccc89fdc2b, a0.this$, a1.this$, a2.this$)) {}

      FieldODEStateAndDerivative::FieldODEStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a3, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a4) : ::org::hipparchus::ode::FieldODEState(env->newObject(initializeClass, &mids$, mid_init$_176ec9f2d788ac95, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_41762fd4377ff26e]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_41762fd4377ff26e]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_9566838049dc0d99], a0));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_FieldODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_of_(t_FieldODEStateAndDerivative *self, PyObject *args);
      static int t_FieldODEStateAndDerivative_init_(t_FieldODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldODEStateAndDerivative_getCompleteDerivative(t_FieldODEStateAndDerivative *self);
      static PyObject *t_FieldODEStateAndDerivative_getPrimaryDerivative(t_FieldODEStateAndDerivative *self);
      static PyObject *t_FieldODEStateAndDerivative_getSecondaryDerivative(t_FieldODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_get__completeDerivative(t_FieldODEStateAndDerivative *self, void *data);
      static PyObject *t_FieldODEStateAndDerivative_get__primaryDerivative(t_FieldODEStateAndDerivative *self, void *data);
      static PyObject *t_FieldODEStateAndDerivative_get__parameters_(t_FieldODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_FieldODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, primaryDerivative),
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_FieldODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEStateAndDerivative)[] = {
        { Py_tp_methods, t_FieldODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_FieldODEStateAndDerivative_init_ },
        { Py_tp_getset, t_FieldODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::FieldODEState),
        NULL
      };

      DEFINE_TYPE(FieldODEStateAndDerivative, t_FieldODEStateAndDerivative, FieldODEStateAndDerivative);
      PyObject *t_FieldODEStateAndDerivative::wrap_Object(const FieldODEStateAndDerivative& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEStateAndDerivative::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEStateAndDerivative *self = (t_FieldODEStateAndDerivative *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEStateAndDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEStateAndDerivative::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEStateAndDerivative *self = (t_FieldODEStateAndDerivative *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEStateAndDerivative), &PY_TYPE_DEF(FieldODEStateAndDerivative), module, "FieldODEStateAndDerivative", 0);
      }

      void t_FieldODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "class_", make_descriptor(FieldODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "wrapfn_", make_descriptor(t_FieldODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_FieldODEStateAndDerivative::wrap_Object(FieldODEStateAndDerivative(((t_FieldODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_FieldODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEStateAndDerivative_of_(t_FieldODEStateAndDerivative *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldODEStateAndDerivative_init_(t_FieldODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            FieldODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a3((jobject) NULL);
            PyTypeObject **p3;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a4((jobject) NULL);
            PyTypeObject **p4;
            FieldODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "K[K[K[[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldODEStateAndDerivative_getCompleteDerivative(t_FieldODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_getPrimaryDerivative(t_FieldODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_getSecondaryDerivative(t_FieldODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }
      static PyObject *t_FieldODEStateAndDerivative_get__parameters_(t_FieldODEStateAndDerivative *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEStateAndDerivative_get__completeDerivative(t_FieldODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_get__primaryDerivative(t_FieldODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *PolygonsSet::class$ = NULL;
          jmethodID *PolygonsSet::mids$ = NULL;
          bool PolygonsSet::live$ = false;

          jclass PolygonsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/PolygonsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_6aa9d25762c5a7d9] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_546559a08b08816f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_bdacd7c5506b494c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_348987770fc6c791] = env->getMethodID(cls, "<init>", "(DDDDD)V");
              mids$[mid_buildNew_bab3f9e65b9ad4ae] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/twod/PolygonsSet;");
              mids$[mid_getVertices_528495cb6b4345c3] = env->getMethodID(cls, "getVertices", "()[[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_computeGeometricalProperties_0640e6acf969ed28] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolygonsSet::PolygonsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          PolygonsSet::PolygonsSet(jdouble a0, const JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > & a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_6aa9d25762c5a7d9, a0, a1.this$)) {}

          PolygonsSet::PolygonsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_546559a08b08816f, a0.this$, a1)) {}

          PolygonsSet::PolygonsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_bdacd7c5506b494c, a0.this$, a1)) {}

          PolygonsSet::PolygonsSet(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_348987770fc6c791, a0, a1, a2, a3, a4)) {}

          PolygonsSet PolygonsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return PolygonsSet(env->callObjectMethod(this$, mids$[mid_buildNew_bab3f9e65b9ad4ae], a0.this$));
          }

          JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > PolygonsSet::getVertices() const
          {
            return JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > >(env->callObjectMethod(this$, mids$[mid_getVertices_528495cb6b4345c3]));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          static PyObject *t_PolygonsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolygonsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolygonsSet_of_(t_PolygonsSet *self, PyObject *args);
          static int t_PolygonsSet_init_(t_PolygonsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolygonsSet_buildNew(t_PolygonsSet *self, PyObject *args);
          static PyObject *t_PolygonsSet_getVertices(t_PolygonsSet *self);
          static PyObject *t_PolygonsSet_get__vertices(t_PolygonsSet *self, void *data);
          static PyObject *t_PolygonsSet_get__parameters_(t_PolygonsSet *self, void *data);
          static PyGetSetDef t_PolygonsSet__fields_[] = {
            DECLARE_GET_FIELD(t_PolygonsSet, vertices),
            DECLARE_GET_FIELD(t_PolygonsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolygonsSet__methods_[] = {
            DECLARE_METHOD(t_PolygonsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolygonsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolygonsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolygonsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_PolygonsSet, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolygonsSet)[] = {
            { Py_tp_methods, t_PolygonsSet__methods_ },
            { Py_tp_init, (void *) t_PolygonsSet_init_ },
            { Py_tp_getset, t_PolygonsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolygonsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(PolygonsSet, t_PolygonsSet, PolygonsSet);
          PyObject *t_PolygonsSet::wrap_Object(const PolygonsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolygonsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolygonsSet *self = (t_PolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolygonsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolygonsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolygonsSet *self = (t_PolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolygonsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(PolygonsSet), &PY_TYPE_DEF(PolygonsSet), module, "PolygonsSet", 0);
          }

          void t_PolygonsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "class_", make_descriptor(PolygonsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "wrapfn_", make_descriptor(t_PolygonsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolygonsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolygonsSet::initializeClass, 1)))
              return NULL;
            return t_PolygonsSet::wrap_Object(PolygonsSet(((t_PolygonsSet *) arg)->object.this$));
          }
          static PyObject *t_PolygonsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolygonsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolygonsSet_of_(t_PolygonsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolygonsSet_init_(t_PolygonsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = PolygonsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > a1((jobject) NULL);
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = PolygonsSet(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
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

          static PyObject *t_PolygonsSet_buildNew(t_PolygonsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            PolygonsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_PolygonsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PolygonsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_PolygonsSet_getVertices(t_PolygonsSet *self)
          {
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return JArray<jobject>(result.this$).wrap(NULL);
          }
          static PyObject *t_PolygonsSet_get__parameters_(t_PolygonsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolygonsSet_get__vertices(t_PolygonsSet *self, void *data)
          {
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return JArray<jobject>(value.this$).wrap(NULL);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$StringListConsumer::class$ = NULL;
            jmethodID *ParseToken$StringListConsumer::mids$ = NULL;
            bool ParseToken$StringListConsumer::live$ = false;

            jclass ParseToken$StringListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_4ccaedadb068bdeb] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$StringListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_4ccaedadb068bdeb], a0.this$);
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
            static PyObject *t_ParseToken$StringListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringListConsumer_accept(t_ParseToken$StringListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$StringListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$StringListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$StringListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$StringListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$StringListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$StringListConsumer, t_ParseToken$StringListConsumer, ParseToken$StringListConsumer);

            void t_ParseToken$StringListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$StringListConsumer), &PY_TYPE_DEF(ParseToken$StringListConsumer), module, "ParseToken$StringListConsumer", 0);
            }

            void t_ParseToken$StringListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "class_", make_descriptor(ParseToken$StringListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "wrapfn_", make_descriptor(t_ParseToken$StringListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$StringListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$StringListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$StringListConsumer::wrap_Object(ParseToken$StringListConsumer(((t_ParseToken$StringListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$StringListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$StringListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$StringListConsumer_accept(t_ParseToken$StringListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/util/List.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/io/Serializable.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLE::class$ = NULL;
          jmethodID *TLE::mids$ = NULL;
          bool TLE::live$ = false;
          ::java::lang::String *TLE::B_STAR = NULL;
          jint TLE::DEFAULT = (jint) 0;
          jint TLE::SDP4 = (jint) 0;
          jint TLE::SDP8 = (jint) 0;
          jint TLE::SGP = (jint) 0;
          jint TLE::SGP4 = (jint) 0;
          jint TLE::SGP8 = (jint) 0;

          jclass TLE::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLE");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_630071dd94c59169] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_7f19215bbd886c04] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_init$_acc151c0a4083658] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/AbsoluteDate;DDDDDDDDID)V");
              mids$[mid_init$_ac206f7ea1ecaf2d] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/AbsoluteDate;DDDDDDDDIDLorg/orekit/time/TimeScale;)V");
              mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getBStar_557b8123390d8d0c] = env->getMethodID(cls, "getBStar", "()D");
              mids$[mid_getBStar_b0b988f941da47d8] = env->getMethodID(cls, "getBStar", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getClassification_d156d1ce330f6993] = env->getMethodID(cls, "getClassification", "()C");
              mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getElementNumber_412668abc8d889e9] = env->getMethodID(cls, "getElementNumber", "()I");
              mids$[mid_getEphemerisType_412668abc8d889e9] = env->getMethodID(cls, "getEphemerisType", "()I");
              mids$[mid_getI_557b8123390d8d0c] = env->getMethodID(cls, "getI", "()D");
              mids$[mid_getLaunchNumber_412668abc8d889e9] = env->getMethodID(cls, "getLaunchNumber", "()I");
              mids$[mid_getLaunchPiece_3cffd47377eca18a] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
              mids$[mid_getLaunchYear_412668abc8d889e9] = env->getMethodID(cls, "getLaunchYear", "()I");
              mids$[mid_getLine1_3cffd47377eca18a] = env->getMethodID(cls, "getLine1", "()Ljava/lang/String;");
              mids$[mid_getLine2_3cffd47377eca18a] = env->getMethodID(cls, "getLine2", "()Ljava/lang/String;");
              mids$[mid_getMeanAnomaly_557b8123390d8d0c] = env->getMethodID(cls, "getMeanAnomaly", "()D");
              mids$[mid_getMeanMotion_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotion", "()D");
              mids$[mid_getMeanMotionFirstDerivative_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotionFirstDerivative", "()D");
              mids$[mid_getMeanMotionSecondDerivative_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotionSecondDerivative", "()D");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPerigeeArgument_557b8123390d8d0c] = env->getMethodID(cls, "getPerigeeArgument", "()D");
              mids$[mid_getRaan_557b8123390d8d0c] = env->getMethodID(cls, "getRaan", "()D");
              mids$[mid_getRevolutionNumberAtEpoch_412668abc8d889e9] = env->getMethodID(cls, "getRevolutionNumberAtEpoch", "()I");
              mids$[mid_getSatelliteNumber_412668abc8d889e9] = env->getMethodID(cls, "getSatelliteNumber", "()I");
              mids$[mid_getUtc_527ee9dde1a96470] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isFormatOK_64c9e5626fbef1d6] = env->getStaticMethodID(cls, "isFormatOK", "(Ljava/lang/String;Ljava/lang/String;)Z");
              mids$[mid_stateToTLE_63563460a0b152eb] = env->getStaticMethodID(cls, "stateToTLE", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)Lorg/orekit/propagation/analytical/tle/TLE;");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              B_STAR = new ::java::lang::String(env->getStaticObjectField(cls, "B_STAR", "Ljava/lang/String;"));
              DEFAULT = env->getStaticIntField(cls, "DEFAULT");
              SDP4 = env->getStaticIntField(cls, "SDP4");
              SDP8 = env->getStaticIntField(cls, "SDP8");
              SGP = env->getStaticIntField(cls, "SGP");
              SGP4 = env->getStaticIntField(cls, "SGP4");
              SGP8 = env->getStaticIntField(cls, "SGP8");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TLE::TLE(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_630071dd94c59169, a0.this$, a1.this$)) {}

          TLE::TLE(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7f19215bbd886c04, a0.this$, a1.this$, a2.this$)) {}

          TLE::TLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::AbsoluteDate & a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jint a16, jdouble a17) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_acc151c0a4083658, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17)) {}

          TLE::TLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::AbsoluteDate & a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jint a16, jdouble a17, const ::org::orekit::time::TimeScale & a18) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ac206f7ea1ecaf2d, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18.this$)) {}

          jboolean TLE::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
          }

          jdouble TLE::getBStar() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_557b8123390d8d0c]);
          }

          jdouble TLE::getBStar(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_b0b988f941da47d8], a0.this$);
          }

          jchar TLE::getClassification() const
          {
            return env->callCharMethod(this$, mids$[mid_getClassification_d156d1ce330f6993]);
          }

          ::org::orekit::time::AbsoluteDate TLE::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
          }

          jdouble TLE::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
          }

          jint TLE::getElementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getElementNumber_412668abc8d889e9]);
          }

          jint TLE::getEphemerisType() const
          {
            return env->callIntMethod(this$, mids$[mid_getEphemerisType_412668abc8d889e9]);
          }

          jdouble TLE::getI() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getI_557b8123390d8d0c]);
          }

          jint TLE::getLaunchNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchNumber_412668abc8d889e9]);
          }

          ::java::lang::String TLE::getLaunchPiece() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_3cffd47377eca18a]));
          }

          jint TLE::getLaunchYear() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchYear_412668abc8d889e9]);
          }

          ::java::lang::String TLE::getLine1() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine1_3cffd47377eca18a]));
          }

          ::java::lang::String TLE::getLine2() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine2_3cffd47377eca18a]));
          }

          jdouble TLE::getMeanAnomaly() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanAnomaly_557b8123390d8d0c]);
          }

          jdouble TLE::getMeanMotion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_557b8123390d8d0c]);
          }

          jdouble TLE::getMeanMotionFirstDerivative() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotionFirstDerivative_557b8123390d8d0c]);
          }

          jdouble TLE::getMeanMotionSecondDerivative() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotionSecondDerivative_557b8123390d8d0c]);
          }

          ::java::util::List TLE::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          jdouble TLE::getPerigeeArgument() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgument_557b8123390d8d0c]);
          }

          jdouble TLE::getRaan() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRaan_557b8123390d8d0c]);
          }

          jint TLE::getRevolutionNumberAtEpoch() const
          {
            return env->callIntMethod(this$, mids$[mid_getRevolutionNumberAtEpoch_412668abc8d889e9]);
          }

          jint TLE::getSatelliteNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteNumber_412668abc8d889e9]);
          }

          ::org::orekit::time::TimeScale TLE::getUtc() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUtc_527ee9dde1a96470]));
          }

          jint TLE::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
          }

          jboolean TLE::isFormatOK(const ::java::lang::String & a0, const ::java::lang::String & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_isFormatOK_64c9e5626fbef1d6], a0.this$, a1.this$);
          }

          TLE TLE::stateToTLE(const ::org::orekit::propagation::SpacecraftState & a0, const TLE & a1, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return TLE(env->callStaticObjectMethod(cls, mids$[mid_stateToTLE_63563460a0b152eb], a0.this$, a1.this$, a2.this$));
          }

          ::java::lang::String TLE::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        namespace tle {
          static PyObject *t_TLE_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLE_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TLE_init_(t_TLE *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TLE_equals(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_getBStar(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_getClassification(t_TLE *self);
          static PyObject *t_TLE_getDate(t_TLE *self);
          static PyObject *t_TLE_getE(t_TLE *self);
          static PyObject *t_TLE_getElementNumber(t_TLE *self);
          static PyObject *t_TLE_getEphemerisType(t_TLE *self);
          static PyObject *t_TLE_getI(t_TLE *self);
          static PyObject *t_TLE_getLaunchNumber(t_TLE *self);
          static PyObject *t_TLE_getLaunchPiece(t_TLE *self);
          static PyObject *t_TLE_getLaunchYear(t_TLE *self);
          static PyObject *t_TLE_getLine1(t_TLE *self);
          static PyObject *t_TLE_getLine2(t_TLE *self);
          static PyObject *t_TLE_getMeanAnomaly(t_TLE *self);
          static PyObject *t_TLE_getMeanMotion(t_TLE *self);
          static PyObject *t_TLE_getMeanMotionFirstDerivative(t_TLE *self);
          static PyObject *t_TLE_getMeanMotionSecondDerivative(t_TLE *self);
          static PyObject *t_TLE_getParametersDrivers(t_TLE *self);
          static PyObject *t_TLE_getPerigeeArgument(t_TLE *self);
          static PyObject *t_TLE_getRaan(t_TLE *self);
          static PyObject *t_TLE_getRevolutionNumberAtEpoch(t_TLE *self);
          static PyObject *t_TLE_getSatelliteNumber(t_TLE *self);
          static PyObject *t_TLE_getUtc(t_TLE *self);
          static PyObject *t_TLE_hashCode(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_isFormatOK(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLE_stateToTLE(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLE_toString(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_get__bStar(t_TLE *self, void *data);
          static PyObject *t_TLE_get__classification(t_TLE *self, void *data);
          static PyObject *t_TLE_get__date(t_TLE *self, void *data);
          static PyObject *t_TLE_get__e(t_TLE *self, void *data);
          static PyObject *t_TLE_get__elementNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__ephemerisType(t_TLE *self, void *data);
          static PyObject *t_TLE_get__i(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchPiece(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchYear(t_TLE *self, void *data);
          static PyObject *t_TLE_get__line1(t_TLE *self, void *data);
          static PyObject *t_TLE_get__line2(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanAnomaly(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotion(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotionFirstDerivative(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotionSecondDerivative(t_TLE *self, void *data);
          static PyObject *t_TLE_get__parametersDrivers(t_TLE *self, void *data);
          static PyObject *t_TLE_get__perigeeArgument(t_TLE *self, void *data);
          static PyObject *t_TLE_get__raan(t_TLE *self, void *data);
          static PyObject *t_TLE_get__revolutionNumberAtEpoch(t_TLE *self, void *data);
          static PyObject *t_TLE_get__satelliteNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__utc(t_TLE *self, void *data);
          static PyGetSetDef t_TLE__fields_[] = {
            DECLARE_GET_FIELD(t_TLE, bStar),
            DECLARE_GET_FIELD(t_TLE, classification),
            DECLARE_GET_FIELD(t_TLE, date),
            DECLARE_GET_FIELD(t_TLE, e),
            DECLARE_GET_FIELD(t_TLE, elementNumber),
            DECLARE_GET_FIELD(t_TLE, ephemerisType),
            DECLARE_GET_FIELD(t_TLE, i),
            DECLARE_GET_FIELD(t_TLE, launchNumber),
            DECLARE_GET_FIELD(t_TLE, launchPiece),
            DECLARE_GET_FIELD(t_TLE, launchYear),
            DECLARE_GET_FIELD(t_TLE, line1),
            DECLARE_GET_FIELD(t_TLE, line2),
            DECLARE_GET_FIELD(t_TLE, meanAnomaly),
            DECLARE_GET_FIELD(t_TLE, meanMotion),
            DECLARE_GET_FIELD(t_TLE, meanMotionFirstDerivative),
            DECLARE_GET_FIELD(t_TLE, meanMotionSecondDerivative),
            DECLARE_GET_FIELD(t_TLE, parametersDrivers),
            DECLARE_GET_FIELD(t_TLE, perigeeArgument),
            DECLARE_GET_FIELD(t_TLE, raan),
            DECLARE_GET_FIELD(t_TLE, revolutionNumberAtEpoch),
            DECLARE_GET_FIELD(t_TLE, satelliteNumber),
            DECLARE_GET_FIELD(t_TLE, utc),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TLE__methods_[] = {
            DECLARE_METHOD(t_TLE, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLE, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLE, equals, METH_VARARGS),
            DECLARE_METHOD(t_TLE, getBStar, METH_VARARGS),
            DECLARE_METHOD(t_TLE, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getDate, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getE, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getElementNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getEphemerisType, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getI, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchPiece, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchYear, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLine1, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLine2, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanAnomaly, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotion, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotionFirstDerivative, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotionSecondDerivative, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getPerigeeArgument, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getRaan, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getRevolutionNumberAtEpoch, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getSatelliteNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getUtc, METH_NOARGS),
            DECLARE_METHOD(t_TLE, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_TLE, isFormatOK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLE, stateToTLE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLE, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLE)[] = {
            { Py_tp_methods, t_TLE__methods_ },
            { Py_tp_init, (void *) t_TLE_init_ },
            { Py_tp_getset, t_TLE__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLE)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TLE, t_TLE, TLE);

          void t_TLE::install(PyObject *module)
          {
            installType(&PY_TYPE(TLE), &PY_TYPE_DEF(TLE), module, "TLE", 0);
          }

          void t_TLE::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "class_", make_descriptor(TLE::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "wrapfn_", make_descriptor(t_TLE::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "boxfn_", make_descriptor(boxObject));
            env->getClass(TLE::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "B_STAR", make_descriptor(j2p(*TLE::B_STAR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "DEFAULT", make_descriptor(TLE::DEFAULT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SDP4", make_descriptor(TLE::SDP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SDP8", make_descriptor(TLE::SDP8));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP", make_descriptor(TLE::SGP));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP4", make_descriptor(TLE::SGP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP8", make_descriptor(TLE::SGP8));
          }

          static PyObject *t_TLE_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLE::initializeClass, 1)))
              return NULL;
            return t_TLE::wrap_Object(TLE(((t_TLE *) arg)->object.this$));
          }
          static PyObject *t_TLE_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLE::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TLE_init_(t_TLE *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = TLE(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ssk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = TLE(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 18:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                jdouble a15;
                jint a16;
                jdouble a17;
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIkDDDDDDDDID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17))
                {
                  INT_CALL(object = TLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 19:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                jdouble a15;
                jint a16;
                jdouble a17;
                ::org::orekit::time::TimeScale a18((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIkDDDDDDDDIDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18))
                {
                  INT_CALL(object = TLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18));
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

          static PyObject *t_TLE_equals(t_TLE *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_TLE_getBStar(t_TLE *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBStar());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getBStar(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBStar", args);
            return NULL;
          }

          static PyObject *t_TLE_getClassification(t_TLE *self)
          {
            jchar result;
            OBJ_CALL(result = self->object.getClassification());
            return c2p(result);
          }

          static PyObject *t_TLE_getDate(t_TLE *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TLE_getE(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getElementNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getElementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getEphemerisType(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEphemerisType());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getI(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getI());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getLaunchNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getLaunchPiece(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLaunchPiece());
            return j2p(result);
          }

          static PyObject *t_TLE_getLaunchYear(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchYear());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getLine1(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine1());
            return j2p(result);
          }

          static PyObject *t_TLE_getLine2(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine2());
            return j2p(result);
          }

          static PyObject *t_TLE_getMeanAnomaly(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanAnomaly());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotion(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotionFirstDerivative(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotionFirstDerivative());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotionSecondDerivative(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotionSecondDerivative());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getParametersDrivers(t_TLE *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TLE_getPerigeeArgument(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPerigeeArgument());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getRaan(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRaan());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getRevolutionNumberAtEpoch(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getSatelliteNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getUtc(t_TLE *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getUtc());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_TLE_hashCode(t_TLE *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_TLE_isFormatOK(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLE::isFormatOK(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "isFormatOK", args);
            return NULL;
          }

          static PyObject *t_TLE_stateToTLE(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            TLE a1((jobject) NULL);
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a2((jobject) NULL);
            TLE result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, TLE::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLE::stateToTLE(a0, a1, a2));
              return t_TLE::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "stateToTLE", args);
            return NULL;
          }

          static PyObject *t_TLE_toString(t_TLE *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_TLE_get__bStar(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBStar());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__classification(t_TLE *self, void *data)
          {
            jchar value;
            OBJ_CALL(value = self->object.getClassification());
            return c2p(value);
          }

          static PyObject *t_TLE_get__date(t_TLE *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TLE_get__e(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__elementNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getElementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__ephemerisType(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEphemerisType());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__i(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getI());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__launchNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__launchPiece(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLaunchPiece());
            return j2p(value);
          }

          static PyObject *t_TLE_get__launchYear(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchYear());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__line1(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine1());
            return j2p(value);
          }

          static PyObject *t_TLE_get__line2(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine2());
            return j2p(value);
          }

          static PyObject *t_TLE_get__meanAnomaly(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanAnomaly());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotion(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotion());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotionFirstDerivative(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotionFirstDerivative());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotionSecondDerivative(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotionSecondDerivative());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__parametersDrivers(t_TLE *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_TLE_get__perigeeArgument(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPerigeeArgument());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__raan(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRaan());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__revolutionNumberAtEpoch(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__satelliteNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__utc(t_TLE *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getUtc());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonEOPHistoryLoader.h"
#include "java/util/SortedSet.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPEntry.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonEOPHistoryLoader::class$ = NULL;
      jmethodID *PythonEOPHistoryLoader::mids$ = NULL;
      bool PythonEOPHistoryLoader::live$ = false;

      jclass PythonEOPHistoryLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonEOPHistoryLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_fillHistory_dc8806c52abe2b9d] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEOPHistoryLoader::PythonEOPHistoryLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonEOPHistoryLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonEOPHistoryLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonEOPHistoryLoader::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PythonEOPHistoryLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEOPHistoryLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEOPHistoryLoader_init_(t_PythonEOPHistoryLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEOPHistoryLoader_finalize(t_PythonEOPHistoryLoader *self);
      static PyObject *t_PythonEOPHistoryLoader_pythonExtension(t_PythonEOPHistoryLoader *self, PyObject *args);
      static void JNICALL t_PythonEOPHistoryLoader_fillHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonEOPHistoryLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEOPHistoryLoader_get__self(t_PythonEOPHistoryLoader *self, void *data);
      static PyGetSetDef t_PythonEOPHistoryLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEOPHistoryLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEOPHistoryLoader__methods_[] = {
        DECLARE_METHOD(t_PythonEOPHistoryLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEOPHistoryLoader)[] = {
        { Py_tp_methods, t_PythonEOPHistoryLoader__methods_ },
        { Py_tp_init, (void *) t_PythonEOPHistoryLoader_init_ },
        { Py_tp_getset, t_PythonEOPHistoryLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEOPHistoryLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEOPHistoryLoader, t_PythonEOPHistoryLoader, PythonEOPHistoryLoader);

      void t_PythonEOPHistoryLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEOPHistoryLoader), &PY_TYPE_DEF(PythonEOPHistoryLoader), module, "PythonEOPHistoryLoader", 1);
      }

      void t_PythonEOPHistoryLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "class_", make_descriptor(PythonEOPHistoryLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "wrapfn_", make_descriptor(t_PythonEOPHistoryLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEOPHistoryLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V", (void *) t_PythonEOPHistoryLoader_fillHistory0 },
          { "pythonDecRef", "()V", (void *) t_PythonEOPHistoryLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonEOPHistoryLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEOPHistoryLoader::initializeClass, 1)))
          return NULL;
        return t_PythonEOPHistoryLoader::wrap_Object(PythonEOPHistoryLoader(((t_PythonEOPHistoryLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonEOPHistoryLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEOPHistoryLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEOPHistoryLoader_init_(t_PythonEOPHistoryLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonEOPHistoryLoader object((jobject) NULL);

        INT_CALL(object = PythonEOPHistoryLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEOPHistoryLoader_finalize(t_PythonEOPHistoryLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEOPHistoryLoader_pythonExtension(t_PythonEOPHistoryLoader *self, PyObject *args)
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

      static void JNICALL t_PythonEOPHistoryLoader_fillHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(::org::orekit::utils::IERSConventions$NutationCorrectionConverter(a0));
        PyObject *o1 = ::java::util::t_SortedSet::wrap_Object(::java::util::SortedSet(a1));
        PyObject *result = PyObject_CallMethod(obj, "fillHistory", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonEOPHistoryLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEOPHistoryLoader_get__self(t_PythonEOPHistoryLoader *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/TTest.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *TTest::class$ = NULL;
        jmethodID *TTest::mids$ = NULL;
        bool TTest::live$ = false;

        jclass TTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/TTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_homoscedasticT_628a76297e217f13] = env->getMethodID(cls, "homoscedasticT", "([D[D)D");
            mids$[mid_homoscedasticT_270d3373c85c64aa] = env->getMethodID(cls, "homoscedasticT", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_628a76297e217f13] = env->getMethodID(cls, "homoscedasticTTest", "([D[D)D");
            mids$[mid_homoscedasticTTest_270d3373c85c64aa] = env->getMethodID(cls, "homoscedasticTTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_93ebb7e130400af3] = env->getMethodID(cls, "homoscedasticTTest", "([D[DD)Z");
            mids$[mid_pairedT_628a76297e217f13] = env->getMethodID(cls, "pairedT", "([D[D)D");
            mids$[mid_pairedTTest_628a76297e217f13] = env->getMethodID(cls, "pairedTTest", "([D[D)D");
            mids$[mid_pairedTTest_93ebb7e130400af3] = env->getMethodID(cls, "pairedTTest", "([D[DD)Z");
            mids$[mid_t_628a76297e217f13] = env->getMethodID(cls, "t", "([D[D)D");
            mids$[mid_t_1bc40469b56f2c3c] = env->getMethodID(cls, "t", "(D[D)D");
            mids$[mid_t_39b4b09d85675888] = env->getMethodID(cls, "t", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_t_270d3373c85c64aa] = env->getMethodID(cls, "t", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_628a76297e217f13] = env->getMethodID(cls, "tTest", "([D[D)D");
            mids$[mid_tTest_1bc40469b56f2c3c] = env->getMethodID(cls, "tTest", "(D[D)D");
            mids$[mid_tTest_39b4b09d85675888] = env->getMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_270d3373c85c64aa] = env->getMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_93ebb7e130400af3] = env->getMethodID(cls, "tTest", "([D[DD)Z");
            mids$[mid_tTest_ee5175543eb0ed15] = env->getMethodID(cls, "tTest", "(D[DD)Z");
            mids$[mid_tTest_992a68f955dc257e] = env->getMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_tTest_88ba90c6a489d059] = env->getMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_t_79d60f5d1a9d8623] = env->getMethodID(cls, "t", "(DDDD)D");
            mids$[mid_t_9f42b6fd9d0f2606] = env->getMethodID(cls, "t", "(DDDDDD)D");
            mids$[mid_df_79d60f5d1a9d8623] = env->getMethodID(cls, "df", "(DDDD)D");
            mids$[mid_homoscedasticT_9f42b6fd9d0f2606] = env->getMethodID(cls, "homoscedasticT", "(DDDDDD)D");
            mids$[mid_tTest_79d60f5d1a9d8623] = env->getMethodID(cls, "tTest", "(DDDD)D");
            mids$[mid_tTest_9f42b6fd9d0f2606] = env->getMethodID(cls, "tTest", "(DDDDDD)D");
            mids$[mid_homoscedasticTTest_9f42b6fd9d0f2606] = env->getMethodID(cls, "homoscedasticTTest", "(DDDDDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TTest::TTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble TTest::homoscedasticT(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticT_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticT(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticT_270d3373c85c64aa], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticTTest_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticTTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticTTest_270d3373c85c64aa], a0.this$, a1.this$);
        }

        jboolean TTest::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_homoscedasticTTest_93ebb7e130400af3], a0.this$, a1.this$, a2);
        }

        jdouble TTest::pairedT(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pairedT_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble TTest::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pairedTTest_628a76297e217f13], a0.this$, a1.this$);
        }

        jboolean TTest::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_pairedTTest_93ebb7e130400af3], a0.this$, a1.this$, a2);
        }

        jdouble TTest::t(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble TTest::t(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_1bc40469b56f2c3c], a0, a1.this$);
        }

        jdouble TTest::t(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_39b4b09d85675888], a0, a1.this$);
        }

        jdouble TTest::t(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_270d3373c85c64aa], a0.this$, a1.this$);
        }

        jdouble TTest::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble TTest::tTest(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_1bc40469b56f2c3c], a0, a1.this$);
        }

        jdouble TTest::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_39b4b09d85675888], a0, a1.this$);
        }

        jdouble TTest::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_270d3373c85c64aa], a0.this$, a1.this$);
        }

        jboolean TTest::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_93ebb7e130400af3], a0.this$, a1.this$, a2);
        }

        jboolean TTest::tTest(jdouble a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_ee5175543eb0ed15], a0, a1.this$, a2);
        }

        jboolean TTest::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_992a68f955dc257e], a0, a1.this$, a2);
        }

        jboolean TTest::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_88ba90c6a489d059], a0.this$, a1.this$, a2);
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
        static PyObject *t_TTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TTest_init_(t_TTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TTest_homoscedasticT(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_homoscedasticTTest(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_pairedT(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_pairedTTest(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_t(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_tTest(t_TTest *self, PyObject *args);

        static PyMethodDef t_TTest__methods_[] = {
          DECLARE_METHOD(t_TTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TTest, homoscedasticT, METH_VARARGS),
          DECLARE_METHOD(t_TTest, homoscedasticTTest, METH_VARARGS),
          DECLARE_METHOD(t_TTest, pairedT, METH_VARARGS),
          DECLARE_METHOD(t_TTest, pairedTTest, METH_VARARGS),
          DECLARE_METHOD(t_TTest, t, METH_VARARGS),
          DECLARE_METHOD(t_TTest, tTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TTest)[] = {
          { Py_tp_methods, t_TTest__methods_ },
          { Py_tp_init, (void *) t_TTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TTest, t_TTest, TTest);

        void t_TTest::install(PyObject *module)
        {
          installType(&PY_TYPE(TTest), &PY_TYPE_DEF(TTest), module, "TTest", 0);
        }

        void t_TTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "class_", make_descriptor(TTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "wrapfn_", make_descriptor(t_TTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TTest::initializeClass, 1)))
            return NULL;
          return t_TTest::wrap_Object(TTest(((t_TTest *) arg)->object.this$));
        }
        static PyObject *t_TTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TTest_init_(t_TTest *self, PyObject *args, PyObject *kwds)
        {
          TTest object((jobject) NULL);

          INT_CALL(object = TTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_TTest_homoscedasticT(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "homoscedasticT", args);
          return NULL;
        }

        static PyObject *t_TTest_homoscedasticTTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "homoscedasticTTest", args);
          return NULL;
        }

        static PyObject *t_TTest_pairedT(t_TTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.pairedT(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "pairedT", args);
          return NULL;
        }

        static PyObject *t_TTest_pairedTTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.pairedTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.pairedTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pairedTTest", args);
          return NULL;
        }

        static PyObject *t_TTest_t(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "t", args);
          return NULL;
        }

        static PyObject *t_TTest_tTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "DkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "kkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroPhaseModifier::class$ = NULL;
          jmethodID *ShapiroPhaseModifier::mids$ = NULL;
          bool ShapiroPhaseModifier::live$ = false;

          jclass ShapiroPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroPhaseModifier::ShapiroPhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          ::java::util::List ShapiroPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void ShapiroPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_ShapiroPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroPhaseModifier_init_(t_ShapiroPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroPhaseModifier_getParametersDrivers(t_ShapiroPhaseModifier *self);
          static PyObject *t_ShapiroPhaseModifier_modifyWithoutDerivatives(t_ShapiroPhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroPhaseModifier_get__parametersDrivers(t_ShapiroPhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroPhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroPhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroPhaseModifier, t_ShapiroPhaseModifier, ShapiroPhaseModifier);

          void t_ShapiroPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroPhaseModifier), &PY_TYPE_DEF(ShapiroPhaseModifier), module, "ShapiroPhaseModifier", 0);
          }

          void t_ShapiroPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "class_", make_descriptor(ShapiroPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "wrapfn_", make_descriptor(t_ShapiroPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroPhaseModifier::wrap_Object(ShapiroPhaseModifier(((t_ShapiroPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroPhaseModifier_init_(t_ShapiroPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroPhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroPhaseModifier_getParametersDrivers(t_ShapiroPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroPhaseModifier_modifyWithoutDerivatives(t_ShapiroPhaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_ShapiroPhaseModifier_get__parametersDrivers(t_ShapiroPhaseModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/BaseMultivariateOptimizer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *BaseMultivariateOptimizer::class$ = NULL;
      jmethodID *BaseMultivariateOptimizer::mids$ = NULL;
      bool BaseMultivariateOptimizer::live$ = false;

      jclass BaseMultivariateOptimizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/BaseMultivariateOptimizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLowerBound_a53a7513ecedada2] = env->getMethodID(cls, "getLowerBound", "()[D");
          mids$[mid_getStartPoint_a53a7513ecedada2] = env->getMethodID(cls, "getStartPoint", "()[D");
          mids$[mid_getUpperBound_a53a7513ecedada2] = env->getMethodID(cls, "getUpperBound", "()[D");
          mids$[mid_optimize_531d71f92ce59bee] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_parseOptimizationData_946a92401917c130] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > BaseMultivariateOptimizer::getLowerBound() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getLowerBound_a53a7513ecedada2]));
      }

      JArray< jdouble > BaseMultivariateOptimizer::getStartPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStartPoint_a53a7513ecedada2]));
      }

      JArray< jdouble > BaseMultivariateOptimizer::getUpperBound() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpperBound_a53a7513ecedada2]));
      }

      ::java::lang::Object BaseMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_531d71f92ce59bee], a0.this$));
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
      static PyObject *t_BaseMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultivariateOptimizer_of_(t_BaseMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultivariateOptimizer_getLowerBound(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_getStartPoint(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_getUpperBound(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_optimize(t_BaseMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultivariateOptimizer_get__lowerBound(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__startPoint(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__upperBound(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__parameters_(t_BaseMultivariateOptimizer *self, void *data);
      static PyGetSetDef t_BaseMultivariateOptimizer__fields_[] = {
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, lowerBound),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, startPoint),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, upperBound),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseMultivariateOptimizer__methods_[] = {
        DECLARE_METHOD(t_BaseMultivariateOptimizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, of_, METH_VARARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getStartPoint, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, optimize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseMultivariateOptimizer)[] = {
        { Py_tp_methods, t_BaseMultivariateOptimizer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BaseMultivariateOptimizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseMultivariateOptimizer)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::BaseOptimizer),
        NULL
      };

      DEFINE_TYPE(BaseMultivariateOptimizer, t_BaseMultivariateOptimizer, BaseMultivariateOptimizer);
      PyObject *t_BaseMultivariateOptimizer::wrap_Object(const BaseMultivariateOptimizer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultivariateOptimizer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultivariateOptimizer *self = (t_BaseMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BaseMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultivariateOptimizer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultivariateOptimizer *self = (t_BaseMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BaseMultivariateOptimizer::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseMultivariateOptimizer), &PY_TYPE_DEF(BaseMultivariateOptimizer), module, "BaseMultivariateOptimizer", 0);
      }

      void t_BaseMultivariateOptimizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "class_", make_descriptor(BaseMultivariateOptimizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "wrapfn_", make_descriptor(t_BaseMultivariateOptimizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseMultivariateOptimizer::initializeClass, 1)))
          return NULL;
        return t_BaseMultivariateOptimizer::wrap_Object(BaseMultivariateOptimizer(((t_BaseMultivariateOptimizer *) arg)->object.this$));
      }
      static PyObject *t_BaseMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseMultivariateOptimizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseMultivariateOptimizer_of_(t_BaseMultivariateOptimizer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_BaseMultivariateOptimizer_getLowerBound(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerBound());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_getStartPoint(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getStartPoint());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_getUpperBound(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperBound());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_optimize(t_BaseMultivariateOptimizer *self, PyObject *args)
      {
        JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.optimize(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BaseMultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
      }
      static PyObject *t_BaseMultivariateOptimizer_get__parameters_(t_BaseMultivariateOptimizer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BaseMultivariateOptimizer_get__lowerBound(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerBound());
        return value.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_get__startPoint(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getStartPoint());
        return value.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_get__upperBound(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperBound());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/SimpleTimeStampedTableParser.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/SimpleTimeStampedTableParser$RowConverter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SimpleTimeStampedTableParser::class$ = NULL;
      jmethodID *SimpleTimeStampedTableParser::mids$ = NULL;
      bool SimpleTimeStampedTableParser::live$ = false;

      jclass SimpleTimeStampedTableParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SimpleTimeStampedTableParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fc57161375601049] = env->getMethodID(cls, "<init>", "(ILorg/orekit/data/SimpleTimeStampedTableParser$RowConverter;)V");
          mids$[mid_parse_e3101d06c7a1bcab] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleTimeStampedTableParser::SimpleTimeStampedTableParser(jint a0, const ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fc57161375601049, a0, a1.this$)) {}

      ::java::util::List SimpleTimeStampedTableParser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_e3101d06c7a1bcab], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_SimpleTimeStampedTableParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser_of_(t_SimpleTimeStampedTableParser *self, PyObject *args);
      static int t_SimpleTimeStampedTableParser_init_(t_SimpleTimeStampedTableParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleTimeStampedTableParser_parse(t_SimpleTimeStampedTableParser *self, PyObject *args);
      static PyObject *t_SimpleTimeStampedTableParser_get__parameters_(t_SimpleTimeStampedTableParser *self, void *data);
      static PyGetSetDef t_SimpleTimeStampedTableParser__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleTimeStampedTableParser, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleTimeStampedTableParser__methods_[] = {
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleTimeStampedTableParser)[] = {
        { Py_tp_methods, t_SimpleTimeStampedTableParser__methods_ },
        { Py_tp_init, (void *) t_SimpleTimeStampedTableParser_init_ },
        { Py_tp_getset, t_SimpleTimeStampedTableParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleTimeStampedTableParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleTimeStampedTableParser, t_SimpleTimeStampedTableParser, SimpleTimeStampedTableParser);
      PyObject *t_SimpleTimeStampedTableParser::wrap_Object(const SimpleTimeStampedTableParser& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser *self = (t_SimpleTimeStampedTableParser *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleTimeStampedTableParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser *self = (t_SimpleTimeStampedTableParser *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleTimeStampedTableParser::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleTimeStampedTableParser), &PY_TYPE_DEF(SimpleTimeStampedTableParser), module, "SimpleTimeStampedTableParser", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "RowConverter", make_descriptor(&PY_TYPE_DEF(SimpleTimeStampedTableParser$RowConverter)));
      }

      void t_SimpleTimeStampedTableParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "class_", make_descriptor(SimpleTimeStampedTableParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "wrapfn_", make_descriptor(t_SimpleTimeStampedTableParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleTimeStampedTableParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleTimeStampedTableParser::initializeClass, 1)))
          return NULL;
        return t_SimpleTimeStampedTableParser::wrap_Object(SimpleTimeStampedTableParser(((t_SimpleTimeStampedTableParser *) arg)->object.this$));
      }
      static PyObject *t_SimpleTimeStampedTableParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleTimeStampedTableParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleTimeStampedTableParser_of_(t_SimpleTimeStampedTableParser *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimpleTimeStampedTableParser_init_(t_SimpleTimeStampedTableParser *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter a1((jobject) NULL);
        PyTypeObject **p1;
        SimpleTimeStampedTableParser object((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter::initializeClass, &a0, &a1, &p1, ::org::orekit::data::t_SimpleTimeStampedTableParser$RowConverter::parameters_))
        {
          INT_CALL(object = SimpleTimeStampedTableParser(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SimpleTimeStampedTableParser_parse(t_SimpleTimeStampedTableParser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
      static PyObject *t_SimpleTimeStampedTableParser_get__parameters_(t_SimpleTimeStampedTableParser *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
