#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/time/TimeScale.h"
#include "java/io/InputStream.h"
#include "java/util/SortedSet.h"
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *SOLFSMYDataLoader::class$ = NULL;
            jmethodID *SOLFSMYDataLoader::mids$ = NULL;
            bool SOLFSMYDataLoader::live$ = false;

            jclass SOLFSMYDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6d73d536a2f24dd5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_d01a04ddab6c7194] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
                mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SOLFSMYDataLoader::SOLFSMYDataLoader(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d73d536a2f24dd5, a0.this$)) {}

            ::java::util::SortedSet SOLFSMYDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_d01a04ddab6c7194]));
            }

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
            }

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
            }

            void SOLFSMYDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
            }

            jboolean SOLFSMYDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_e470b6d9e0d979db]);
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
            static PyObject *t_SOLFSMYDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SOLFSMYDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SOLFSMYDataLoader_init_(t_SOLFSMYDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SOLFSMYDataLoader_getDataSet(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_getMaxDate(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_getMinDate(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_loadData(t_SOLFSMYDataLoader *self, PyObject *args);
            static PyObject *t_SOLFSMYDataLoader_stillAcceptsData(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_get__dataSet(t_SOLFSMYDataLoader *self, void *data);
            static PyObject *t_SOLFSMYDataLoader_get__maxDate(t_SOLFSMYDataLoader *self, void *data);
            static PyObject *t_SOLFSMYDataLoader_get__minDate(t_SOLFSMYDataLoader *self, void *data);
            static PyGetSetDef t_SOLFSMYDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, dataSet),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, maxDate),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SOLFSMYDataLoader__methods_[] = {
              DECLARE_METHOD(t_SOLFSMYDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, loadData, METH_VARARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SOLFSMYDataLoader)[] = {
              { Py_tp_methods, t_SOLFSMYDataLoader__methods_ },
              { Py_tp_init, (void *) t_SOLFSMYDataLoader_init_ },
              { Py_tp_getset, t_SOLFSMYDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SOLFSMYDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SOLFSMYDataLoader, t_SOLFSMYDataLoader, SOLFSMYDataLoader);

            void t_SOLFSMYDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(SOLFSMYDataLoader), &PY_TYPE_DEF(SOLFSMYDataLoader), module, "SOLFSMYDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(SOLFSMYDataLoader$LineParameters)));
            }

            void t_SOLFSMYDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "class_", make_descriptor(SOLFSMYDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "wrapfn_", make_descriptor(t_SOLFSMYDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SOLFSMYDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SOLFSMYDataLoader::initializeClass, 1)))
                return NULL;
              return t_SOLFSMYDataLoader::wrap_Object(SOLFSMYDataLoader(((t_SOLFSMYDataLoader *) arg)->object.this$));
            }
            static PyObject *t_SOLFSMYDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SOLFSMYDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SOLFSMYDataLoader_init_(t_SOLFSMYDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              SOLFSMYDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = SOLFSMYDataLoader(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SOLFSMYDataLoader_getDataSet(t_SOLFSMYDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(SOLFSMYDataLoader$LineParameters));
            }

            static PyObject *t_SOLFSMYDataLoader_getMaxDate(t_SOLFSMYDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader_getMinDate(t_SOLFSMYDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader_loadData(t_SOLFSMYDataLoader *self, PyObject *args)
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

            static PyObject *t_SOLFSMYDataLoader_stillAcceptsData(t_SOLFSMYDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_SOLFSMYDataLoader_get__dataSet(t_SOLFSMYDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader_get__maxDate(t_SOLFSMYDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader_get__minDate(t_SOLFSMYDataLoader *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGHIJjsPolynomials.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldGHIJjsPolynomials::class$ = NULL;
            jmethodID *FieldGHIJjsPolynomials::mids$ = NULL;
            bool FieldGHIJjsPolynomials::live$ = false;

            jclass FieldGHIJjsPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGHIJjsPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_9cabefcf88bb1df4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getGjs_3e44951e1cc3e6e3] = env->getMethodID(cls, "getGjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHjs_3e44951e1cc3e6e3] = env->getMethodID(cls, "getHjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getIjs_3e44951e1cc3e6e3] = env->getMethodID(cls, "getIjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getJjs_3e44951e1cc3e6e3] = env->getMethodID(cls, "getJjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdAlpha_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdGjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdBeta_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdGjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdh_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdGjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdk_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdGjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdAlpha_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdHjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdBeta_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdHjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdh_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdHjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdk_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdHjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdAlpha_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdIjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdBeta_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdIjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdh_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdIjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdk_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdIjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdAlpha_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdJjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdBeta_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdJjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdh_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdJjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdk_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdJjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGHIJjsPolynomials::FieldGHIJjsPolynomials(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9cabefcf88bb1df4, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getGjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGjs_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getHjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHjs_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getIjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIjs_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getJjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getJjs_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdAlpha_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdBeta_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdh_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdk_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdAlpha_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdBeta_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdh_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdk_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdAlpha_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdBeta_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdh_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdk_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdAlpha_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdBeta_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdh_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdk_3e44951e1cc3e6e3], a0, a1));
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
          namespace utilities {
            static PyObject *t_FieldGHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHIJjsPolynomials_of_(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static int t_FieldGHIJjsPolynomials_init_(t_FieldGHIJjsPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGHIJjsPolynomials_getGjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getHjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getIjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getJjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_get__parameters_(t_FieldGHIJjsPolynomials *self, void *data);
            static PyGetSetDef t_FieldGHIJjsPolynomials__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGHIJjsPolynomials, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGHIJjsPolynomials__methods_[] = {
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getGjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getHjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getIjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getJjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGHIJjsPolynomials)[] = {
              { Py_tp_methods, t_FieldGHIJjsPolynomials__methods_ },
              { Py_tp_init, (void *) t_FieldGHIJjsPolynomials_init_ },
              { Py_tp_getset, t_FieldGHIJjsPolynomials__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGHIJjsPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGHIJjsPolynomials, t_FieldGHIJjsPolynomials, FieldGHIJjsPolynomials);
            PyObject *t_FieldGHIJjsPolynomials::wrap_Object(const FieldGHIJjsPolynomials& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHIJjsPolynomials::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHIJjsPolynomials *self = (t_FieldGHIJjsPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGHIJjsPolynomials::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHIJjsPolynomials::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHIJjsPolynomials *self = (t_FieldGHIJjsPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGHIJjsPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGHIJjsPolynomials), &PY_TYPE_DEF(FieldGHIJjsPolynomials), module, "FieldGHIJjsPolynomials", 0);
            }

            void t_FieldGHIJjsPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "class_", make_descriptor(FieldGHIJjsPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "wrapfn_", make_descriptor(t_FieldGHIJjsPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGHIJjsPolynomials::initializeClass, 1)))
                return NULL;
              return t_FieldGHIJjsPolynomials::wrap_Object(FieldGHIJjsPolynomials(((t_FieldGHIJjsPolynomials *) arg)->object.this$));
            }
            static PyObject *t_FieldGHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGHIJjsPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGHIJjsPolynomials_of_(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGHIJjsPolynomials_init_(t_FieldGHIJjsPolynomials *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGHIJjsPolynomials object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldGHIJjsPolynomials(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getGjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getHjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getHjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getIjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getIjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getIjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getJjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getJjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getJjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdk", args);
              return NULL;
            }
            static PyObject *t_FieldGHIJjsPolynomials_get__parameters_(t_FieldGHIJjsPolynomials *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionMessage::class$ = NULL;
              jmethodID *RtcmCorrectionMessage::mids$ = NULL;
              bool RtcmCorrectionMessage::live$ = false;

              jclass RtcmCorrectionMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ddc181bba9c16073] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");
                  mids$[mid_getDataMap_d6753b7055940a54] = env->getMethodID(cls, "getDataMap", "()Ljava/util/Map;");
                  mids$[mid_getHeader_2ea93e5ea4dfc894] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;");
                  mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionMessage::RtcmCorrectionMessage(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(env->newObject(initializeClass, &mids$, mid_init$_ddc181bba9c16073, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map RtcmCorrectionMessage::getDataMap() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getDataMap_d6753b7055940a54]));
              }

              ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader RtcmCorrectionMessage::getHeader() const
              {
                return ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader(env->callObjectMethod(this$, mids$[mid_getHeader_2ea93e5ea4dfc894]));
              }

              ::org::orekit::gnss::SatelliteSystem RtcmCorrectionMessage::getSatelliteSystem() const
              {
                return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7]));
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              static PyObject *t_RtcmCorrectionMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionMessage_of_(t_RtcmCorrectionMessage *self, PyObject *args);
              static int t_RtcmCorrectionMessage_init_(t_RtcmCorrectionMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionMessage_getDataMap(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_getHeader(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_getSatelliteSystem(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_get__dataMap(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__header(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__satelliteSystem(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__parameters_(t_RtcmCorrectionMessage *self, void *data);
              static PyGetSetDef t_RtcmCorrectionMessage__fields_[] = {
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, dataMap),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, header),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, satelliteSystem),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionMessage__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getDataMap, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getHeader, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getSatelliteSystem, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionMessage)[] = {
                { Py_tp_methods, t_RtcmCorrectionMessage__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionMessage_init_ },
                { Py_tp_getset, t_RtcmCorrectionMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmMessage),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionMessage, t_RtcmCorrectionMessage, RtcmCorrectionMessage);
              PyObject *t_RtcmCorrectionMessage::wrap_Object(const RtcmCorrectionMessage& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_RtcmCorrectionMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmCorrectionMessage *self = (t_RtcmCorrectionMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_RtcmCorrectionMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_RtcmCorrectionMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmCorrectionMessage *self = (t_RtcmCorrectionMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_RtcmCorrectionMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionMessage), &PY_TYPE_DEF(RtcmCorrectionMessage), module, "RtcmCorrectionMessage", 0);
              }

              void t_RtcmCorrectionMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "class_", make_descriptor(RtcmCorrectionMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "wrapfn_", make_descriptor(t_RtcmCorrectionMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionMessage::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionMessage::wrap_Object(RtcmCorrectionMessage(((t_RtcmCorrectionMessage *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RtcmCorrectionMessage_of_(t_RtcmCorrectionMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_RtcmCorrectionMessage_init_(t_RtcmCorrectionMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                RtcmCorrectionMessage object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = RtcmCorrectionMessage(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_RtcmCorrectionMessage_getDataMap(t_RtcmCorrectionMessage *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getDataMap());
                return ::java::util::t_Map::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionMessage_getHeader(t_RtcmCorrectionMessage *self)
              {
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader result((jobject) NULL);
                OBJ_CALL(result = self->object.getHeader());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::rtcm::correction::t_RtcmCorrectionHeader::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionMessage_getSatelliteSystem(t_RtcmCorrectionMessage *self)
              {
                ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
              }
              static PyObject *t_RtcmCorrectionMessage_get__parameters_(t_RtcmCorrectionMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RtcmCorrectionMessage_get__dataMap(t_RtcmCorrectionMessage *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getDataMap());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_RtcmCorrectionMessage_get__header(t_RtcmCorrectionMessage *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::gnss::metric::messages::rtcm::correction::t_RtcmCorrectionHeader::wrap_Object(value);
              }

              static PyObject *t_RtcmCorrectionMessage_get__satelliteSystem(t_RtcmCorrectionMessage *self, void *data)
              {
                ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
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
#include "org/orekit/python/PythonUnivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonUnivariateFunction::class$ = NULL;
      jmethodID *PythonUnivariateFunction::mids$ = NULL;
      bool PythonUnivariateFunction::live$ = false;

      jclass PythonUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUnivariateFunction::PythonUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonUnivariateFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace python {
      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self);
      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonUnivariateFunction, t_PythonUnivariateFunction, PythonUnivariateFunction);

      void t_PythonUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonUnivariateFunction), &PY_TYPE_DEF(PythonUnivariateFunction), module, "PythonUnivariateFunction", 1);
      }

      void t_PythonUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "class_", make_descriptor(PythonUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "wrapfn_", make_descriptor(t_PythonUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonUnivariateFunction_pythonDecRef0 },
          { "value", "(D)D", (void *) t_PythonUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonUnivariateFunction::wrap_Object(PythonUnivariateFunction(((t_PythonUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "value", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data)
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
#include "org/orekit/propagation/conversion/LutherFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *LutherFieldIntegratorBuilder::class$ = NULL;
        jmethodID *LutherFieldIntegratorBuilder::mids$ = NULL;
        bool LutherFieldIntegratorBuilder::live$ = false;

        jclass LutherFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/LutherFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_03a16642f77779e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherFieldIntegratorBuilder::LutherFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        LutherFieldIntegratorBuilder::LutherFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_03a16642f77779e7, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator LutherFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_79616f78bb6df44f], a0.this$, a1.this$, a2.this$));
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
      namespace conversion {
        static PyObject *t_LutherFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegratorBuilder_of_(t_LutherFieldIntegratorBuilder *self, PyObject *args);
        static int t_LutherFieldIntegratorBuilder_init_(t_LutherFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherFieldIntegratorBuilder_buildIntegrator(t_LutherFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_LutherFieldIntegratorBuilder_get__parameters_(t_LutherFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_LutherFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_LutherFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_LutherFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_LutherFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_LutherFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(LutherFieldIntegratorBuilder, t_LutherFieldIntegratorBuilder, LutherFieldIntegratorBuilder);
        PyObject *t_LutherFieldIntegratorBuilder::wrap_Object(const LutherFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegratorBuilder *self = (t_LutherFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LutherFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegratorBuilder *self = (t_LutherFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LutherFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherFieldIntegratorBuilder), &PY_TYPE_DEF(LutherFieldIntegratorBuilder), module, "LutherFieldIntegratorBuilder", 0);
        }

        void t_LutherFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "class_", make_descriptor(LutherFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_LutherFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_LutherFieldIntegratorBuilder::wrap_Object(LutherFieldIntegratorBuilder(((t_LutherFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_LutherFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LutherFieldIntegratorBuilder_of_(t_LutherFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LutherFieldIntegratorBuilder_init_(t_LutherFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              LutherFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = LutherFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              LutherFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = LutherFieldIntegratorBuilder(a0));
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

        static PyObject *t_LutherFieldIntegratorBuilder_buildIntegrator(t_LutherFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(LutherFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_LutherFieldIntegratorBuilder_get__parameters_(t_LutherFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventSlopeFilter.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventSlopeFilter::class$ = NULL;
        jmethodID *EventSlopeFilter::mids$ = NULL;
        bool EventSlopeFilter::live$ = false;

        jclass EventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_62d2a5579317477f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/events/FilterType;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_27b528e7858202ed] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getFilter_bc5d409ace763cc9] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_6598be61cf43dede] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventSlopeFilter::EventSlopeFilter(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::events::FilterType & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_62d2a5579317477f, a0.this$, a1.this$)) {}

        jdouble EventSlopeFilter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector EventSlopeFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_27b528e7858202ed]));
        }

        ::org::orekit::propagation::events::FilterType EventSlopeFilter::getFilter() const
        {
          return ::org::orekit::propagation::events::FilterType(env->callObjectMethod(this$, mids$[mid_getFilter_bc5d409ace763cc9]));
        }

        void EventSlopeFilter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
      namespace events {
        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args);
        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self);
        static PyObject *t_EventSlopeFilter_getFilter(t_EventSlopeFilter *self);
        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data);
        static PyObject *t_EventSlopeFilter_get__filter(t_EventSlopeFilter *self, void *data);
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data);
        static PyGetSetDef t_EventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_EventSlopeFilter, filter),
          DECLARE_GET_FIELD(t_EventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_EventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventSlopeFilter, getFilter, METH_NOARGS),
          DECLARE_METHOD(t_EventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventSlopeFilter)[] = {
          { Py_tp_methods, t_EventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_EventSlopeFilter_init_ },
          { Py_tp_getset, t_EventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventSlopeFilter, t_EventSlopeFilter, EventSlopeFilter);
        PyObject *t_EventSlopeFilter::wrap_Object(const EventSlopeFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventSlopeFilter), &PY_TYPE_DEF(EventSlopeFilter), module, "EventSlopeFilter", 0);
        }

        void t_EventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "class_", make_descriptor(EventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "wrapfn_", make_descriptor(t_EventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_EventSlopeFilter::wrap_Object(EventSlopeFilter(((t_EventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          EventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::events::FilterType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::events::t_FilterType::parameters_))
          {
            INT_CALL(object = EventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventSlopeFilter_getFilter(t_EventSlopeFilter *self)
        {
          ::org::orekit::propagation::events::FilterType result((jobject) NULL);
          OBJ_CALL(result = self->object.getFilter());
          return ::org::orekit::propagation::events::t_FilterType::wrap_Object(result);
        }

        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventSlopeFilter_get__filter(t_EventSlopeFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FilterType value((jobject) NULL);
          OBJ_CALL(value = self->object.getFilter());
          return ::org::orekit::propagation::events::t_FilterType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory::class$ = NULL;
        jmethodID *SmoothStepFactory::mids$ = NULL;
        bool SmoothStepFactory::live$ = false;

        jclass SmoothStepFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_checkBetweenZeroAndOneIncluded_77e0f9a1f260e2e5] = env->getStaticMethodID(cls, "checkBetweenZeroAndOneIncluded", "(D)V");
            mids$[mid_getClamp_b9df9c58da0ce53f] = env->getStaticMethodID(cls, "getClamp", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getClamp_ae6ee6de4d113939] = env->getStaticMethodID(cls, "getClamp", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getCubic_b9df9c58da0ce53f] = env->getStaticMethodID(cls, "getCubic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getCubic_ae6ee6de4d113939] = env->getStaticMethodID(cls, "getCubic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getFieldGeneralOrder_48124bfe232228f8] = env->getStaticMethodID(cls, "getFieldGeneralOrder", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getGeneralOrder_67259ad00088ddee] = env->getStaticMethodID(cls, "getGeneralOrder", "(I)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuadratic_b9df9c58da0ce53f] = env->getStaticMethodID(cls, "getQuadratic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuadratic_ae6ee6de4d113939] = env->getStaticMethodID(cls, "getQuadratic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getQuintic_b9df9c58da0ce53f] = env->getStaticMethodID(cls, "getQuintic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuintic_ae6ee6de4d113939] = env->getStaticMethodID(cls, "getQuintic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SmoothStepFactory::checkBetweenZeroAndOneIncluded(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkBetweenZeroAndOneIncluded_77e0f9a1f260e2e5], a0);
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getClamp()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getClamp_b9df9c58da0ce53f]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getClamp(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getClamp_ae6ee6de4d113939], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getCubic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getCubic_b9df9c58da0ce53f]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getCubic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getCubic_ae6ee6de4d113939], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getFieldGeneralOrder(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getFieldGeneralOrder_48124bfe232228f8], a0.this$, a1));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getGeneralOrder(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getGeneralOrder_67259ad00088ddee], a0));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getQuadratic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuadratic_b9df9c58da0ce53f]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getQuadratic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuadratic_ae6ee6de4d113939], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getQuintic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuintic_b9df9c58da0ce53f]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getQuintic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuintic_ae6ee6de4d113939], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        static PyObject *t_SmoothStepFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_checkBetweenZeroAndOneIncluded(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_getClamp(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getCubic(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getFieldGeneralOrder(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getGeneralOrder(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_getQuadratic(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getQuintic(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_get__clamp(t_SmoothStepFactory *self, void *data);
        static PyObject *t_SmoothStepFactory_get__cubic(t_SmoothStepFactory *self, void *data);
        static PyObject *t_SmoothStepFactory_get__quadratic(t_SmoothStepFactory *self, void *data);
        static PyObject *t_SmoothStepFactory_get__quintic(t_SmoothStepFactory *self, void *data);
        static PyGetSetDef t_SmoothStepFactory__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothStepFactory, clamp),
          DECLARE_GET_FIELD(t_SmoothStepFactory, cubic),
          DECLARE_GET_FIELD(t_SmoothStepFactory, quadratic),
          DECLARE_GET_FIELD(t_SmoothStepFactory, quintic),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothStepFactory__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, checkBetweenZeroAndOneIncluded, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getClamp, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getCubic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getFieldGeneralOrder, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getGeneralOrder, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getQuadratic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getQuintic, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory)[] = {
          { Py_tp_methods, t_SmoothStepFactory__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothStepFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory, t_SmoothStepFactory, SmoothStepFactory);

        void t_SmoothStepFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory), &PY_TYPE_DEF(SmoothStepFactory), module, "SmoothStepFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "FieldSmoothStepFunction", make_descriptor(&PY_TYPE_DEF(SmoothStepFactory$FieldSmoothStepFunction)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "QuadraticSmoothStepFunction", make_descriptor(&PY_TYPE_DEF(SmoothStepFactory$QuadraticSmoothStepFunction)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "SmoothStepFunction", make_descriptor(&PY_TYPE_DEF(SmoothStepFactory$SmoothStepFunction)));
        }

        void t_SmoothStepFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "class_", make_descriptor(SmoothStepFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "wrapfn_", make_descriptor(t_SmoothStepFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory::wrap_Object(SmoothStepFactory(((t_SmoothStepFactory *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory_checkBetweenZeroAndOneIncluded(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(::org::hipparchus::analysis::polynomials::SmoothStepFactory::checkBetweenZeroAndOneIncluded(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkBetweenZeroAndOneIncluded", arg);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getClamp(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getClamp());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getClamp(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getClamp", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getCubic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getCubic());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getCubic(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getCubic", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getFieldGeneralOrder(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getFieldGeneralOrder(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getFieldGeneralOrder", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getGeneralOrder(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getGeneralOrder(a0));
            return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getGeneralOrder", arg);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getQuadratic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuadratic());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuadratic(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getQuadratic", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getQuintic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuintic());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuintic(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getQuintic", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_get__clamp(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getClamp());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }

        static PyObject *t_SmoothStepFactory_get__cubic(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getCubic());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }

        static PyObject *t_SmoothStepFactory_get__quadratic(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getQuadratic());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }

        static PyObject *t_SmoothStepFactory_get__quintic(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getQuintic());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguitySolver.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AmbiguitySolver::class$ = NULL;
          jmethodID *AmbiguitySolver::mids$ = NULL;
          bool AmbiguitySolver::live$ = false;

          jclass AmbiguitySolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AmbiguitySolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_68a72f96fcfe346b] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver;Lorg/orekit/estimation/measurements/gnss/AmbiguityAcceptance;)V");
              mids$[mid_fixIntegerAmbiguities_3ea5886b8e7d0ac2] = env->getMethodID(cls, "fixIntegerAmbiguities", "(ILjava/util/List;Lorg/hipparchus/linear/RealMatrix;)Ljava/util/List;");
              mids$[mid_getAllAmbiguityDrivers_a6156df500549a58] = env->getMethodID(cls, "getAllAmbiguityDrivers", "()Ljava/util/List;");
              mids$[mid_unFixAmbiguity_a4c33e1e91b3ca8e] = env->getMethodID(cls, "unFixAmbiguity", "(Lorg/orekit/utils/ParameterDriver;)V");
              mids$[mid_getFreeAmbiguityDrivers_a6156df500549a58] = env->getMethodID(cls, "getFreeAmbiguityDrivers", "()Ljava/util/List;");
              mids$[mid_getFreeAmbiguityIndirection_191b31fcac2e6cf7] = env->getMethodID(cls, "getFreeAmbiguityIndirection", "(ILjava/util/List;)[I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AmbiguitySolver::AmbiguitySolver(const ::java::util::List & a0, const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver & a1, const ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_68a72f96fcfe346b, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List AmbiguitySolver::fixIntegerAmbiguities(jint a0, const ::java::util::List & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_fixIntegerAmbiguities_3ea5886b8e7d0ac2], a0, a1.this$, a2.this$));
          }

          ::java::util::List AmbiguitySolver::getAllAmbiguityDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllAmbiguityDrivers_a6156df500549a58]));
          }

          void AmbiguitySolver::unFixAmbiguity(const ::org::orekit::utils::ParameterDriver & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_unFixAmbiguity_a4c33e1e91b3ca8e], a0.this$);
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
        namespace gnss {
          static PyObject *t_AmbiguitySolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguitySolver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AmbiguitySolver_init_(t_AmbiguitySolver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AmbiguitySolver_fixIntegerAmbiguities(t_AmbiguitySolver *self, PyObject *args);
          static PyObject *t_AmbiguitySolver_getAllAmbiguityDrivers(t_AmbiguitySolver *self);
          static PyObject *t_AmbiguitySolver_unFixAmbiguity(t_AmbiguitySolver *self, PyObject *arg);
          static PyObject *t_AmbiguitySolver_get__allAmbiguityDrivers(t_AmbiguitySolver *self, void *data);
          static PyGetSetDef t_AmbiguitySolver__fields_[] = {
            DECLARE_GET_FIELD(t_AmbiguitySolver, allAmbiguityDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AmbiguitySolver__methods_[] = {
            DECLARE_METHOD(t_AmbiguitySolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguitySolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguitySolver, fixIntegerAmbiguities, METH_VARARGS),
            DECLARE_METHOD(t_AmbiguitySolver, getAllAmbiguityDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AmbiguitySolver, unFixAmbiguity, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AmbiguitySolver)[] = {
            { Py_tp_methods, t_AmbiguitySolver__methods_ },
            { Py_tp_init, (void *) t_AmbiguitySolver_init_ },
            { Py_tp_getset, t_AmbiguitySolver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AmbiguitySolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AmbiguitySolver, t_AmbiguitySolver, AmbiguitySolver);

          void t_AmbiguitySolver::install(PyObject *module)
          {
            installType(&PY_TYPE(AmbiguitySolver), &PY_TYPE_DEF(AmbiguitySolver), module, "AmbiguitySolver", 0);
          }

          void t_AmbiguitySolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "class_", make_descriptor(AmbiguitySolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "wrapfn_", make_descriptor(t_AmbiguitySolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AmbiguitySolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AmbiguitySolver::initializeClass, 1)))
              return NULL;
            return t_AmbiguitySolver::wrap_Object(AmbiguitySolver(((t_AmbiguitySolver *) arg)->object.this$));
          }
          static PyObject *t_AmbiguitySolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AmbiguitySolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AmbiguitySolver_init_(t_AmbiguitySolver *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver a1((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance a2((jobject) NULL);
            AmbiguitySolver object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::java::util::List::initializeClass, ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver::initializeClass, ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
            {
              INT_CALL(object = AmbiguitySolver(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AmbiguitySolver_fixIntegerAmbiguities(t_AmbiguitySolver *self, PyObject *args)
          {
            jint a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::java::util::List::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.fixIntegerAmbiguities(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            PyErr_SetArgsError((PyObject *) self, "fixIntegerAmbiguities", args);
            return NULL;
          }

          static PyObject *t_AmbiguitySolver_getAllAmbiguityDrivers(t_AmbiguitySolver *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getAllAmbiguityDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AmbiguitySolver_unFixAmbiguity(t_AmbiguitySolver *self, PyObject *arg)
          {
            ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
            {
              OBJ_CALL(self->object.unFixAmbiguity(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "unFixAmbiguity", arg);
            return NULL;
          }

          static PyObject *t_AmbiguitySolver_get__allAmbiguityDrivers(t_AmbiguitySolver *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getAllAmbiguityDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmTle::class$ = NULL;
              jmethodID *OmmTle::mids$ = NULL;
              bool OmmTle::live$ = false;
              jint OmmTle::EPHEMERIS_TYPE_PPT3 = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP4 = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP4_XP = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS = (jint) 0;

              jclass OmmTle::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmTle");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAGoM_456d9a2f64d6b28d] = env->getMethodID(cls, "getAGoM", "()D");
                  mids$[mid_getBStar_456d9a2f64d6b28d] = env->getMethodID(cls, "getBStar", "()D");
                  mids$[mid_getBTerm_456d9a2f64d6b28d] = env->getMethodID(cls, "getBTerm", "()D");
                  mids$[mid_getClassificationType_29e026b9d068f1c7] = env->getMethodID(cls, "getClassificationType", "()C");
                  mids$[mid_getElementSetNumber_f2f64475e4580546] = env->getMethodID(cls, "getElementSetNumber", "()I");
                  mids$[mid_getEphemerisType_f2f64475e4580546] = env->getMethodID(cls, "getEphemerisType", "()I");
                  mids$[mid_getMeanMotionDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotionDot", "()D");
                  mids$[mid_getMeanMotionDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotionDotDot", "()D");
                  mids$[mid_getNoradID_f2f64475e4580546] = env->getMethodID(cls, "getNoradID", "()I");
                  mids$[mid_getRevAtEpoch_f2f64475e4580546] = env->getMethodID(cls, "getRevAtEpoch", "()I");
                  mids$[mid_setAGoM_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAGoM", "(D)V");
                  mids$[mid_setBStar_77e0f9a1f260e2e5] = env->getMethodID(cls, "setBStar", "(D)V");
                  mids$[mid_setBTerm_77e0f9a1f260e2e5] = env->getMethodID(cls, "setBTerm", "(D)V");
                  mids$[mid_setClassificationType_be0046d7f7239695] = env->getMethodID(cls, "setClassificationType", "(C)V");
                  mids$[mid_setElementSetNo_0a2a1ac2721c0336] = env->getMethodID(cls, "setElementSetNo", "(I)V");
                  mids$[mid_setEphemerisType_0a2a1ac2721c0336] = env->getMethodID(cls, "setEphemerisType", "(I)V");
                  mids$[mid_setMeanMotionDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMeanMotionDot", "(D)V");
                  mids$[mid_setMeanMotionDotDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMeanMotionDotDot", "(D)V");
                  mids$[mid_setNoradID_0a2a1ac2721c0336] = env->getMethodID(cls, "setNoradID", "(I)V");
                  mids$[mid_setRevAtEpoch_0a2a1ac2721c0336] = env->getMethodID(cls, "setRevAtEpoch", "(I)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  EPHEMERIS_TYPE_PPT3 = env->getStaticIntField(cls, "EPHEMERIS_TYPE_PPT3");
                  EPHEMERIS_TYPE_SGP = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP");
                  EPHEMERIS_TYPE_SGP4 = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP4");
                  EPHEMERIS_TYPE_SGP4_XP = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP4_XP");
                  EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmTle::OmmTle() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jdouble OmmTle::getAGoM() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAGoM_456d9a2f64d6b28d]);
              }

              jdouble OmmTle::getBStar() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBStar_456d9a2f64d6b28d]);
              }

              jdouble OmmTle::getBTerm() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBTerm_456d9a2f64d6b28d]);
              }

              jchar OmmTle::getClassificationType() const
              {
                return env->callCharMethod(this$, mids$[mid_getClassificationType_29e026b9d068f1c7]);
              }

              jint OmmTle::getElementSetNumber() const
              {
                return env->callIntMethod(this$, mids$[mid_getElementSetNumber_f2f64475e4580546]);
              }

              jint OmmTle::getEphemerisType() const
              {
                return env->callIntMethod(this$, mids$[mid_getEphemerisType_f2f64475e4580546]);
              }

              jdouble OmmTle::getMeanMotionDot() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMeanMotionDot_456d9a2f64d6b28d]);
              }

              jdouble OmmTle::getMeanMotionDotDot() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMeanMotionDotDot_456d9a2f64d6b28d]);
              }

              jint OmmTle::getNoradID() const
              {
                return env->callIntMethod(this$, mids$[mid_getNoradID_f2f64475e4580546]);
              }

              jint OmmTle::getRevAtEpoch() const
              {
                return env->callIntMethod(this$, mids$[mid_getRevAtEpoch_f2f64475e4580546]);
              }

              void OmmTle::setAGoM(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAGoM_77e0f9a1f260e2e5], a0);
              }

              void OmmTle::setBStar(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBStar_77e0f9a1f260e2e5], a0);
              }

              void OmmTle::setBTerm(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBTerm_77e0f9a1f260e2e5], a0);
              }

              void OmmTle::setClassificationType(jchar a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClassificationType_be0046d7f7239695], a0);
              }

              void OmmTle::setElementSetNo(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setElementSetNo_0a2a1ac2721c0336], a0);
              }

              void OmmTle::setEphemerisType(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEphemerisType_0a2a1ac2721c0336], a0);
              }

              void OmmTle::setMeanMotionDot(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanMotionDot_77e0f9a1f260e2e5], a0);
              }

              void OmmTle::setMeanMotionDotDot(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanMotionDotDot_77e0f9a1f260e2e5], a0);
              }

              void OmmTle::setNoradID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNoradID_0a2a1ac2721c0336], a0);
              }

              void OmmTle::setRevAtEpoch(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRevAtEpoch_0a2a1ac2721c0336], a0);
              }

              void OmmTle::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_OmmTle_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmTle_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmTle_init_(t_OmmTle *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmTle_getAGoM(t_OmmTle *self);
              static PyObject *t_OmmTle_getBStar(t_OmmTle *self);
              static PyObject *t_OmmTle_getBTerm(t_OmmTle *self);
              static PyObject *t_OmmTle_getClassificationType(t_OmmTle *self);
              static PyObject *t_OmmTle_getElementSetNumber(t_OmmTle *self);
              static PyObject *t_OmmTle_getEphemerisType(t_OmmTle *self);
              static PyObject *t_OmmTle_getMeanMotionDot(t_OmmTle *self);
              static PyObject *t_OmmTle_getMeanMotionDotDot(t_OmmTle *self);
              static PyObject *t_OmmTle_getNoradID(t_OmmTle *self);
              static PyObject *t_OmmTle_getRevAtEpoch(t_OmmTle *self);
              static PyObject *t_OmmTle_setAGoM(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setBStar(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setBTerm(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setClassificationType(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setElementSetNo(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setEphemerisType(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setMeanMotionDot(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setMeanMotionDotDot(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setNoradID(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setRevAtEpoch(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_validate(t_OmmTle *self, PyObject *args);
              static PyObject *t_OmmTle_get__aGoM(t_OmmTle *self, void *data);
              static int t_OmmTle_set__aGoM(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__bStar(t_OmmTle *self, void *data);
              static int t_OmmTle_set__bStar(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__bTerm(t_OmmTle *self, void *data);
              static int t_OmmTle_set__bTerm(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__classificationType(t_OmmTle *self, void *data);
              static int t_OmmTle_set__classificationType(t_OmmTle *self, PyObject *arg, void *data);
              static int t_OmmTle_set__elementSetNo(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__elementSetNumber(t_OmmTle *self, void *data);
              static PyObject *t_OmmTle_get__ephemerisType(t_OmmTle *self, void *data);
              static int t_OmmTle_set__ephemerisType(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__meanMotionDot(t_OmmTle *self, void *data);
              static int t_OmmTle_set__meanMotionDot(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__meanMotionDotDot(t_OmmTle *self, void *data);
              static int t_OmmTle_set__meanMotionDotDot(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__noradID(t_OmmTle *self, void *data);
              static int t_OmmTle_set__noradID(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__revAtEpoch(t_OmmTle *self, void *data);
              static int t_OmmTle_set__revAtEpoch(t_OmmTle *self, PyObject *arg, void *data);
              static PyGetSetDef t_OmmTle__fields_[] = {
                DECLARE_GETSET_FIELD(t_OmmTle, aGoM),
                DECLARE_GETSET_FIELD(t_OmmTle, bStar),
                DECLARE_GETSET_FIELD(t_OmmTle, bTerm),
                DECLARE_GETSET_FIELD(t_OmmTle, classificationType),
                DECLARE_SET_FIELD(t_OmmTle, elementSetNo),
                DECLARE_GET_FIELD(t_OmmTle, elementSetNumber),
                DECLARE_GETSET_FIELD(t_OmmTle, ephemerisType),
                DECLARE_GETSET_FIELD(t_OmmTle, meanMotionDot),
                DECLARE_GETSET_FIELD(t_OmmTle, meanMotionDotDot),
                DECLARE_GETSET_FIELD(t_OmmTle, noradID),
                DECLARE_GETSET_FIELD(t_OmmTle, revAtEpoch),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmTle__methods_[] = {
                DECLARE_METHOD(t_OmmTle, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTle, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTle, getAGoM, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getBStar, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getBTerm, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getClassificationType, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getElementSetNumber, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getEphemerisType, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getMeanMotionDot, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getMeanMotionDotDot, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getNoradID, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getRevAtEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, setAGoM, METH_O),
                DECLARE_METHOD(t_OmmTle, setBStar, METH_O),
                DECLARE_METHOD(t_OmmTle, setBTerm, METH_O),
                DECLARE_METHOD(t_OmmTle, setClassificationType, METH_O),
                DECLARE_METHOD(t_OmmTle, setElementSetNo, METH_O),
                DECLARE_METHOD(t_OmmTle, setEphemerisType, METH_O),
                DECLARE_METHOD(t_OmmTle, setMeanMotionDot, METH_O),
                DECLARE_METHOD(t_OmmTle, setMeanMotionDotDot, METH_O),
                DECLARE_METHOD(t_OmmTle, setNoradID, METH_O),
                DECLARE_METHOD(t_OmmTle, setRevAtEpoch, METH_O),
                DECLARE_METHOD(t_OmmTle, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmTle)[] = {
                { Py_tp_methods, t_OmmTle__methods_ },
                { Py_tp_init, (void *) t_OmmTle_init_ },
                { Py_tp_getset, t_OmmTle__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmTle)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OmmTle, t_OmmTle, OmmTle);

              void t_OmmTle::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmTle), &PY_TYPE_DEF(OmmTle), module, "OmmTle", 0);
              }

              void t_OmmTle::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "class_", make_descriptor(OmmTle::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "wrapfn_", make_descriptor(t_OmmTle::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmTle::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_PPT3", make_descriptor(OmmTle::EPHEMERIS_TYPE_PPT3));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP4", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP4));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP4_XP", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP4_XP));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS", make_descriptor(OmmTle::EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS));
              }

              static PyObject *t_OmmTle_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmTle::initializeClass, 1)))
                  return NULL;
                return t_OmmTle::wrap_Object(OmmTle(((t_OmmTle *) arg)->object.this$));
              }
              static PyObject *t_OmmTle_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmTle::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmTle_init_(t_OmmTle *self, PyObject *args, PyObject *kwds)
              {
                OmmTle object((jobject) NULL);

                INT_CALL(object = OmmTle());
                self->object = object;

                return 0;
              }

              static PyObject *t_OmmTle_getAGoM(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAGoM());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getBStar(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBStar());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getBTerm(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBTerm());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getClassificationType(t_OmmTle *self)
              {
                jchar result;
                OBJ_CALL(result = self->object.getClassificationType());
                return c2p(result);
              }

              static PyObject *t_OmmTle_getElementSetNumber(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getElementSetNumber());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getEphemerisType(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getEphemerisType());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getMeanMotionDot(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMeanMotionDot());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getMeanMotionDotDot(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMeanMotionDotDot());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getNoradID(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNoradID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getRevAtEpoch(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getRevAtEpoch());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_setAGoM(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAGoM(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAGoM", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setBStar(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBStar(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBStar", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setBTerm(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBTerm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBTerm", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setClassificationType(t_OmmTle *self, PyObject *arg)
              {
                jchar a0;

                if (!parseArg(arg, "C", &a0))
                {
                  OBJ_CALL(self->object.setClassificationType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClassificationType", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setElementSetNo(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setElementSetNo(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setElementSetNo", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setEphemerisType(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setEphemerisType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEphemerisType", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setMeanMotionDot(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMeanMotionDot(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanMotionDot", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setMeanMotionDotDot(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMeanMotionDotDot(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanMotionDotDot", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setNoradID(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNoradID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNoradID", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setRevAtEpoch(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setRevAtEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRevAtEpoch", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_validate(t_OmmTle *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OmmTle), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OmmTle_get__aGoM(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAGoM());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__aGoM(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAGoM(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "aGoM", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__bStar(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBStar());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__bStar(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBStar(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bStar", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__bTerm(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBTerm());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__bTerm(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBTerm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bTerm", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__classificationType(t_OmmTle *self, void *data)
              {
                jchar value;
                OBJ_CALL(value = self->object.getClassificationType());
                return c2p(value);
              }
              static int t_OmmTle_set__classificationType(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jchar value;
                  if (!parseArg(arg, "C", &value))
                  {
                    INT_CALL(self->object.setClassificationType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "classificationType", arg);
                return -1;
              }

              static int t_OmmTle_set__elementSetNo(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setElementSetNo(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "elementSetNo", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__elementSetNumber(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getElementSetNumber());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OmmTle_get__ephemerisType(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getEphemerisType());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__ephemerisType(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setEphemerisType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ephemerisType", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__meanMotionDot(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMeanMotionDot());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__meanMotionDot(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMeanMotionDot(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanMotionDot", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__meanMotionDotDot(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMeanMotionDotDot());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__meanMotionDotDot(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMeanMotionDotDot(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanMotionDotDot", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__noradID(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNoradID());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__noradID(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNoradID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "noradID", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__revAtEpoch(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getRevAtEpoch());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__revAtEpoch(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setRevAtEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "revAtEpoch", arg);
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
#include "org/hipparchus/util/OpenIntToDoubleHashMap.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/OpenIntToDoubleHashMap$Iterator.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToDoubleHashMap::class$ = NULL;
      jmethodID *OpenIntToDoubleHashMap::mids$ = NULL;
      bool OpenIntToDoubleHashMap::live$ = false;

      jclass OpenIntToDoubleHashMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToDoubleHashMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_containsKey_e95e4c7cd3dd17ff] = env->getMethodID(cls, "containsKey", "(I)Z");
          mids$[mid_get_b772323fc98b7293] = env->getMethodID(cls, "get", "(I)D");
          mids$[mid_iterator_fa62dce97d6cc56a] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/OpenIntToDoubleHashMap$Iterator;");
          mids$[mid_put_31332242d1624d2c] = env->getMethodID(cls, "put", "(ID)D");
          mids$[mid_remove_b772323fc98b7293] = env->getMethodID(cls, "remove", "(I)D");
          mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

      jboolean OpenIntToDoubleHashMap::containsKey(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_containsKey_e95e4c7cd3dd17ff], a0);
      }

      jdouble OpenIntToDoubleHashMap::get$(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_get_b772323fc98b7293], a0);
      }

      ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator OpenIntToDoubleHashMap::iterator() const
      {
        return ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fa62dce97d6cc56a]));
      }

      jdouble OpenIntToDoubleHashMap::put(jint a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_put_31332242d1624d2c], a0, a1);
      }

      jdouble OpenIntToDoubleHashMap::remove(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_remove_b772323fc98b7293], a0);
      }

      jint OpenIntToDoubleHashMap::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_OpenIntToDoubleHashMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OpenIntToDoubleHashMap_init_(t_OpenIntToDoubleHashMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenIntToDoubleHashMap_containsKey(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_get(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_iterator(t_OpenIntToDoubleHashMap *self);
      static PyObject *t_OpenIntToDoubleHashMap_put(t_OpenIntToDoubleHashMap *self, PyObject *args);
      static PyObject *t_OpenIntToDoubleHashMap_remove(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_size(t_OpenIntToDoubleHashMap *self);

      static PyMethodDef t_OpenIntToDoubleHashMap__methods_[] = {
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, containsKey, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, get, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, iterator, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, put, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, remove, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, size, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToDoubleHashMap)[] = {
        { Py_tp_methods, t_OpenIntToDoubleHashMap__methods_ },
        { Py_tp_init, (void *) t_OpenIntToDoubleHashMap_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToDoubleHashMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToDoubleHashMap, t_OpenIntToDoubleHashMap, OpenIntToDoubleHashMap);

      void t_OpenIntToDoubleHashMap::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToDoubleHashMap), &PY_TYPE_DEF(OpenIntToDoubleHashMap), module, "OpenIntToDoubleHashMap", 0);
      }

      void t_OpenIntToDoubleHashMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "class_", make_descriptor(OpenIntToDoubleHashMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "wrapfn_", make_descriptor(t_OpenIntToDoubleHashMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToDoubleHashMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToDoubleHashMap::initializeClass, 1)))
          return NULL;
        return t_OpenIntToDoubleHashMap::wrap_Object(OpenIntToDoubleHashMap(((t_OpenIntToDoubleHashMap *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToDoubleHashMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToDoubleHashMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OpenIntToDoubleHashMap_init_(t_OpenIntToDoubleHashMap *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OpenIntToDoubleHashMap object((jobject) NULL);

            INT_CALL(object = OpenIntToDoubleHashMap());
            self->object = object;
            break;
          }
         case 1:
          {
            jdouble a0;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0, a1));
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

      static PyObject *t_OpenIntToDoubleHashMap_containsKey(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.containsKey(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_get(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_iterator(t_OpenIntToDoubleHashMap *self)
      {
        ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_OpenIntToDoubleHashMap$Iterator::wrap_Object(result);
      }

      static PyObject *t_OpenIntToDoubleHashMap_put(t_OpenIntToDoubleHashMap *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.put(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_remove(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_size(t_OpenIntToDoubleHashMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/util/Locale.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/util/Currency.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *DecimalFormatSymbols::class$ = NULL;
    jmethodID *DecimalFormatSymbols::mids$ = NULL;
    bool DecimalFormatSymbols::live$ = false;

    jclass DecimalFormatSymbols::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/DecimalFormatSymbols");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_9ea720baeb257525] = env->getMethodID(cls, "<init>", "(Ljava/util/Locale;)V");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAvailableLocales_81e8fdf65840780c] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCurrency_6c7b9765863c0754] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getCurrencySymbol_0090f7797e403f43] = env->getMethodID(cls, "getCurrencySymbol", "()Ljava/lang/String;");
        mids$[mid_getDecimalSeparator_29e026b9d068f1c7] = env->getMethodID(cls, "getDecimalSeparator", "()C");
        mids$[mid_getDigit_29e026b9d068f1c7] = env->getMethodID(cls, "getDigit", "()C");
        mids$[mid_getExponentSeparator_0090f7797e403f43] = env->getMethodID(cls, "getExponentSeparator", "()Ljava/lang/String;");
        mids$[mid_getGroupingSeparator_29e026b9d068f1c7] = env->getMethodID(cls, "getGroupingSeparator", "()C");
        mids$[mid_getInfinity_0090f7797e403f43] = env->getMethodID(cls, "getInfinity", "()Ljava/lang/String;");
        mids$[mid_getInstance_176868871448551c] = env->getStaticMethodID(cls, "getInstance", "()Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getInstance_a565ebfb055c5f39] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getInternationalCurrencySymbol_0090f7797e403f43] = env->getMethodID(cls, "getInternationalCurrencySymbol", "()Ljava/lang/String;");
        mids$[mid_getMinusSign_29e026b9d068f1c7] = env->getMethodID(cls, "getMinusSign", "()C");
        mids$[mid_getMonetaryDecimalSeparator_29e026b9d068f1c7] = env->getMethodID(cls, "getMonetaryDecimalSeparator", "()C");
        mids$[mid_getNaN_0090f7797e403f43] = env->getMethodID(cls, "getNaN", "()Ljava/lang/String;");
        mids$[mid_getPatternSeparator_29e026b9d068f1c7] = env->getMethodID(cls, "getPatternSeparator", "()C");
        mids$[mid_getPerMill_29e026b9d068f1c7] = env->getMethodID(cls, "getPerMill", "()C");
        mids$[mid_getPercent_29e026b9d068f1c7] = env->getMethodID(cls, "getPercent", "()C");
        mids$[mid_getZeroDigit_29e026b9d068f1c7] = env->getMethodID(cls, "getZeroDigit", "()C");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setCurrency_4f90b9143eba41de] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setCurrencySymbol_e939c6558ae8d313] = env->getMethodID(cls, "setCurrencySymbol", "(Ljava/lang/String;)V");
        mids$[mid_setDecimalSeparator_be0046d7f7239695] = env->getMethodID(cls, "setDecimalSeparator", "(C)V");
        mids$[mid_setDigit_be0046d7f7239695] = env->getMethodID(cls, "setDigit", "(C)V");
        mids$[mid_setExponentSeparator_e939c6558ae8d313] = env->getMethodID(cls, "setExponentSeparator", "(Ljava/lang/String;)V");
        mids$[mid_setGroupingSeparator_be0046d7f7239695] = env->getMethodID(cls, "setGroupingSeparator", "(C)V");
        mids$[mid_setInfinity_e939c6558ae8d313] = env->getMethodID(cls, "setInfinity", "(Ljava/lang/String;)V");
        mids$[mid_setInternationalCurrencySymbol_e939c6558ae8d313] = env->getMethodID(cls, "setInternationalCurrencySymbol", "(Ljava/lang/String;)V");
        mids$[mid_setMinusSign_be0046d7f7239695] = env->getMethodID(cls, "setMinusSign", "(C)V");
        mids$[mid_setMonetaryDecimalSeparator_be0046d7f7239695] = env->getMethodID(cls, "setMonetaryDecimalSeparator", "(C)V");
        mids$[mid_setNaN_e939c6558ae8d313] = env->getMethodID(cls, "setNaN", "(Ljava/lang/String;)V");
        mids$[mid_setPatternSeparator_be0046d7f7239695] = env->getMethodID(cls, "setPatternSeparator", "(C)V");
        mids$[mid_setPerMill_be0046d7f7239695] = env->getMethodID(cls, "setPerMill", "(C)V");
        mids$[mid_setPercent_be0046d7f7239695] = env->getMethodID(cls, "setPercent", "(C)V");
        mids$[mid_setZeroDigit_be0046d7f7239695] = env->getMethodID(cls, "setZeroDigit", "(C)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DecimalFormatSymbols::DecimalFormatSymbols() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    DecimalFormatSymbols::DecimalFormatSymbols(const ::java::util::Locale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9ea720baeb257525, a0.this$)) {}

    ::java::lang::Object DecimalFormatSymbols::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    jboolean DecimalFormatSymbols::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    JArray< ::java::util::Locale > DecimalFormatSymbols::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_81e8fdf65840780c]));
    }

    ::java::util::Currency DecimalFormatSymbols::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_6c7b9765863c0754]));
    }

    ::java::lang::String DecimalFormatSymbols::getCurrencySymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCurrencySymbol_0090f7797e403f43]));
    }

    jchar DecimalFormatSymbols::getDecimalSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getDecimalSeparator_29e026b9d068f1c7]);
    }

    jchar DecimalFormatSymbols::getDigit() const
    {
      return env->callCharMethod(this$, mids$[mid_getDigit_29e026b9d068f1c7]);
    }

    ::java::lang::String DecimalFormatSymbols::getExponentSeparator() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExponentSeparator_0090f7797e403f43]));
    }

    jchar DecimalFormatSymbols::getGroupingSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getGroupingSeparator_29e026b9d068f1c7]);
    }

    ::java::lang::String DecimalFormatSymbols::getInfinity() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInfinity_0090f7797e403f43]));
    }

    DecimalFormatSymbols DecimalFormatSymbols::getInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return DecimalFormatSymbols(env->callStaticObjectMethod(cls, mids$[mid_getInstance_176868871448551c]));
    }

    DecimalFormatSymbols DecimalFormatSymbols::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return DecimalFormatSymbols(env->callStaticObjectMethod(cls, mids$[mid_getInstance_a565ebfb055c5f39], a0.this$));
    }

    ::java::lang::String DecimalFormatSymbols::getInternationalCurrencySymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalCurrencySymbol_0090f7797e403f43]));
    }

    jchar DecimalFormatSymbols::getMinusSign() const
    {
      return env->callCharMethod(this$, mids$[mid_getMinusSign_29e026b9d068f1c7]);
    }

    jchar DecimalFormatSymbols::getMonetaryDecimalSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getMonetaryDecimalSeparator_29e026b9d068f1c7]);
    }

    ::java::lang::String DecimalFormatSymbols::getNaN() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNaN_0090f7797e403f43]));
    }

    jchar DecimalFormatSymbols::getPatternSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getPatternSeparator_29e026b9d068f1c7]);
    }

    jchar DecimalFormatSymbols::getPerMill() const
    {
      return env->callCharMethod(this$, mids$[mid_getPerMill_29e026b9d068f1c7]);
    }

    jchar DecimalFormatSymbols::getPercent() const
    {
      return env->callCharMethod(this$, mids$[mid_getPercent_29e026b9d068f1c7]);
    }

    jchar DecimalFormatSymbols::getZeroDigit() const
    {
      return env->callCharMethod(this$, mids$[mid_getZeroDigit_29e026b9d068f1c7]);
    }

    jint DecimalFormatSymbols::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    void DecimalFormatSymbols::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_4f90b9143eba41de], a0.this$);
    }

    void DecimalFormatSymbols::setCurrencySymbol(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrencySymbol_e939c6558ae8d313], a0.this$);
    }

    void DecimalFormatSymbols::setDecimalSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalSeparator_be0046d7f7239695], a0);
    }

    void DecimalFormatSymbols::setDigit(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDigit_be0046d7f7239695], a0);
    }

    void DecimalFormatSymbols::setExponentSeparator(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setExponentSeparator_e939c6558ae8d313], a0.this$);
    }

    void DecimalFormatSymbols::setGroupingSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingSeparator_be0046d7f7239695], a0);
    }

    void DecimalFormatSymbols::setInfinity(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setInfinity_e939c6558ae8d313], a0.this$);
    }

    void DecimalFormatSymbols::setInternationalCurrencySymbol(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setInternationalCurrencySymbol_e939c6558ae8d313], a0.this$);
    }

    void DecimalFormatSymbols::setMinusSign(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinusSign_be0046d7f7239695], a0);
    }

    void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMonetaryDecimalSeparator_be0046d7f7239695], a0);
    }

    void DecimalFormatSymbols::setNaN(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNaN_e939c6558ae8d313], a0.this$);
    }

    void DecimalFormatSymbols::setPatternSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPatternSeparator_be0046d7f7239695], a0);
    }

    void DecimalFormatSymbols::setPerMill(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPerMill_be0046d7f7239695], a0);
    }

    void DecimalFormatSymbols::setPercent(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPercent_be0046d7f7239695], a0);
    }

    void DecimalFormatSymbols::setZeroDigit(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setZeroDigit_be0046d7f7239695], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_DecimalFormatSymbols_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DecimalFormatSymbols_init_(t_DecimalFormatSymbols *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DecimalFormatSymbols_clone(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_equals(t_DecimalFormatSymbols *self, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_DecimalFormatSymbols_getCurrency(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getCurrencySymbol(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getDecimalSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getDigit(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getExponentSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getGroupingSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getInfinity(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_getInternationalCurrencySymbol(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getMinusSign(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getMonetaryDecimalSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getNaN(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPatternSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPerMill(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPercent(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getZeroDigit(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_hashCode(t_DecimalFormatSymbols *self, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_setCurrency(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setDigit(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setExponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setGroupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setInfinity(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setInternationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setMinusSign(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setMonetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setNaN(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPatternSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPerMill(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPercent(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setZeroDigit(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_get__availableLocales(t_DecimalFormatSymbols *self, void *data);
    static PyObject *t_DecimalFormatSymbols_get__currency(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__currency(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__currencySymbol(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__currencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__decimalSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__decimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__digit(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__digit(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__exponentSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__exponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__groupingSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__groupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__infinity(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__infinity(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__instance(t_DecimalFormatSymbols *self, void *data);
    static PyObject *t_DecimalFormatSymbols_get__internationalCurrencySymbol(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__internationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__minusSign(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__minusSign(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__naN(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__naN(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__patternSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__patternSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__perMill(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__perMill(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__percent(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__percent(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__zeroDigit(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__zeroDigit(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyGetSetDef t_DecimalFormatSymbols__fields_[] = {
      DECLARE_GET_FIELD(t_DecimalFormatSymbols, availableLocales),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, currency),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, currencySymbol),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, decimalSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, digit),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, exponentSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, groupingSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, infinity),
      DECLARE_GET_FIELD(t_DecimalFormatSymbols, instance),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, internationalCurrencySymbol),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, minusSign),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, monetaryDecimalSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, naN),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, patternSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, perMill),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, percent),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, zeroDigit),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DecimalFormatSymbols__methods_[] = {
      DECLARE_METHOD(t_DecimalFormatSymbols, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, clone, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, equals, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getCurrency, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getCurrencySymbol, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getDecimalSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getDigit, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getExponentSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getGroupingSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInfinity, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInternationalCurrencySymbol, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getMinusSign, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getMonetaryDecimalSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getNaN, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPatternSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPerMill, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPercent, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getZeroDigit, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, setCurrency, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setCurrencySymbol, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setDecimalSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setDigit, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setExponentSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setGroupingSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setInfinity, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setInternationalCurrencySymbol, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setMinusSign, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setMonetaryDecimalSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setNaN, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPatternSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPerMill, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPercent, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setZeroDigit, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DecimalFormatSymbols)[] = {
      { Py_tp_methods, t_DecimalFormatSymbols__methods_ },
      { Py_tp_init, (void *) t_DecimalFormatSymbols_init_ },
      { Py_tp_getset, t_DecimalFormatSymbols__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DecimalFormatSymbols)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(DecimalFormatSymbols, t_DecimalFormatSymbols, DecimalFormatSymbols);

    void t_DecimalFormatSymbols::install(PyObject *module)
    {
      installType(&PY_TYPE(DecimalFormatSymbols), &PY_TYPE_DEF(DecimalFormatSymbols), module, "DecimalFormatSymbols", 0);
    }

    void t_DecimalFormatSymbols::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "class_", make_descriptor(DecimalFormatSymbols::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "wrapfn_", make_descriptor(t_DecimalFormatSymbols::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DecimalFormatSymbols_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DecimalFormatSymbols::initializeClass, 1)))
        return NULL;
      return t_DecimalFormatSymbols::wrap_Object(DecimalFormatSymbols(((t_DecimalFormatSymbols *) arg)->object.this$));
    }
    static PyObject *t_DecimalFormatSymbols_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DecimalFormatSymbols::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DecimalFormatSymbols_init_(t_DecimalFormatSymbols *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormatSymbols object((jobject) NULL);

          INT_CALL(object = DecimalFormatSymbols());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          DecimalFormatSymbols object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            INT_CALL(object = DecimalFormatSymbols(a0));
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

    static PyObject *t_DecimalFormatSymbols_clone(t_DecimalFormatSymbols *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_DecimalFormatSymbols_equals(t_DecimalFormatSymbols *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(DecimalFormatSymbols), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_DecimalFormatSymbols_getAvailableLocales(PyTypeObject *type)
    {
      JArray< ::java::util::Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_DecimalFormatSymbols_getCurrency(t_DecimalFormatSymbols *self)
    {
      ::java::util::Currency result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(result);
    }

    static PyObject *t_DecimalFormatSymbols_getCurrencySymbol(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrencySymbol());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getDecimalSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getDecimalSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getDigit(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getDigit());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getExponentSeparator(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getExponentSeparator());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getGroupingSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getGroupingSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getInfinity(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getInfinity());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormatSymbols result((jobject) NULL);
          OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getInstance());
          return t_DecimalFormatSymbols::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          DecimalFormatSymbols result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getInstance(a0));
            return t_DecimalFormatSymbols::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInstance", args);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_getInternationalCurrencySymbol(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getInternationalCurrencySymbol());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getMinusSign(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getMinusSign());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getMonetaryDecimalSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getMonetaryDecimalSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getNaN(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNaN());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPatternSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPatternSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPerMill(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPerMill());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPercent(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPercent());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getZeroDigit(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getZeroDigit());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_hashCode(t_DecimalFormatSymbols *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormatSymbols), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_DecimalFormatSymbols_setCurrency(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::util::Currency a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setCurrency(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCurrency", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setCurrencySymbol(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCurrencySymbol", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setDecimalSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setDigit(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setDigit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDigit", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setExponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setExponentSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setExponentSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setGroupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setGroupingSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setInfinity(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setInfinity(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setInfinity", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setInternationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setInternationalCurrencySymbol(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setInternationalCurrencySymbol", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setMinusSign(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setMinusSign(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinusSign", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setMonetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setMonetaryDecimalSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMonetaryDecimalSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setNaN(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNaN(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNaN", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPatternSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPatternSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPatternSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPerMill(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPerMill(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPerMill", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPercent(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPercent(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPercent", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setZeroDigit(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setZeroDigit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setZeroDigit", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_get__availableLocales(t_DecimalFormatSymbols *self, void *data)
    {
      JArray< ::java::util::Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_DecimalFormatSymbols_get__currency(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_DecimalFormatSymbols_set__currency(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Currency value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &value))
        {
          INT_CALL(self->object.setCurrency(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currency", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__currencySymbol(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrencySymbol());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__currencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setCurrencySymbol(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currencySymbol", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__decimalSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getDecimalSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__decimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setDecimalSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__digit(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getDigit());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__digit(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setDigit(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "digit", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__exponentSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getExponentSeparator());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__exponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setExponentSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "exponentSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__groupingSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getGroupingSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__groupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setGroupingSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__infinity(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getInfinity());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__infinity(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setInfinity(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "infinity", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__instance(t_DecimalFormatSymbols *self, void *data)
    {
      DecimalFormatSymbols value((jobject) NULL);
      OBJ_CALL(value = self->object.getInstance());
      return t_DecimalFormatSymbols::wrap_Object(value);
    }

    static PyObject *t_DecimalFormatSymbols_get__internationalCurrencySymbol(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getInternationalCurrencySymbol());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__internationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setInternationalCurrencySymbol(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "internationalCurrencySymbol", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__minusSign(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getMinusSign());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__minusSign(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setMinusSign(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minusSign", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getMonetaryDecimalSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setMonetaryDecimalSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "monetaryDecimalSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__naN(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNaN());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__naN(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNaN(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "naN", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__patternSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPatternSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__patternSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPatternSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "patternSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__perMill(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPerMill());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__perMill(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPerMill(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "perMill", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__percent(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPercent());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__percent(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPercent(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "percent", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__zeroDigit(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getZeroDigit());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__zeroDigit(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setZeroDigit(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "zeroDigit", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "java/util/Collection.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/util/Set.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *DSSTPropagator::class$ = NULL;
          jmethodID *DSSTPropagator::mids$ = NULL;
          bool DSSTPropagator::live$ = false;

          jclass DSSTPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/DSSTPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8b1272a4b400cfb6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
              mids$[mid_init$_fad51e50ea7e824a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_init$_906f931497b667f3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_addForceModel_868bb92ba9b91af7] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
              mids$[mid_computeMeanState_15ac77c6bb076e70] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_computeMeanState_c4ce6d1e9b683ba5] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;DI)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_computeOsculatingState_15ac77c6bb076e70] = env->getStaticMethodID(cls, "computeOsculatingState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_getAllForceModels_a6156df500549a58] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
              mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getSatelliteRevolution_f2f64475e4580546] = env->getMethodID(cls, "getSatelliteRevolution", "()I");
              mids$[mid_getSelectedCoefficients_e9e1a6780fe94297] = env->getMethodID(cls, "getSelectedCoefficients", "()Ljava/util/Set;");
              mids$[mid_getShortPeriodTerms_a6156df500549a58] = env->getMethodID(cls, "getShortPeriodTerms", "()Ljava/util/List;");
              mids$[mid_getShortPeriodTermsValue_137d7db4f3f987f7] = env->getMethodID(cls, "getShortPeriodTermsValue", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_initialIsOsculating_e470b6d9e0d979db] = env->getMethodID(cls, "initialIsOsculating", "()Z");
              mids$[mid_removeForceModels_7ae3461a92a43152] = env->getMethodID(cls, "removeForceModels", "()V");
              mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_setInitialState_2b88003f931f70a7] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setInitialState_dfbbbfbf78c55942] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_setInterpolationGridToFixedNumberOfPoints_0a2a1ac2721c0336] = env->getMethodID(cls, "setInterpolationGridToFixedNumberOfPoints", "(I)V");
              mids$[mid_setInterpolationGridToMaxTimeGap_77e0f9a1f260e2e5] = env->getMethodID(cls, "setInterpolationGridToMaxTimeGap", "(D)V");
              mids$[mid_setMu_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMu", "(D)V");
              mids$[mid_setSatelliteRevolution_0a2a1ac2721c0336] = env->getMethodID(cls, "setSatelliteRevolution", "(I)V");
              mids$[mid_setSelectedCoefficients_ef1b87702d7ae7b8] = env->getMethodID(cls, "setSelectedCoefficients", "(Ljava/util/Set;)V");
              mids$[mid_setShortPeriodTerms_65de9727799c5641] = env->getMethodID(cls, "setShortPeriodTerms", "(Ljava/util/List;)V");
              mids$[mid_tolerances_dd1e294a07f13ec6] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/orbits/Orbit;)[[D");
              mids$[mid_tolerances_250ab7016fb7249f] = env->getStaticMethodID(cls, "tolerances", "(DDLorg/orekit/orbits/Orbit;)[[D");
              mids$[mid_createHarvester_d3d4ea925a699046] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
              mids$[mid_getJacobiansColumnsNames_a6156df500549a58] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_setUpStmAndJacobianGenerators_7ae3461a92a43152] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");
              mids$[mid_beforeIntegration_3d13474d79f5e7bc] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_afterIntegration_7ae3461a92a43152] = env->getMethodID(cls, "afterIntegration", "()V");
              mids$[mid_getInitialIntegrationState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_createMapper_083e2bc1612e9def] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
              mids$[mid_getMainStateEquations_9c7da9606951e4f0] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_8b1272a4b400cfb6, a0.this$)) {}

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_fad51e50ea7e824a, a0.this$, a1.this$)) {}

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_906f931497b667f3, a0.this$, a1.this$, a2.this$)) {}

          void DSSTPropagator::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addForceModel_868bb92ba9b91af7], a0.this$);
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeMeanState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_15ac77c6bb076e70], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeMeanState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2, jdouble a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_c4ce6d1e9b683ba5], a0.this$, a1.this$, a2.this$, a3, a4));
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeOsculatingState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeOsculatingState_15ac77c6bb076e70], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List DSSTPropagator::getAllForceModels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_a6156df500549a58]));
          }

          ::org::orekit::orbits::OrbitType DSSTPropagator::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
          }

          ::org::orekit::orbits::PositionAngleType DSSTPropagator::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
          }

          jint DSSTPropagator::getSatelliteRevolution() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteRevolution_f2f64475e4580546]);
          }

          ::java::util::Set DSSTPropagator::getSelectedCoefficients() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSelectedCoefficients_e9e1a6780fe94297]));
          }

          ::java::util::List DSSTPropagator::getShortPeriodTerms() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getShortPeriodTerms_a6156df500549a58]));
          }

          JArray< jdouble > DSSTPropagator::getShortPeriodTermsValue(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getShortPeriodTermsValue_137d7db4f3f987f7], a0.this$));
          }

          jboolean DSSTPropagator::initialIsOsculating() const
          {
            return env->callBooleanMethod(this$, mids$[mid_initialIsOsculating_e470b6d9e0d979db]);
          }

          void DSSTPropagator::removeForceModels() const
          {
            env->callVoidMethod(this$, mids$[mid_removeForceModels_7ae3461a92a43152]);
          }

          void DSSTPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
          }

          void DSSTPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8109c1a27d4471d3], a0.this$);
          }

          void DSSTPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_2b88003f931f70a7], a0.this$);
          }

          void DSSTPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_dfbbbfbf78c55942], a0.this$, a1.this$);
          }

          void DSSTPropagator::setInterpolationGridToFixedNumberOfPoints(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToFixedNumberOfPoints_0a2a1ac2721c0336], a0);
          }

          void DSSTPropagator::setInterpolationGridToMaxTimeGap(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToMaxTimeGap_77e0f9a1f260e2e5], a0);
          }

          void DSSTPropagator::setMu(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMu_77e0f9a1f260e2e5], a0);
          }

          void DSSTPropagator::setSatelliteRevolution(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteRevolution_0a2a1ac2721c0336], a0);
          }

          void DSSTPropagator::setSelectedCoefficients(const ::java::util::Set & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSelectedCoefficients_ef1b87702d7ae7b8], a0.this$);
          }

          void DSSTPropagator::setShortPeriodTerms(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setShortPeriodTerms_65de9727799c5641], a0.this$);
          }

          JArray< JArray< jdouble > > DSSTPropagator::tolerances(jdouble a0, const ::org::orekit::orbits::Orbit & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_dd1e294a07f13ec6], a0, a1.this$));
          }

          JArray< JArray< jdouble > > DSSTPropagator::tolerances(jdouble a0, jdouble a1, const ::org::orekit::orbits::Orbit & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_250ab7016fb7249f], a0, a1, a2.this$));
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
          static PyObject *t_DSSTPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DSSTPropagator_init_(t_DSSTPropagator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DSSTPropagator_addForceModel(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args);
          static PyObject *t_DSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args);
          static PyObject *t_DSSTPropagator_getAllForceModels(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getOrbitType(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getPositionAngleType(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getSatelliteRevolution(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getSelectedCoefficients(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getShortPeriodTerms(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getShortPeriodTermsValue(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_initialIsOsculating(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_removeForceModels(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_resetInitialState(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setAttitudeProvider(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setInitialState(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setInterpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setMu(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setSatelliteRevolution(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setSelectedCoefficients(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setShortPeriodTerms(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_tolerances(PyTypeObject *type, PyObject *args);
          static PyObject *t_DSSTPropagator_get__allForceModels(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__attitudeProvider(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__initialState(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__interpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__mu(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_DSSTPropagator_get__orbitType(t_DSSTPropagator *self, void *data);
          static PyObject *t_DSSTPropagator_get__positionAngleType(t_DSSTPropagator *self, void *data);
          static PyObject *t_DSSTPropagator_get__satelliteRevolution(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__satelliteRevolution(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_DSSTPropagator_get__selectedCoefficients(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__selectedCoefficients(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_DSSTPropagator_get__shortPeriodTerms(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__shortPeriodTerms(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyGetSetDef t_DSSTPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_DSSTPropagator, allForceModels),
            DECLARE_SET_FIELD(t_DSSTPropagator, attitudeProvider),
            DECLARE_SET_FIELD(t_DSSTPropagator, initialState),
            DECLARE_SET_FIELD(t_DSSTPropagator, interpolationGridToFixedNumberOfPoints),
            DECLARE_SET_FIELD(t_DSSTPropagator, interpolationGridToMaxTimeGap),
            DECLARE_SET_FIELD(t_DSSTPropagator, mu),
            DECLARE_GET_FIELD(t_DSSTPropagator, orbitType),
            DECLARE_GET_FIELD(t_DSSTPropagator, positionAngleType),
            DECLARE_GETSET_FIELD(t_DSSTPropagator, satelliteRevolution),
            DECLARE_GETSET_FIELD(t_DSSTPropagator, selectedCoefficients),
            DECLARE_GETSET_FIELD(t_DSSTPropagator, shortPeriodTerms),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DSSTPropagator__methods_[] = {
            DECLARE_METHOD(t_DSSTPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, addForceModel, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, computeMeanState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, computeOsculatingState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, getAllForceModels, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getOrbitType, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getPositionAngleType, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getSatelliteRevolution, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getSelectedCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getShortPeriodTerms, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getShortPeriodTermsValue, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, initialIsOsculating, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, removeForceModels, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setAttitudeProvider, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setInitialState, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setInterpolationGridToFixedNumberOfPoints, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setInterpolationGridToMaxTimeGap, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setMu, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setSatelliteRevolution, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setSelectedCoefficients, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setShortPeriodTerms, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, tolerances, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DSSTPropagator)[] = {
            { Py_tp_methods, t_DSSTPropagator__methods_ },
            { Py_tp_init, (void *) t_DSSTPropagator_init_ },
            { Py_tp_getset, t_DSSTPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DSSTPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
            NULL
          };

          DEFINE_TYPE(DSSTPropagator, t_DSSTPropagator, DSSTPropagator);

          void t_DSSTPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(DSSTPropagator), &PY_TYPE_DEF(DSSTPropagator), module, "DSSTPropagator", 0);
          }

          void t_DSSTPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagator), "class_", make_descriptor(DSSTPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagator), "wrapfn_", make_descriptor(t_DSSTPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DSSTPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DSSTPropagator::initializeClass, 1)))
              return NULL;
            return t_DSSTPropagator::wrap_Object(DSSTPropagator(((t_DSSTPropagator *) arg)->object.this$));
          }
          static PyObject *t_DSSTPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DSSTPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DSSTPropagator_init_(t_DSSTPropagator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
                DSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &a0))
                {
                  INT_CALL(object = DSSTPropagator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;
                DSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  INT_CALL(object = DSSTPropagator(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
                DSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "kKk", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                {
                  INT_CALL(object = DSSTPropagator(a0, a1, a2));
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

          static PyObject *t_DSSTPropagator_addForceModel(t_DSSTPropagator *self, PyObject *arg)
          {
            ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addForceModel(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "kkK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::computeMeanState(a0, a1, a2));
                  return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                jdouble a3;
                jint a4;
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "kkKDI", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Collection::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::computeMeanState(a0, a1, a2, a3, a4));
                  return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "computeMeanState", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
            ::java::util::Collection a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::computeOsculatingState(a0, a1, a2));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "computeOsculatingState", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_getAllForceModels(t_DSSTPropagator *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(DSSTForceModel));
          }

          static PyObject *t_DSSTPropagator_getOrbitType(t_DSSTPropagator *self)
          {
            ::org::orekit::orbits::OrbitType result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
          }

          static PyObject *t_DSSTPropagator_getPositionAngleType(t_DSSTPropagator *self)
          {
            ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
            OBJ_CALL(result = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
          }

          static PyObject *t_DSSTPropagator_getSatelliteRevolution(t_DSSTPropagator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_DSSTPropagator_getSelectedCoefficients(t_DSSTPropagator *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_DSSTPropagator_getShortPeriodTerms(t_DSSTPropagator *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getShortPeriodTerms());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
          }

          static PyObject *t_DSSTPropagator_getShortPeriodTermsValue(t_DSSTPropagator *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getShortPeriodTermsValue(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getShortPeriodTermsValue", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_initialIsOsculating(t_DSSTPropagator *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.initialIsOsculating());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DSSTPropagator_removeForceModels(t_DSSTPropagator *self)
          {
            OBJ_CALL(self->object.removeForceModels());
            Py_RETURN_NONE;
          }

          static PyObject *t_DSSTPropagator_resetInitialState(t_DSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_DSSTPropagator_setAttitudeProvider(t_DSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAttitudeProvider(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
          }

          static PyObject *t_DSSTPropagator_setInitialState(t_DSSTPropagator *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setInitialState(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  OBJ_CALL(self->object.setInitialState(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "setInitialState", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setInterpolationGridToFixedNumberOfPoints(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToFixedNumberOfPoints", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setInterpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setInterpolationGridToMaxTimeGap(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToMaxTimeGap", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setMu(t_DSSTPropagator *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setMu(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTPropagator), (PyObject *) self, "setMu", args, 2);
          }

          static PyObject *t_DSSTPropagator_setSatelliteRevolution(t_DSSTPropagator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setSatelliteRevolution(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteRevolution", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setSelectedCoefficients(t_DSSTPropagator *self, PyObject *arg)
          {
            ::java::util::Set a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
            {
              OBJ_CALL(self->object.setSelectedCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSelectedCoefficients", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setShortPeriodTerms(t_DSSTPropagator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setShortPeriodTerms(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setShortPeriodTerms", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_tolerances(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                ::org::orekit::orbits::Orbit a1((jobject) NULL);
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::tolerances(a0, a1));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
              break;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::orbits::Orbit a2((jobject) NULL);
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "DDk", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::tolerances(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
            }

            PyErr_SetArgsError(type, "tolerances", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_get__allForceModels(t_DSSTPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(value);
          }

          static int t_DSSTPropagator_set__attitudeProvider(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
              {
                INT_CALL(self->object.setAttitudeProvider(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return -1;
          }

          static int t_DSSTPropagator_set__initialState(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setInitialState(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "initialState", arg);
            return -1;
          }

          static int t_DSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setInterpolationGridToFixedNumberOfPoints(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToFixedNumberOfPoints", arg);
            return -1;
          }

          static int t_DSSTPropagator_set__interpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setInterpolationGridToMaxTimeGap(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToMaxTimeGap", arg);
            return -1;
          }

          static int t_DSSTPropagator_set__mu(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setMu(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "mu", arg);
            return -1;
          }

          static PyObject *t_DSSTPropagator_get__orbitType(t_DSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
          }

          static PyObject *t_DSSTPropagator_get__positionAngleType(t_DSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            OBJ_CALL(value = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
          }

          static PyObject *t_DSSTPropagator_get__satelliteRevolution(t_DSSTPropagator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) value);
          }
          static int t_DSSTPropagator_set__satelliteRevolution(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setSatelliteRevolution(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteRevolution", arg);
            return -1;
          }

          static PyObject *t_DSSTPropagator_get__selectedCoefficients(t_DSSTPropagator *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(value);
          }
          static int t_DSSTPropagator_set__selectedCoefficients(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::java::util::Set value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::Set::initializeClass, &value))
              {
                INT_CALL(self->object.setSelectedCoefficients(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "selectedCoefficients", arg);
            return -1;
          }

          static PyObject *t_DSSTPropagator_get__shortPeriodTerms(t_DSSTPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getShortPeriodTerms());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_DSSTPropagator_set__shortPeriodTerms(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setShortPeriodTerms(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "shortPeriodTerms", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonODEIntegratorBuilder.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonODEIntegratorBuilder::class$ = NULL;
        jmethodID *PythonODEIntegratorBuilder::mids$ = NULL;
        bool PythonODEIntegratorBuilder::live$ = false;

        jclass PythonODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonODEIntegratorBuilder::PythonODEIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonODEIntegratorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonODEIntegratorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonODEIntegratorBuilder::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace conversion {
        static PyObject *t_PythonODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonODEIntegratorBuilder_init_(t_PythonODEIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonODEIntegratorBuilder_finalize(t_PythonODEIntegratorBuilder *self);
        static PyObject *t_PythonODEIntegratorBuilder_pythonExtension(t_PythonODEIntegratorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonODEIntegratorBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonODEIntegratorBuilder_get__self(t_PythonODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_PythonODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonODEIntegratorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_PythonODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonODEIntegratorBuilder_init_ },
          { Py_tp_getset, t_PythonODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonODEIntegratorBuilder, t_PythonODEIntegratorBuilder, PythonODEIntegratorBuilder);

        void t_PythonODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonODEIntegratorBuilder), &PY_TYPE_DEF(PythonODEIntegratorBuilder), module, "PythonODEIntegratorBuilder", 1);
        }

        void t_PythonODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonODEIntegratorBuilder), "class_", make_descriptor(PythonODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonODEIntegratorBuilder), "wrapfn_", make_descriptor(t_PythonODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonODEIntegratorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;", (void *) t_PythonODEIntegratorBuilder_buildIntegrator0 },
            { "pythonDecRef", "()V", (void *) t_PythonODEIntegratorBuilder_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonODEIntegratorBuilder::wrap_Object(PythonODEIntegratorBuilder(((t_PythonODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonODEIntegratorBuilder_init_(t_PythonODEIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonODEIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = PythonODEIntegratorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonODEIntegratorBuilder_finalize(t_PythonODEIntegratorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonODEIntegratorBuilder_pythonExtension(t_PythonODEIntegratorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
          PyObject *o1 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a1));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
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

        static void JNICALL t_PythonODEIntegratorBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonODEIntegratorBuilder_get__self(t_PythonODEIntegratorBuilder *self, void *data)
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
#include "org/orekit/rugged/linesensor/SensorPixelCrossing.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorPixelCrossing::class$ = NULL;
        jmethodID *SensorPixelCrossing::mids$ = NULL;
        bool SensorPixelCrossing::live$ = false;

        jclass SensorPixelCrossing::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorPixelCrossing");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2656ede02700ff9b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ID)V");
            mids$[mid_locatePixel_e912d21057defe63] = env->getMethodID(cls, "locatePixel", "(Lorg/orekit/time/AbsoluteDate;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorPixelCrossing::SensorPixelCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2656ede02700ff9b, a0.this$, a1.this$, a2.this$, a3, a4)) {}

        jdouble SensorPixelCrossing::locatePixel(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_locatePixel_e912d21057defe63], a0.this$);
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
      namespace linesensor {
        static PyObject *t_SensorPixelCrossing_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorPixelCrossing_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorPixelCrossing_init_(t_SensorPixelCrossing *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorPixelCrossing_locatePixel(t_SensorPixelCrossing *self, PyObject *arg);

        static PyMethodDef t_SensorPixelCrossing__methods_[] = {
          DECLARE_METHOD(t_SensorPixelCrossing, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixelCrossing, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixelCrossing, locatePixel, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorPixelCrossing)[] = {
          { Py_tp_methods, t_SensorPixelCrossing__methods_ },
          { Py_tp_init, (void *) t_SensorPixelCrossing_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorPixelCrossing)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorPixelCrossing, t_SensorPixelCrossing, SensorPixelCrossing);

        void t_SensorPixelCrossing::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorPixelCrossing), &PY_TYPE_DEF(SensorPixelCrossing), module, "SensorPixelCrossing", 0);
        }

        void t_SensorPixelCrossing::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "class_", make_descriptor(SensorPixelCrossing::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "wrapfn_", make_descriptor(t_SensorPixelCrossing::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorPixelCrossing_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorPixelCrossing::initializeClass, 1)))
            return NULL;
          return t_SensorPixelCrossing::wrap_Object(SensorPixelCrossing(((t_SensorPixelCrossing *) arg)->object.this$));
        }
        static PyObject *t_SensorPixelCrossing_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorPixelCrossing::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorPixelCrossing_init_(t_SensorPixelCrossing *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          jint a3;
          jdouble a4;
          SensorPixelCrossing object((jobject) NULL);

          if (!parseArgs(args, "kkkID", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SensorPixelCrossing(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorPixelCrossing_locatePixel(t_SensorPixelCrossing *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.locatePixel(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "locatePixel", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Variance.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "org/hipparchus/stat/descriptive/moment/Variance.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Variance::class$ = NULL;
          jmethodID *Variance::mids$ = NULL;
          bool Variance::live$ = false;

          jclass Variance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Variance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_98e08a33c6fbb84a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_init$_50a2e0b139e80a58] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_eb21d3f0d574510d] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_aggregate_9823a278b951965d] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/Variance;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_419e1a63d190ede9] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Variance;");
              mids$[mid_evaluate_926a8b9763aa0b21] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_568f42d2326d41b5] = env->getMethodID(cls, "evaluate", "([D[DD)D");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_5d62632feda90f27] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_evaluate_431214b6e4f01f3c] = env->getMethodID(cls, "evaluate", "([DDII)D");
              mids$[mid_evaluate_f1d236bdd09f5396] = env->getMethodID(cls, "evaluate", "([D[DDII)D");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_isBiasCorrected_e470b6d9e0d979db] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrection_2309f759fa1c365a] = env->getMethodID(cls, "withBiasCorrection", "(Z)Lorg/hipparchus/stat/descriptive/moment/Variance;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Variance::Variance() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          Variance::Variance(const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_98e08a33c6fbb84a, a0.this$)) {}

          Variance::Variance(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_50a2e0b139e80a58, a0)) {}

          Variance::Variance(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_eb21d3f0d574510d, a0, a1.this$)) {}

          void Variance::aggregate(const Variance & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_9823a278b951965d], a0.this$);
          }

          void Variance::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          Variance Variance::copy() const
          {
            return Variance(env->callObjectMethod(this$, mids$[mid_copy_419e1a63d190ede9]));
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_926a8b9763aa0b21], a0.this$, a1);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_568f42d2326d41b5], a0.this$, a1.this$, a2);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_5d62632feda90f27], a0.this$, a1.this$, a2, a3);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_431214b6e4f01f3c], a0.this$, a1, a2, a3);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2, jint a3, jint a4) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_f1d236bdd09f5396], a0.this$, a1.this$, a2, a3, a4);
          }

          jlong Variance::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble Variance::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void Variance::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
          }

          jboolean Variance::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_e470b6d9e0d979db]);
          }

          Variance Variance::withBiasCorrection(jboolean a0) const
          {
            return Variance(env->callObjectMethod(this$, mids$[mid_withBiasCorrection_2309f759fa1c365a], a0));
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_Variance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Variance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Variance_init_(t_Variance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Variance_aggregate(t_Variance *self, PyObject *arg);
          static PyObject *t_Variance_clear(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_copy(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_evaluate(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_getN(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_getResult(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_increment(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_isBiasCorrected(t_Variance *self);
          static PyObject *t_Variance_withBiasCorrection(t_Variance *self, PyObject *arg);
          static PyObject *t_Variance_get__biasCorrected(t_Variance *self, void *data);
          static PyObject *t_Variance_get__n(t_Variance *self, void *data);
          static PyObject *t_Variance_get__result(t_Variance *self, void *data);
          static PyGetSetDef t_Variance__fields_[] = {
            DECLARE_GET_FIELD(t_Variance, biasCorrected),
            DECLARE_GET_FIELD(t_Variance, n),
            DECLARE_GET_FIELD(t_Variance, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Variance__methods_[] = {
            DECLARE_METHOD(t_Variance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Variance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Variance, aggregate, METH_O),
            DECLARE_METHOD(t_Variance, clear, METH_VARARGS),
            DECLARE_METHOD(t_Variance, copy, METH_VARARGS),
            DECLARE_METHOD(t_Variance, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Variance, getN, METH_VARARGS),
            DECLARE_METHOD(t_Variance, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Variance, increment, METH_VARARGS),
            DECLARE_METHOD(t_Variance, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_Variance, withBiasCorrection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Variance)[] = {
            { Py_tp_methods, t_Variance__methods_ },
            { Py_tp_init, (void *) t_Variance_init_ },
            { Py_tp_getset, t_Variance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Variance)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Variance, t_Variance, Variance);

          void t_Variance::install(PyObject *module)
          {
            installType(&PY_TYPE(Variance), &PY_TYPE_DEF(Variance), module, "Variance", 0);
          }

          void t_Variance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "class_", make_descriptor(Variance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "wrapfn_", make_descriptor(t_Variance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Variance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Variance::initializeClass, 1)))
              return NULL;
            return t_Variance::wrap_Object(Variance(((t_Variance *) arg)->object.this$));
          }
          static PyObject *t_Variance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Variance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Variance_init_(t_Variance *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Variance object((jobject) NULL);

                INT_CALL(object = Variance());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a0((jobject) NULL);
                Variance object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0))
                {
                  INT_CALL(object = Variance(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                Variance object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = Variance(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a1((jobject) NULL);
                Variance object((jobject) NULL);

                if (!parseArgs(args, "Zk", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Variance(a0, a1));
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

          static PyObject *t_Variance_aggregate(t_Variance *self, PyObject *arg)
          {
            Variance a0((jobject) NULL);

            if (!parseArg(arg, "k", Variance::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Variance_clear(t_Variance *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Variance_copy(t_Variance *self, PyObject *args)
          {
            Variance result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Variance::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Variance_evaluate(t_Variance *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 5:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble a2;
                jint a3;
                jint a4;
                jdouble result;

                if (!parseArgs(args, "[D[DDII", &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3, a4));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Variance_getN(t_Variance *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Variance_getResult(t_Variance *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Variance_increment(t_Variance *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Variance_isBiasCorrected(t_Variance *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Variance_withBiasCorrection(t_Variance *self, PyObject *arg)
          {
            jboolean a0;
            Variance result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrection(a0));
              return t_Variance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrection", arg);
            return NULL;
          }

          static PyObject *t_Variance_get__biasCorrected(t_Variance *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Variance_get__n(t_Variance *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Variance_get__result(t_Variance *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldMultivariateMatrixFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateMatrixFunction::class$ = NULL;
      jmethodID *FieldMultivariateMatrixFunction::mids$ = NULL;
      bool FieldMultivariateMatrixFunction::live$ = false;

      jclass FieldMultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateMatrixFunction_e76b0d29386a6c4d] = env->getMethodID(cls, "toCalculusFieldMultivariateMatrixFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction;");
          mids$[mid_value_f77247e6b79358da] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction FieldMultivariateMatrixFunction::toCalculusFieldMultivariateMatrixFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateMatrixFunction_e76b0d29386a6c4d], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldMultivariateMatrixFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_f77247e6b79358da], a0.this$));
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
      static PyObject *t_FieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_toCalculusFieldMultivariateMatrixFunction(t_FieldMultivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_value(t_FieldMultivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, toCalculusFieldMultivariateMatrixFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateMatrixFunction, t_FieldMultivariateMatrixFunction, FieldMultivariateMatrixFunction);

      void t_FieldMultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateMatrixFunction), &PY_TYPE_DEF(FieldMultivariateMatrixFunction), module, "FieldMultivariateMatrixFunction", 0);
      }

      void t_FieldMultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "class_", make_descriptor(FieldMultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "wrapfn_", make_descriptor(t_FieldMultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateMatrixFunction::wrap_Object(FieldMultivariateMatrixFunction(((t_FieldMultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateMatrixFunction_toCalculusFieldMultivariateMatrixFunction(t_FieldMultivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateMatrixFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateMatrixFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateMatrixFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateMatrixFunction_value(t_FieldMultivariateMatrixFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *StateVector::class$ = NULL;
            jmethodID *StateVector::mids$ = NULL;
            bool StateVector::live$ = false;

            jclass StateVector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/StateVector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_hasAcceleration_e470b6d9e0d979db] = env->getMethodID(cls, "hasAcceleration", "()Z");
                mids$[mid_setA_987a5fb872043b12] = env->getMethodID(cls, "setA", "(ID)V");
                mids$[mid_setEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setP_987a5fb872043b12] = env->getMethodID(cls, "setP", "(ID)V");
                mids$[mid_setV_987a5fb872043b12] = env->getMethodID(cls, "setV", "(ID)V");
                mids$[mid_toTimeStampedPVCoordinates_6890805957bea2cd] = env->getMethodID(cls, "toTimeStampedPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVector::StateVector() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            ::org::orekit::time::AbsoluteDate StateVector::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_aaa854c403487cf3]));
            }

            jboolean StateVector::hasAcceleration() const
            {
              return env->callBooleanMethod(this$, mids$[mid_hasAcceleration_e470b6d9e0d979db]);
            }

            void StateVector::setA(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setA_987a5fb872043b12], a0, a1);
            }

            void StateVector::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_e82d68cd9f886886], a0.this$);
            }

            void StateVector::setP(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setP_987a5fb872043b12], a0, a1);
            }

            void StateVector::setV(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setV_987a5fb872043b12], a0, a1);
            }

            ::org::orekit::utils::TimeStampedPVCoordinates StateVector::toTimeStampedPVCoordinates() const
            {
              return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toTimeStampedPVCoordinates_6890805957bea2cd]));
            }

            void StateVector::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds);
            static PyObject *t_StateVector_getEpoch(t_StateVector *self);
            static PyObject *t_StateVector_hasAcceleration(t_StateVector *self);
            static PyObject *t_StateVector_setA(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_setEpoch(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setP(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_setV(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_toTimeStampedPVCoordinates(t_StateVector *self);
            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_get__epoch(t_StateVector *self, void *data);
            static int t_StateVector_set__epoch(t_StateVector *self, PyObject *arg, void *data);
            static PyGetSetDef t_StateVector__fields_[] = {
              DECLARE_GETSET_FIELD(t_StateVector, epoch),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVector__methods_[] = {
              DECLARE_METHOD(t_StateVector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, hasAcceleration, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, setA, METH_VARARGS),
              DECLARE_METHOD(t_StateVector, setEpoch, METH_O),
              DECLARE_METHOD(t_StateVector, setP, METH_VARARGS),
              DECLARE_METHOD(t_StateVector, setV, METH_VARARGS),
              DECLARE_METHOD(t_StateVector, toTimeStampedPVCoordinates, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVector)[] = {
              { Py_tp_methods, t_StateVector__methods_ },
              { Py_tp_init, (void *) t_StateVector_init_ },
              { Py_tp_getset, t_StateVector__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVector)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(StateVector, t_StateVector, StateVector);

            void t_StateVector::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVector), &PY_TYPE_DEF(StateVector), module, "StateVector", 0);
            }

            void t_StateVector::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "class_", make_descriptor(StateVector::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "wrapfn_", make_descriptor(t_StateVector::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVector::initializeClass, 1)))
                return NULL;
              return t_StateVector::wrap_Object(StateVector(((t_StateVector *) arg)->object.this$));
            }
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVector::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds)
            {
              StateVector object((jobject) NULL);

              INT_CALL(object = StateVector());
              self->object = object;

              return 0;
            }

            static PyObject *t_StateVector_getEpoch(t_StateVector *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_StateVector_hasAcceleration(t_StateVector *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.hasAcceleration());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_StateVector_setA(t_StateVector *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.setA(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setA", args);
              return NULL;
            }

            static PyObject *t_StateVector_setEpoch(t_StateVector *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setP(t_StateVector *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.setP(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setP", args);
              return NULL;
            }

            static PyObject *t_StateVector_setV(t_StateVector *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.setV(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setV", args);
              return NULL;
            }

            static PyObject *t_StateVector_toTimeStampedPVCoordinates(t_StateVector *self)
            {
              ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
              OBJ_CALL(result = self->object.toTimeStampedPVCoordinates());
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }

            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(StateVector), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_StateVector_get__epoch(t_StateVector *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_StateVector_set__epoch(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epoch", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/ErrorState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *ErrorState::class$ = NULL;
            jmethodID *ErrorState::mids$ = NULL;
            bool ErrorState::live$ = false;

            jclass ErrorState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/ErrorState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_processToken_aa256c47fb7b26f1] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ErrorState::ErrorState() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jboolean ErrorState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_aa256c47fb7b26f1], a0.this$);
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
            static PyObject *t_ErrorState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ErrorState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ErrorState_init_(t_ErrorState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ErrorState_processToken(t_ErrorState *self, PyObject *arg);

            static PyMethodDef t_ErrorState__methods_[] = {
              DECLARE_METHOD(t_ErrorState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ErrorState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ErrorState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ErrorState)[] = {
              { Py_tp_methods, t_ErrorState__methods_ },
              { Py_tp_init, (void *) t_ErrorState_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ErrorState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ErrorState, t_ErrorState, ErrorState);

            void t_ErrorState::install(PyObject *module)
            {
              installType(&PY_TYPE(ErrorState), &PY_TYPE_DEF(ErrorState), module, "ErrorState", 0);
            }

            void t_ErrorState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "class_", make_descriptor(ErrorState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "wrapfn_", make_descriptor(t_ErrorState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ErrorState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ErrorState::initializeClass, 1)))
                return NULL;
              return t_ErrorState::wrap_Object(ErrorState(((t_ErrorState *) arg)->object.this$));
            }
            static PyObject *t_ErrorState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ErrorState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ErrorState_init_(t_ErrorState *self, PyObject *args, PyObject *kwds)
            {
              ErrorState object((jobject) NULL);

              INT_CALL(object = ErrorState());
              self->object = object;

              return 0;
            }

            static PyObject *t_ErrorState_processToken(t_ErrorState *self, PyObject *arg)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *ForceModelContext::class$ = NULL;
            jmethodID *ForceModelContext::mids$ = NULL;
            bool ForceModelContext::live$ = false;

            jclass ForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAuxiliaryElements_24ab54193b574fe5] = env->getMethodID(cls, "getAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements ForceModelContext::getAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(env->callObjectMethod(this$, mids$[mid_getAuxiliaryElements_24ab54193b574fe5]));
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
            static PyObject *t_ForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ForceModelContext_getAuxiliaryElements(t_ForceModelContext *self);
            static PyObject *t_ForceModelContext_get__auxiliaryElements(t_ForceModelContext *self, void *data);
            static PyGetSetDef t_ForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_ForceModelContext, auxiliaryElements),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ForceModelContext__methods_[] = {
              DECLARE_METHOD(t_ForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ForceModelContext, getAuxiliaryElements, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ForceModelContext)[] = {
              { Py_tp_methods, t_ForceModelContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ForceModelContext)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ForceModelContext, t_ForceModelContext, ForceModelContext);

            void t_ForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(ForceModelContext), &PY_TYPE_DEF(ForceModelContext), module, "ForceModelContext", 0);
            }

            void t_ForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModelContext), "class_", make_descriptor(ForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModelContext), "wrapfn_", make_descriptor(t_ForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModelContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ForceModelContext::initializeClass, 1)))
                return NULL;
              return t_ForceModelContext::wrap_Object(ForceModelContext(((t_ForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_ForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ForceModelContext_getAuxiliaryElements(t_ForceModelContext *self)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements result((jobject) NULL);
              OBJ_CALL(result = self->object.getAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(result);
            }

            static PyObject *t_ForceModelContext_get__auxiliaryElements(t_ForceModelContext *self, void *data)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements value((jobject) NULL);
              OBJ_CALL(value = self->object.getAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/PythonGNSSAttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *PythonGNSSAttitudeProvider::class$ = NULL;
        jmethodID *PythonGNSSAttitudeProvider::mids$ = NULL;
        bool PythonGNSSAttitudeProvider::live$ = false;

        jclass PythonGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/PythonGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
            mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_validityEnd_aaa854c403487cf3] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_aaa854c403487cf3] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGNSSAttitudeProvider::PythonGNSSAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonGNSSAttitudeProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonGNSSAttitudeProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonGNSSAttitudeProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
    namespace gnss {
      namespace attitude {
        static PyObject *t_PythonGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonGNSSAttitudeProvider_init_(t_PythonGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonGNSSAttitudeProvider_finalize(t_PythonGNSSAttitudeProvider *self);
        static PyObject *t_PythonGNSSAttitudeProvider_pythonExtension(t_PythonGNSSAttitudeProvider *self, PyObject *args);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonGNSSAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityEnd3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityStart4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonGNSSAttitudeProvider_get__self(t_PythonGNSSAttitudeProvider *self, void *data);
        static PyGetSetDef t_PythonGNSSAttitudeProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonGNSSAttitudeProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_PythonGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) t_PythonGNSSAttitudeProvider_init_ },
          { Py_tp_getset, t_PythonGNSSAttitudeProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonGNSSAttitudeProvider, t_PythonGNSSAttitudeProvider, PythonGNSSAttitudeProvider);

        void t_PythonGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonGNSSAttitudeProvider), &PY_TYPE_DEF(PythonGNSSAttitudeProvider), module, "PythonGNSSAttitudeProvider", 1);
        }

        void t_PythonGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "class_", make_descriptor(PythonGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_PythonGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonGNSSAttitudeProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonGNSSAttitudeProvider_getAttitude0 },
            { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonGNSSAttitudeProvider_getAttitude1 },
            { "pythonDecRef", "()V", (void *) t_PythonGNSSAttitudeProvider_pythonDecRef2 },
            { "validityEnd", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonGNSSAttitudeProvider_validityEnd3 },
            { "validityStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonGNSSAttitudeProvider_validityStart4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_PythonGNSSAttitudeProvider::wrap_Object(PythonGNSSAttitudeProvider(((t_PythonGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonGNSSAttitudeProvider_init_(t_PythonGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonGNSSAttitudeProvider object((jobject) NULL);

          INT_CALL(object = PythonGNSSAttitudeProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonGNSSAttitudeProvider_finalize(t_PythonGNSSAttitudeProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonGNSSAttitudeProvider_pythonExtension(t_PythonGNSSAttitudeProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
          {
            throwTypeError("getAttitude", result);
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::Attitude value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
          {
            throwTypeError("getAttitude", result);
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

        static void JNICALL t_PythonGNSSAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityEnd3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "validityEnd", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("validityEnd", result);
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityStart4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "validityStart", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("validityStart", result);
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

        static PyObject *t_PythonGNSSAttitudeProvider_get__self(t_PythonGNSSAttitudeProvider *self, void *data)
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
#include "org/orekit/attitudes/SpinStabilized.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *SpinStabilized::class$ = NULL;
      jmethodID *SpinStabilized::mids$ = NULL;
      bool SpinStabilized::live$ = false;

      jclass SpinStabilized::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/SpinStabilized");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_857c20ed04bf2568] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getUnderlyingAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpinStabilized::SpinStabilized(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_857c20ed04bf2568, a0.this$, a1.this$, a2.this$, a3)) {}

      ::org::orekit::attitudes::Attitude SpinStabilized::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude SpinStabilized::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider SpinStabilized::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_5cce95036ae870ba]));
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
      static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SpinStabilized_getAttitude(t_SpinStabilized *self, PyObject *args);
      static PyObject *t_SpinStabilized_getUnderlyingAttitudeProvider(t_SpinStabilized *self);
      static PyObject *t_SpinStabilized_get__underlyingAttitudeProvider(t_SpinStabilized *self, void *data);
      static PyGetSetDef t_SpinStabilized__fields_[] = {
        DECLARE_GET_FIELD(t_SpinStabilized, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SpinStabilized__methods_[] = {
        DECLARE_METHOD(t_SpinStabilized, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpinStabilized, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpinStabilized, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_SpinStabilized, getUnderlyingAttitudeProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SpinStabilized)[] = {
        { Py_tp_methods, t_SpinStabilized__methods_ },
        { Py_tp_init, (void *) t_SpinStabilized_init_ },
        { Py_tp_getset, t_SpinStabilized__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SpinStabilized)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SpinStabilized, t_SpinStabilized, SpinStabilized);

      void t_SpinStabilized::install(PyObject *module)
      {
        installType(&PY_TYPE(SpinStabilized), &PY_TYPE_DEF(SpinStabilized), module, "SpinStabilized", 0);
      }

      void t_SpinStabilized::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "class_", make_descriptor(SpinStabilized::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "wrapfn_", make_descriptor(t_SpinStabilized::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SpinStabilized::initializeClass, 1)))
          return NULL;
        return t_SpinStabilized::wrap_Object(SpinStabilized(((t_SpinStabilized *) arg)->object.this$));
      }
      static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SpinStabilized::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        jdouble a3;
        SpinStabilized object((jobject) NULL);

        if (!parseArgs(args, "kkkD", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = SpinStabilized(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SpinStabilized_getAttitude(t_SpinStabilized *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_SpinStabilized_getUnderlyingAttitudeProvider(t_SpinStabilized *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_SpinStabilized_get__underlyingAttitudeProvider(t_SpinStabilized *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XYZCovariance::class$ = NULL;
            jmethodID *XYZCovariance::mids$ = NULL;
            bool XYZCovariance::live$ = false;

            jclass XYZCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XYZCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_50a2e0b139e80a58] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_getCdrgdrg_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgdrg", "()D");
                mids$[mid_getCdrgx_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgx", "()D");
                mids$[mid_getCdrgxdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgxdot", "()D");
                mids$[mid_getCdrgy_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgy", "()D");
                mids$[mid_getCdrgydot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgydot", "()D");
                mids$[mid_getCdrgz_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgz", "()D");
                mids$[mid_getCdrgzdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCdrgzdot", "()D");
                mids$[mid_getCsrpdrg_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpdrg", "()D");
                mids$[mid_getCsrpsrp_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpsrp", "()D");
                mids$[mid_getCsrpx_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpx", "()D");
                mids$[mid_getCsrpxdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpxdot", "()D");
                mids$[mid_getCsrpy_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpy", "()D");
                mids$[mid_getCsrpydot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpydot", "()D");
                mids$[mid_getCsrpz_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpz", "()D");
                mids$[mid_getCsrpzdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCsrpzdot", "()D");
                mids$[mid_getCthrdrg_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrdrg", "()D");
                mids$[mid_getCthrsrp_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrsrp", "()D");
                mids$[mid_getCthrthr_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrthr", "()D");
                mids$[mid_getCthrx_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrx", "()D");
                mids$[mid_getCthrxdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrxdot", "()D");
                mids$[mid_getCthry_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthry", "()D");
                mids$[mid_getCthrydot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrydot", "()D");
                mids$[mid_getCthrz_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrz", "()D");
                mids$[mid_getCthrzdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCthrzdot", "()D");
                mids$[mid_getCxdotx_456d9a2f64d6b28d] = env->getMethodID(cls, "getCxdotx", "()D");
                mids$[mid_getCxdotxdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCxdotxdot", "()D");
                mids$[mid_getCxdoty_456d9a2f64d6b28d] = env->getMethodID(cls, "getCxdoty", "()D");
                mids$[mid_getCxdotz_456d9a2f64d6b28d] = env->getMethodID(cls, "getCxdotz", "()D");
                mids$[mid_getCxx_456d9a2f64d6b28d] = env->getMethodID(cls, "getCxx", "()D");
                mids$[mid_getCydotx_456d9a2f64d6b28d] = env->getMethodID(cls, "getCydotx", "()D");
                mids$[mid_getCydotxdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCydotxdot", "()D");
                mids$[mid_getCydoty_456d9a2f64d6b28d] = env->getMethodID(cls, "getCydoty", "()D");
                mids$[mid_getCydotydot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCydotydot", "()D");
                mids$[mid_getCydotz_456d9a2f64d6b28d] = env->getMethodID(cls, "getCydotz", "()D");
                mids$[mid_getCyx_456d9a2f64d6b28d] = env->getMethodID(cls, "getCyx", "()D");
                mids$[mid_getCyy_456d9a2f64d6b28d] = env->getMethodID(cls, "getCyy", "()D");
                mids$[mid_getCzdotx_456d9a2f64d6b28d] = env->getMethodID(cls, "getCzdotx", "()D");
                mids$[mid_getCzdotxdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCzdotxdot", "()D");
                mids$[mid_getCzdoty_456d9a2f64d6b28d] = env->getMethodID(cls, "getCzdoty", "()D");
                mids$[mid_getCzdotydot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCzdotydot", "()D");
                mids$[mid_getCzdotz_456d9a2f64d6b28d] = env->getMethodID(cls, "getCzdotz", "()D");
                mids$[mid_getCzdotzdot_456d9a2f64d6b28d] = env->getMethodID(cls, "getCzdotzdot", "()D");
                mids$[mid_getCzx_456d9a2f64d6b28d] = env->getMethodID(cls, "getCzx", "()D");
                mids$[mid_getCzy_456d9a2f64d6b28d] = env->getMethodID(cls, "getCzy", "()D");
                mids$[mid_getCzz_456d9a2f64d6b28d] = env->getMethodID(cls, "getCzz", "()D");
                mids$[mid_getXYZCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getXYZCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_isCovXYZset_e470b6d9e0d979db] = env->getMethodID(cls, "isCovXYZset", "()Z");
                mids$[mid_setCdrgdrg_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgdrg", "(D)V");
                mids$[mid_setCdrgx_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgx", "(D)V");
                mids$[mid_setCdrgxdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgxdot", "(D)V");
                mids$[mid_setCdrgy_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgy", "(D)V");
                mids$[mid_setCdrgydot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgydot", "(D)V");
                mids$[mid_setCdrgz_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgz", "(D)V");
                mids$[mid_setCdrgzdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCdrgzdot", "(D)V");
                mids$[mid_setCovarianceMatrixEntry_78e41e7b5124a628] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setCsrpdrg_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpdrg", "(D)V");
                mids$[mid_setCsrpsrp_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpsrp", "(D)V");
                mids$[mid_setCsrpx_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpx", "(D)V");
                mids$[mid_setCsrpxdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpxdot", "(D)V");
                mids$[mid_setCsrpy_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpy", "(D)V");
                mids$[mid_setCsrpydot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpydot", "(D)V");
                mids$[mid_setCsrpz_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpz", "(D)V");
                mids$[mid_setCsrpzdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCsrpzdot", "(D)V");
                mids$[mid_setCthrdrg_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrdrg", "(D)V");
                mids$[mid_setCthrsrp_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrsrp", "(D)V");
                mids$[mid_setCthrthr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrthr", "(D)V");
                mids$[mid_setCthrx_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrx", "(D)V");
                mids$[mid_setCthrxdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrxdot", "(D)V");
                mids$[mid_setCthry_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthry", "(D)V");
                mids$[mid_setCthrydot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrydot", "(D)V");
                mids$[mid_setCthrz_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrz", "(D)V");
                mids$[mid_setCthrzdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCthrzdot", "(D)V");
                mids$[mid_setCxdotx_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCxdotx", "(D)V");
                mids$[mid_setCxdotxdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCxdotxdot", "(D)V");
                mids$[mid_setCxdoty_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCxdoty", "(D)V");
                mids$[mid_setCxdotz_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCxdotz", "(D)V");
                mids$[mid_setCxx_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCxx", "(D)V");
                mids$[mid_setCydotx_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCydotx", "(D)V");
                mids$[mid_setCydotxdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCydotxdot", "(D)V");
                mids$[mid_setCydoty_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCydoty", "(D)V");
                mids$[mid_setCydotydot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCydotydot", "(D)V");
                mids$[mid_setCydotz_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCydotz", "(D)V");
                mids$[mid_setCyx_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCyx", "(D)V");
                mids$[mid_setCyy_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCyy", "(D)V");
                mids$[mid_setCzdotx_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCzdotx", "(D)V");
                mids$[mid_setCzdotxdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCzdotxdot", "(D)V");
                mids$[mid_setCzdoty_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCzdoty", "(D)V");
                mids$[mid_setCzdotydot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCzdotydot", "(D)V");
                mids$[mid_setCzdotz_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCzdotz", "(D)V");
                mids$[mid_setCzdotzdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCzdotzdot", "(D)V");
                mids$[mid_setCzx_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCzx", "(D)V");
                mids$[mid_setCzy_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCzy", "(D)V");
                mids$[mid_setCzz_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCzz", "(D)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XYZCovariance::XYZCovariance(jboolean a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_50a2e0b139e80a58, a0)) {}

            jdouble XYZCovariance::getCdrgdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgdrg_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCdrgx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgx_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCdrgxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgxdot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCdrgy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgy_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCdrgydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgydot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCdrgz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgz_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCdrgzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgzdot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCsrpdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpdrg_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCsrpsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpsrp_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCsrpx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpx_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCsrpxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpxdot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCsrpy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpy_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCsrpydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpydot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCsrpz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpz_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCsrpzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpzdot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCthrdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrdrg_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCthrsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrsrp_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCthrthr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrthr_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCthrx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrx_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCthrxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrxdot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCthry() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthry_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCthrydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrydot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCthrz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrz_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCthrzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrzdot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCxdotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotx_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCxdotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotxdot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCxdoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdoty_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCxdotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotz_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCxx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxx_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCydotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotx_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCydotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotxdot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCydoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydoty_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCydotydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotydot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCydotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotz_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCyx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCyx_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCyy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCyy_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCzdotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotx_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCzdotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotxdot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCzdoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdoty_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCzdotydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotydot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCzdotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotz_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCzdotzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotzdot_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCzx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzx_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCzy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzy_456d9a2f64d6b28d]);
            }

            jdouble XYZCovariance::getCzz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzz_456d9a2f64d6b28d]);
            }

            ::org::hipparchus::linear::RealMatrix XYZCovariance::getXYZCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getXYZCovarianceMatrix_7116bbecdd8ceb21]));
            }

            jboolean XYZCovariance::isCovXYZset() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCovXYZset_e470b6d9e0d979db]);
            }

            void XYZCovariance::setCdrgdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgdrg_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCdrgx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgx_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCdrgxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgxdot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCdrgy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgy_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCdrgydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgydot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCdrgz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgz_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCdrgzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgzdot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_78e41e7b5124a628], a0, a1, a2);
            }

            void XYZCovariance::setCsrpdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpdrg_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCsrpsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpsrp_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCsrpx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpx_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCsrpxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpxdot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCsrpy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpy_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCsrpydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpydot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCsrpz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpz_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCsrpzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpzdot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCthrdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrdrg_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCthrsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrsrp_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCthrthr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrthr_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCthrx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrx_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCthrxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrxdot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCthry(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthry_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCthrydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrydot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCthrz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrz_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCthrzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrzdot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCxdotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotx_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCxdotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotxdot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCxdoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdoty_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCxdotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotz_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCxx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxx_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCydotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotx_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCydotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotxdot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCydoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydoty_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCydotydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotydot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCydotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotz_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCyx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCyx_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCyy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCyy_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCzdotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotx_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCzdotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotxdot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCzdoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdoty_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCzdotydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotydot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCzdotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotz_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCzdotzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotzdot_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCzx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzx_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCzy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzy_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::setCzz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzz_77e0f9a1f260e2e5], a0);
            }

            void XYZCovariance::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_XYZCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XYZCovariance_init_(t_XYZCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XYZCovariance_getCdrgdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpsrp(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrsrp(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrthr(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthry(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCyx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCyy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getXYZCovarianceMatrix(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_isCovXYZset(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_setCdrgdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCovarianceMatrixEntry(t_XYZCovariance *self, PyObject *args);
            static PyObject *t_XYZCovariance_setCsrpdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpsrp(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrsrp(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrthr(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthry(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCyx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCyy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_validate(t_XYZCovariance *self, PyObject *args);
            static PyObject *t_XYZCovariance_get__cdrgdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__covXYZset(t_XYZCovariance *self, void *data);
            static PyObject *t_XYZCovariance_get__csrpdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpsrp(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpsrp(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrsrp(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrsrp(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrthr(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrthr(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthry(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthry(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cyx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cyx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cyy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cyy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__xYZCovarianceMatrix(t_XYZCovariance *self, void *data);
            static PyGetSetDef t_XYZCovariance__fields_[] = {
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgzdot),
              DECLARE_GET_FIELD(t_XYZCovariance, covXYZset),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpsrp),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrsrp),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrthr),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthry),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cyx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cyy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czz),
              DECLARE_GET_FIELD(t_XYZCovariance, xYZCovarianceMatrix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XYZCovariance__methods_[] = {
              DECLARE_METHOD(t_XYZCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpsrp, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrsrp, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrthr, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthry, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCyx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCyy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getXYZCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, isCovXYZset, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, setCdrgdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovariance, setCsrpdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpsrp, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrsrp, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrthr, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthry, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCyx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCyy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XYZCovariance)[] = {
              { Py_tp_methods, t_XYZCovariance__methods_ },
              { Py_tp_init, (void *) t_XYZCovariance_init_ },
              { Py_tp_getset, t_XYZCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XYZCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(XYZCovariance, t_XYZCovariance, XYZCovariance);

            void t_XYZCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(XYZCovariance), &PY_TYPE_DEF(XYZCovariance), module, "XYZCovariance", 0);
            }

            void t_XYZCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "class_", make_descriptor(XYZCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "wrapfn_", make_descriptor(t_XYZCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XYZCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XYZCovariance::initializeClass, 1)))
                return NULL;
              return t_XYZCovariance::wrap_Object(XYZCovariance(((t_XYZCovariance *) arg)->object.this$));
            }
            static PyObject *t_XYZCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XYZCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XYZCovariance_init_(t_XYZCovariance *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              XYZCovariance object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = XYZCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XYZCovariance_getCdrgdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpsrp(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrsrp(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrthr(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrthr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthry(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthry());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCyx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCyx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCyy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCyy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getXYZCovarianceMatrix(t_XYZCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getXYZCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_XYZCovariance_isCovXYZset(t_XYZCovariance *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isCovXYZset());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_XYZCovariance_setCdrgdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCovarianceMatrixEntry(t_XYZCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpsrp(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpsrp", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrsrp(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrsrp", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrthr(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrthr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrthr", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthry(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthry(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthry", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCyx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCyx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCyx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCyy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCyy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCyy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_validate(t_XYZCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XYZCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_XYZCovariance_get__cdrgdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__covXYZset(t_XYZCovariance *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isCovXYZset());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_XYZCovariance_get__csrpdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpsrp(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpsrp(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpsrp", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrsrp(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrsrp(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrsrp", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrthr(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrthr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrthr(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrthr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrthr", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthry(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthry());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthry(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthry(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthry", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cyx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCyx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cyx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCyx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cyx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cyy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCyy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cyy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCyy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cyy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__xYZCovarianceMatrix(t_XYZCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getXYZCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MultidimensionalCounter$Iterator.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MultidimensionalCounter$Iterator::class$ = NULL;
      jmethodID *MultidimensionalCounter$Iterator::mids$ = NULL;
      bool MultidimensionalCounter$Iterator::live$ = false;

      jclass MultidimensionalCounter$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MultidimensionalCounter$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCount_f2f64475e4580546] = env->getMethodID(cls, "getCount", "()I");
          mids$[mid_getCount_38565d58479aa24a] = env->getMethodID(cls, "getCount", "(I)I");
          mids$[mid_getCounts_d8ead0d90ce828b0] = env->getMethodID(cls, "getCounts", "()[I");
          mids$[mid_hasNext_e470b6d9e0d979db] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_next_6ba4c92831ab6e4f] = env->getMethodID(cls, "next", "()Ljava/lang/Integer;");
          mids$[mid_remove_7ae3461a92a43152] = env->getMethodID(cls, "remove", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint MultidimensionalCounter$Iterator::getCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_f2f64475e4580546]);
      }

      jint MultidimensionalCounter$Iterator::getCount(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_38565d58479aa24a], a0);
      }

      JArray< jint > MultidimensionalCounter$Iterator::getCounts() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCounts_d8ead0d90ce828b0]));
      }

      jboolean MultidimensionalCounter$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_e470b6d9e0d979db]);
      }

      ::java::lang::Integer MultidimensionalCounter$Iterator::next() const
      {
        return ::java::lang::Integer(env->callObjectMethod(this$, mids$[mid_next_6ba4c92831ab6e4f]));
      }

      void MultidimensionalCounter$Iterator::remove() const
      {
        env->callVoidMethod(this$, mids$[mid_remove_7ae3461a92a43152]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MultidimensionalCounter$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter$Iterator_getCount(t_MultidimensionalCounter$Iterator *self, PyObject *args);
      static PyObject *t_MultidimensionalCounter$Iterator_getCounts(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_hasNext(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_next(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_remove(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_get__count(t_MultidimensionalCounter$Iterator *self, void *data);
      static PyObject *t_MultidimensionalCounter$Iterator_get__counts(t_MultidimensionalCounter$Iterator *self, void *data);
      static PyGetSetDef t_MultidimensionalCounter$Iterator__fields_[] = {
        DECLARE_GET_FIELD(t_MultidimensionalCounter$Iterator, count),
        DECLARE_GET_FIELD(t_MultidimensionalCounter$Iterator, counts),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultidimensionalCounter$Iterator__methods_[] = {
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, getCount, METH_VARARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, getCounts, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, next, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, remove, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultidimensionalCounter$Iterator)[] = {
        { Py_tp_methods, t_MultidimensionalCounter$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultidimensionalCounter$Iterator__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_iterator_next< ::java::util::t_Iterator,::java::lang::t_Integer >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultidimensionalCounter$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultidimensionalCounter$Iterator, t_MultidimensionalCounter$Iterator, MultidimensionalCounter$Iterator);

      void t_MultidimensionalCounter$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultidimensionalCounter$Iterator), &PY_TYPE_DEF(MultidimensionalCounter$Iterator), module, "MultidimensionalCounter$Iterator", 0);
      }

      void t_MultidimensionalCounter$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "class_", make_descriptor(MultidimensionalCounter$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "wrapfn_", make_descriptor(t_MultidimensionalCounter$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultidimensionalCounter$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultidimensionalCounter$Iterator::initializeClass, 1)))
          return NULL;
        return t_MultidimensionalCounter$Iterator::wrap_Object(MultidimensionalCounter$Iterator(((t_MultidimensionalCounter$Iterator *) arg)->object.this$));
      }
      static PyObject *t_MultidimensionalCounter$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultidimensionalCounter$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_getCount(t_MultidimensionalCounter$Iterator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.getCount());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getCount(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", args);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_getCounts(t_MultidimensionalCounter$Iterator *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCounts());
        return result.wrap();
      }

      static PyObject *t_MultidimensionalCounter$Iterator_hasNext(t_MultidimensionalCounter$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_next(t_MultidimensionalCounter$Iterator *self)
      {
        ::java::lang::Integer result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return ::java::lang::t_Integer::wrap_Object(result);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_remove(t_MultidimensionalCounter$Iterator *self)
      {
        OBJ_CALL(self->object.remove());
        Py_RETURN_NONE;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_get__count(t_MultidimensionalCounter$Iterator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCount());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_get__counts(t_MultidimensionalCounter$Iterator *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCounts());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *BaseAbstractFieldUnivariateIntegrator::class$ = NULL;
        jmethodID *BaseAbstractFieldUnivariateIntegrator::mids$ = NULL;
        bool BaseAbstractFieldUnivariateIntegrator::live$ = false;
        jdouble BaseAbstractFieldUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY = (jdouble) 0;
        jint BaseAbstractFieldUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT = (jint) 0;
        jint BaseAbstractFieldUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT = (jint) 0;
        jdouble BaseAbstractFieldUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY = (jdouble) 0;

        jclass BaseAbstractFieldUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getIterations_f2f64475e4580546] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_cffdd7e74469af96] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_doIntegrate_e6d4d3215c30992a] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMax_e6d4d3215c30992a] = env->getMethodID(cls, "getMax", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMin_e6d4d3215c30992a] = env->getMethodID(cls, "getMin", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_computeObjectiveValue_d3398190482814dc] = env->getMethodID(cls, "computeObjectiveValue", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_setup_5d7218df37276b12] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ABSOLUTE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_ACCURACY");
            DEFAULT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS_COUNT");
            DEFAULT_MIN_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MIN_ITERATIONS_COUNT");
            DEFAULT_RELATIVE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractFieldUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_456d9a2f64d6b28d]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
        }

        ::org::hipparchus::Field BaseAbstractFieldUnivariateIntegrator::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
        }

        jint BaseAbstractFieldUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_f2f64475e4580546]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_f2f64475e4580546]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_f2f64475e4580546]);
        }

        jdouble BaseAbstractFieldUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::CalculusFieldElement BaseAbstractFieldUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_cffdd7e74469af96], a0, a1.this$, a2.this$, a3.this$));
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
      namespace integration {
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_of_(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getEvaluations(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getField(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getIterations(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_integrate(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__evaluations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__field(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__iterations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__parameters_(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_BaseAbstractFieldUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, field),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractFieldUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getField, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractFieldUnivariateIntegrator)[] = {
          { Py_tp_methods, t_BaseAbstractFieldUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractFieldUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractFieldUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractFieldUnivariateIntegrator, t_BaseAbstractFieldUnivariateIntegrator, BaseAbstractFieldUnivariateIntegrator);
        PyObject *t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(const BaseAbstractFieldUnivariateIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractFieldUnivariateIntegrator *self = (t_BaseAbstractFieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractFieldUnivariateIntegrator *self = (t_BaseAbstractFieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseAbstractFieldUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractFieldUnivariateIntegrator), &PY_TYPE_DEF(BaseAbstractFieldUnivariateIntegrator), module, "BaseAbstractFieldUnivariateIntegrator", 0);
        }

        void t_BaseAbstractFieldUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "class_", make_descriptor(BaseAbstractFieldUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "wrapfn_", make_descriptor(t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(BaseAbstractFieldUnivariateIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_ABSOLUTE_ACCURACY", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_MAX_ITERATIONS_COUNT", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_MIN_ITERATIONS_COUNT", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_RELATIVE_ACCURACY", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY));
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractFieldUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(BaseAbstractFieldUnivariateIntegrator(((t_BaseAbstractFieldUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractFieldUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_of_(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getEvaluations(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getField(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getIterations(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_integrate(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__parameters_(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__evaluations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__field(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__iterations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficientsBLQFactory.h"
#include "java/util/List.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoadingCoefficientsBLQFactory::class$ = NULL;
          jmethodID *OceanLoadingCoefficientsBLQFactory::mids$ = NULL;
          bool OceanLoadingCoefficientsBLQFactory::live$ = false;
          ::java::lang::String *OceanLoadingCoefficientsBLQFactory::DEFAULT_BLQ_SUPPORTED_NAMES = NULL;

          jclass OceanLoadingCoefficientsBLQFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoadingCoefficientsBLQFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_2a9119a84e92f14a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getCoefficients_b3cb1d0c3deafefc] = env->getMethodID(cls, "getCoefficients", "(Ljava/lang/String;)Lorg/orekit/models/earth/displacement/OceanLoadingCoefficients;");
              mids$[mid_getSites_a6156df500549a58] = env->getMethodID(cls, "getSites", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_BLQ_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_BLQ_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoadingCoefficientsBLQFactory::OceanLoadingCoefficientsBLQFactory(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

          OceanLoadingCoefficientsBLQFactory::OceanLoadingCoefficientsBLQFactory(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_2a9119a84e92f14a, a0.this$, a1.this$)) {}

          ::org::orekit::models::earth::displacement::OceanLoadingCoefficients OceanLoadingCoefficientsBLQFactory::getCoefficients(const ::java::lang::String & a0) const
          {
            return ::org::orekit::models::earth::displacement::OceanLoadingCoefficients(env->callObjectMethod(this$, mids$[mid_getCoefficients_b3cb1d0c3deafefc], a0.this$));
          }

          ::java::util::List OceanLoadingCoefficientsBLQFactory::getSites() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSites_a6156df500549a58]));
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
        namespace displacement {
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoadingCoefficientsBLQFactory_init_(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getCoefficients(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getSites(t_OceanLoadingCoefficientsBLQFactory *self);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_get__sites(t_OceanLoadingCoefficientsBLQFactory *self, void *data);
          static PyGetSetDef t_OceanLoadingCoefficientsBLQFactory__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadingCoefficientsBLQFactory, sites),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadingCoefficientsBLQFactory__methods_[] = {
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, getCoefficients, METH_O),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, getSites, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadingCoefficientsBLQFactory)[] = {
            { Py_tp_methods, t_OceanLoadingCoefficientsBLQFactory__methods_ },
            { Py_tp_init, (void *) t_OceanLoadingCoefficientsBLQFactory_init_ },
            { Py_tp_getset, t_OceanLoadingCoefficientsBLQFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadingCoefficientsBLQFactory)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(OceanLoadingCoefficientsBLQFactory, t_OceanLoadingCoefficientsBLQFactory, OceanLoadingCoefficientsBLQFactory);

          void t_OceanLoadingCoefficientsBLQFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadingCoefficientsBLQFactory), &PY_TYPE_DEF(OceanLoadingCoefficientsBLQFactory), module, "OceanLoadingCoefficientsBLQFactory", 0);
          }

          void t_OceanLoadingCoefficientsBLQFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "class_", make_descriptor(OceanLoadingCoefficientsBLQFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "wrapfn_", make_descriptor(t_OceanLoadingCoefficientsBLQFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "boxfn_", make_descriptor(boxObject));
            env->getClass(OceanLoadingCoefficientsBLQFactory::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "DEFAULT_BLQ_SUPPORTED_NAMES", make_descriptor(j2p(*OceanLoadingCoefficientsBLQFactory::DEFAULT_BLQ_SUPPORTED_NAMES)));
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadingCoefficientsBLQFactory::initializeClass, 1)))
              return NULL;
            return t_OceanLoadingCoefficientsBLQFactory::wrap_Object(OceanLoadingCoefficientsBLQFactory(((t_OceanLoadingCoefficientsBLQFactory *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadingCoefficientsBLQFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoadingCoefficientsBLQFactory_init_(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                OceanLoadingCoefficientsBLQFactory object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = OceanLoadingCoefficientsBLQFactory(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                OceanLoadingCoefficientsBLQFactory object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = OceanLoadingCoefficientsBLQFactory(a0, a1));
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

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getCoefficients(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::models::earth::displacement::OceanLoadingCoefficients result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.getCoefficients(a0));
              return ::org::orekit::models::earth::displacement::t_OceanLoadingCoefficients::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getCoefficients", arg);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getSites(t_OceanLoadingCoefficientsBLQFactory *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSites());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_get__sites(t_OceanLoadingCoefficientsBLQFactory *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSites());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrameAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrameAlmanac::class$ = NULL;
          jmethodID *SubFrameAlmanac::mids$ = NULL;
          bool SubFrameAlmanac::live$ = false;

          jclass SubFrameAlmanac::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrameAlmanac");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAF0_456d9a2f64d6b28d] = env->getMethodID(cls, "getAF0", "()D");
              mids$[mid_getAF1_456d9a2f64d6b28d] = env->getMethodID(cls, "getAF1", "()D");
              mids$[mid_getDeltai_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltai", "()D");
              mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getLowercaseOmega_456d9a2f64d6b28d] = env->getMethodID(cls, "getLowercaseOmega", "()D");
              mids$[mid_getM0_456d9a2f64d6b28d] = env->getMethodID(cls, "getM0", "()D");
              mids$[mid_getOmegaDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getOmegaDot", "()D");
              mids$[mid_getPRN_f2f64475e4580546] = env->getMethodID(cls, "getPRN", "()I");
              mids$[mid_getSqrtA_456d9a2f64d6b28d] = env->getMethodID(cls, "getSqrtA", "()D");
              mids$[mid_getSvHealth_f2f64475e4580546] = env->getMethodID(cls, "getSvHealth", "()I");
              mids$[mid_getToaA_f2f64475e4580546] = env->getMethodID(cls, "getToaA", "()I");
              mids$[mid_getUppercaseOmega0_456d9a2f64d6b28d] = env->getMethodID(cls, "getUppercaseOmega0", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrameAlmanac::getAF0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF0_456d9a2f64d6b28d]);
          }

          jdouble SubFrameAlmanac::getAF1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF1_456d9a2f64d6b28d]);
          }

          jdouble SubFrameAlmanac::getDeltai() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDeltai_456d9a2f64d6b28d]);
          }

          jdouble SubFrameAlmanac::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
          }

          jdouble SubFrameAlmanac::getLowercaseOmega() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowercaseOmega_456d9a2f64d6b28d]);
          }

          jdouble SubFrameAlmanac::getM0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM0_456d9a2f64d6b28d]);
          }

          jdouble SubFrameAlmanac::getOmegaDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_456d9a2f64d6b28d]);
          }

          jint SubFrameAlmanac::getPRN() const
          {
            return env->callIntMethod(this$, mids$[mid_getPRN_f2f64475e4580546]);
          }

          jdouble SubFrameAlmanac::getSqrtA() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSqrtA_456d9a2f64d6b28d]);
          }

          jint SubFrameAlmanac::getSvHealth() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_f2f64475e4580546]);
          }

          jint SubFrameAlmanac::getToaA() const
          {
            return env->callIntMethod(this$, mids$[mid_getToaA_f2f64475e4580546]);
          }

          jdouble SubFrameAlmanac::getUppercaseOmega0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUppercaseOmega0_456d9a2f64d6b28d]);
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
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrameAlmanac_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameAlmanac_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameAlmanac_getAF0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getAF1(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getDeltai(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getE(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getLowercaseOmega(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getM0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getOmegaDot(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getPRN(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getSqrtA(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getSvHealth(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getToaA(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getUppercaseOmega0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_get__aF0(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__aF1(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__deltai(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__e(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__lowercaseOmega(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__m0(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__omegaDot(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__pRN(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__sqrtA(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__svHealth(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__toaA(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__uppercaseOmega0(t_SubFrameAlmanac *self, void *data);
          static PyGetSetDef t_SubFrameAlmanac__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrameAlmanac, aF0),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, aF1),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, deltai),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, e),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, lowercaseOmega),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, m0),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, omegaDot),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, pRN),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, sqrtA),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, svHealth),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, toaA),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, uppercaseOmega0),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrameAlmanac__methods_[] = {
            DECLARE_METHOD(t_SubFrameAlmanac, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameAlmanac, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameAlmanac, getAF0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getAF1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getDeltai, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getLowercaseOmega, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getM0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getOmegaDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getPRN, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getSqrtA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getSvHealth, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getToaA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getUppercaseOmega0, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrameAlmanac)[] = {
            { Py_tp_methods, t_SubFrameAlmanac__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrameAlmanac__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrameAlmanac)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrameAlmanac, t_SubFrameAlmanac, SubFrameAlmanac);

          void t_SubFrameAlmanac::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrameAlmanac), &PY_TYPE_DEF(SubFrameAlmanac), module, "SubFrameAlmanac", 0);
          }

          void t_SubFrameAlmanac::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "class_", make_descriptor(SubFrameAlmanac::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "wrapfn_", make_descriptor(t_SubFrameAlmanac::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrameAlmanac_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrameAlmanac::initializeClass, 1)))
              return NULL;
            return t_SubFrameAlmanac::wrap_Object(SubFrameAlmanac(((t_SubFrameAlmanac *) arg)->object.this$));
          }
          static PyObject *t_SubFrameAlmanac_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrameAlmanac::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrameAlmanac_getAF0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getAF1(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getDeltai(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDeltai());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getE(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getLowercaseOmega(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getM0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getM0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getOmegaDot(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getPRN(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPRN());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getSqrtA(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSqrtA());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getSvHealth(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvHealth());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getToaA(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getToaA());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getUppercaseOmega0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_get__aF0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__aF1(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__deltai(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDeltai());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__e(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__lowercaseOmega(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__m0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getM0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__omegaDot(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__pRN(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPRN());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__sqrtA(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSqrtA());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__svHealth(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvHealth());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__toaA(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getToaA());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__uppercaseOmega0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistoryMetadata::class$ = NULL;
              jmethodID *AttitudeStateHistoryMetadata::mids$ = NULL;
              bool AttitudeStateHistoryMetadata::live$ = false;

              jclass AttitudeStateHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAttBasis_0090f7797e403f43] = env->getMethodID(cls, "getAttBasis", "()Ljava/lang/String;");
                  mids$[mid_getAttBasisID_0090f7797e403f43] = env->getMethodID(cls, "getAttBasisID", "()Ljava/lang/String;");
                  mids$[mid_getAttID_0090f7797e403f43] = env->getMethodID(cls, "getAttID", "()Ljava/lang/String;");
                  mids$[mid_getAttPrevID_0090f7797e403f43] = env->getMethodID(cls, "getAttPrevID", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeType_ec3c84a694477494] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getEndpoints_160aadf35481229b] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_425debac8563c8f4] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getNbStates_f2f64475e4580546] = env->getMethodID(cls, "getNbStates", "()I");
                  mids$[mid_getRateType_6a98691d179a0a11] = env->getMethodID(cls, "getRateType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_setAttBasis_e939c6558ae8d313] = env->getMethodID(cls, "setAttBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setAttBasisID_e939c6558ae8d313] = env->getMethodID(cls, "setAttBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttID_e939c6558ae8d313] = env->getMethodID(cls, "setAttID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttPrevID_e939c6558ae8d313] = env->getMethodID(cls, "setAttPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeType_3a0e4c42559abb2e] = env->getMethodID(cls, "setAttitudeType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;)V");
                  mids$[mid_setEulerRotSeq_3c290f1c2c08ff0e] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setNbStates_0a2a1ac2721c0336] = env->getMethodID(cls, "setNbStates", "(I)V");
                  mids$[mid_setRateType_153f0895a658f894] = env->getMethodID(cls, "setRateType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeStateHistoryMetadata::AttitudeStateHistoryMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::java::lang::String AttitudeStateHistoryMetadata::getAttBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttBasis_0090f7797e403f43]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttBasisID_0090f7797e403f43]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttID_0090f7797e403f43]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttPrevID_0090f7797e403f43]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeStateHistoryMetadata::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_ec3c84a694477494]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AttitudeStateHistoryMetadata::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_160aadf35481229b]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AttitudeStateHistoryMetadata::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_425debac8563c8f4]));
              }

              jint AttitudeStateHistoryMetadata::getNbStates() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbStates_f2f64475e4580546]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeStateHistoryMetadata::getRateType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateType_6a98691d179a0a11]));
              }

              void AttitudeStateHistoryMetadata::setAttBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttBasis_e939c6558ae8d313], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttBasisID_e939c6558ae8d313], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttID_e939c6558ae8d313], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttPrevID_e939c6558ae8d313], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttitudeType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeType_3a0e4c42559abb2e], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_3c290f1c2c08ff0e], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setNbStates(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbStates_0a2a1ac2721c0336], a0);
              }

              void AttitudeStateHistoryMetadata::setRateType(const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateType_153f0895a658f894], a0.this$);
              }

              void AttitudeStateHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_AttitudeStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeStateHistoryMetadata_init_(t_AttitudeStateHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasis(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasisID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttPrevID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttitudeType(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getEndpoints(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getEulerRotSeq(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getNbStates(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getRateType(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setEulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setNbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setRateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_validate(t_AttitudeStateHistoryMetadata *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasis(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasisID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attPrevID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attitudeType(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__endpoints(t_AttitudeStateHistoryMetadata *self, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__nbStates(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__nbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__rateType(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__rateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeStateHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attBasis),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attBasisID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attPrevID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attitudeType),
                DECLARE_GET_FIELD(t_AttitudeStateHistoryMetadata, endpoints),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, eulerRotSeq),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, nbStates),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, rateType),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttBasis, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttBasisID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttitudeType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getNbStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getRateType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttBasis, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttBasisID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttitudeType, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setNbStates, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setRateType, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistoryMetadata)[] = {
                { Py_tp_methods, t_AttitudeStateHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_AttitudeStateHistoryMetadata_init_ },
                { Py_tp_getset, t_AttitudeStateHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistoryMetadata, t_AttitudeStateHistoryMetadata, AttitudeStateHistoryMetadata);

              void t_AttitudeStateHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistoryMetadata), &PY_TYPE_DEF(AttitudeStateHistoryMetadata), module, "AttitudeStateHistoryMetadata", 0);
              }

              void t_AttitudeStateHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "class_", make_descriptor(AttitudeStateHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "wrapfn_", make_descriptor(t_AttitudeStateHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistoryMetadata::wrap_Object(AttitudeStateHistoryMetadata(((t_AttitudeStateHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeStateHistoryMetadata_init_(t_AttitudeStateHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                AttitudeStateHistoryMetadata object((jobject) NULL);

                INT_CALL(object = AttitudeStateHistoryMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasis(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttBasis());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasisID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttBasisID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttPrevID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttitudeType(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getEndpoints(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getEulerRotSeq(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getNbStates(t_AttitudeStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbStates());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getRateType(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getRateType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttBasis", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttBasisID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setEulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setNbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNbStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNbStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setRateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setRateType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_validate(t_AttitudeStateHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeStateHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasis(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttBasis());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attBasis", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasisID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttBasisID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attBasisID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attPrevID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttPrevID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attPrevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attitudeType(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeType", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__endpoints(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__nbStates(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbStates());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeStateHistoryMetadata_set__nbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNbStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nbStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__rateType(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getRateType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__rateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setRateType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateType", arg);
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
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmConstituent::class$ = NULL;
          jmethodID *NdmConstituent::mids$ = NULL;
          bool NdmConstituent::live$ = false;

          jclass NdmConstituent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmConstituent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConventions_f657aa17e72227da] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_fc8fc85e38e59042] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getHeader_2764986a35b07524] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
              mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_setHeader_10e3029ffe650b4e] = env->getMethodID(cls, "setHeader", "(Lorg/orekit/files/ccsds/section/Header;)V");
              mids$[mid_setSegments_65de9727799c5641] = env->getMethodID(cls, "setSegments", "(Ljava/util/List;)V");
              mids$[mid_validate_7ae3461a92a43152] = env->getMethodID(cls, "validate", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::IERSConventions NdmConstituent::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_f657aa17e72227da]));
          }

          ::org::orekit::data::DataContext NdmConstituent::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_fc8fc85e38e59042]));
          }

          ::org::orekit::files::ccsds::section::Header NdmConstituent::getHeader() const
          {
            return ::org::orekit::files::ccsds::section::Header(env->callObjectMethod(this$, mids$[mid_getHeader_2764986a35b07524]));
          }

          ::java::util::List NdmConstituent::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
          }

          void NdmConstituent::setHeader(const ::org::orekit::files::ccsds::section::Header & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setHeader_10e3029ffe650b4e], a0.this$);
          }

          void NdmConstituent::setSegments(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSegments_65de9727799c5641], a0.this$);
          }

          void NdmConstituent::validate() const
          {
            env->callVoidMethod(this$, mids$[mid_validate_7ae3461a92a43152]);
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
          static PyObject *t_NdmConstituent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmConstituent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmConstituent_of_(t_NdmConstituent *self, PyObject *args);
          static PyObject *t_NdmConstituent_getConventions(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getDataContext(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getHeader(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getSegments(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_setHeader(t_NdmConstituent *self, PyObject *arg);
          static PyObject *t_NdmConstituent_setSegments(t_NdmConstituent *self, PyObject *arg);
          static PyObject *t_NdmConstituent_validate(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_get__conventions(t_NdmConstituent *self, void *data);
          static PyObject *t_NdmConstituent_get__dataContext(t_NdmConstituent *self, void *data);
          static PyObject *t_NdmConstituent_get__header(t_NdmConstituent *self, void *data);
          static int t_NdmConstituent_set__header(t_NdmConstituent *self, PyObject *arg, void *data);
          static PyObject *t_NdmConstituent_get__segments(t_NdmConstituent *self, void *data);
          static int t_NdmConstituent_set__segments(t_NdmConstituent *self, PyObject *arg, void *data);
          static PyObject *t_NdmConstituent_get__parameters_(t_NdmConstituent *self, void *data);
          static PyGetSetDef t_NdmConstituent__fields_[] = {
            DECLARE_GET_FIELD(t_NdmConstituent, conventions),
            DECLARE_GET_FIELD(t_NdmConstituent, dataContext),
            DECLARE_GETSET_FIELD(t_NdmConstituent, header),
            DECLARE_GETSET_FIELD(t_NdmConstituent, segments),
            DECLARE_GET_FIELD(t_NdmConstituent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NdmConstituent__methods_[] = {
            DECLARE_METHOD(t_NdmConstituent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmConstituent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmConstituent, of_, METH_VARARGS),
            DECLARE_METHOD(t_NdmConstituent, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getHeader, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getSegments, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, setHeader, METH_O),
            DECLARE_METHOD(t_NdmConstituent, setSegments, METH_O),
            DECLARE_METHOD(t_NdmConstituent, validate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmConstituent)[] = {
            { Py_tp_methods, t_NdmConstituent__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NdmConstituent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmConstituent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NdmConstituent, t_NdmConstituent, NdmConstituent);
          PyObject *t_NdmConstituent::wrap_Object(const NdmConstituent& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_NdmConstituent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmConstituent *self = (t_NdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_NdmConstituent::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_NdmConstituent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmConstituent *self = (t_NdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_NdmConstituent::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmConstituent), &PY_TYPE_DEF(NdmConstituent), module, "NdmConstituent", 0);
          }

          void t_NdmConstituent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "class_", make_descriptor(NdmConstituent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "wrapfn_", make_descriptor(t_NdmConstituent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmConstituent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmConstituent::initializeClass, 1)))
              return NULL;
            return t_NdmConstituent::wrap_Object(NdmConstituent(((t_NdmConstituent *) arg)->object.this$));
          }
          static PyObject *t_NdmConstituent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmConstituent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NdmConstituent_of_(t_NdmConstituent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NdmConstituent_getConventions(t_NdmConstituent *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getDataContext(t_NdmConstituent *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getHeader(t_NdmConstituent *self)
          {
            ::org::orekit::files::ccsds::section::Header result((jobject) NULL);
            OBJ_CALL(result = self->object.getHeader());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Header::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getSegments(t_NdmConstituent *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
          }

          static PyObject *t_NdmConstituent_setHeader(t_NdmConstituent *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::section::Header a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setHeader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setHeader", arg);
            return NULL;
          }

          static PyObject *t_NdmConstituent_setSegments(t_NdmConstituent *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setSegments(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSegments", arg);
            return NULL;
          }

          static PyObject *t_NdmConstituent_validate(t_NdmConstituent *self)
          {
            OBJ_CALL(self->object.validate());
            Py_RETURN_NONE;
          }
          static PyObject *t_NdmConstituent_get__parameters_(t_NdmConstituent *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_NdmConstituent_get__conventions(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_NdmConstituent_get__dataContext(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_NdmConstituent_get__header(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
            OBJ_CALL(value = self->object.getHeader());
            return ::org::orekit::files::ccsds::section::t_Header::wrap_Object(value);
          }
          static int t_NdmConstituent_set__header(t_NdmConstituent *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
              {
                INT_CALL(self->object.setHeader(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "header", arg);
            return -1;
          }

          static PyObject *t_NdmConstituent_get__segments(t_NdmConstituent *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_NdmConstituent_set__segments(t_NdmConstituent *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setSegments(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "segments", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *CenterName::class$ = NULL;
          jmethodID *CenterName::mids$ = NULL;
          bool CenterName::live$ = false;
          CenterName *CenterName::EARTH = NULL;
          CenterName *CenterName::EARTH_MOON = NULL;
          CenterName *CenterName::JUPITER = NULL;
          CenterName *CenterName::MARS = NULL;
          CenterName *CenterName::MERCURY = NULL;
          CenterName *CenterName::MOON = NULL;
          CenterName *CenterName::NEPTUNE = NULL;
          CenterName *CenterName::PLUTO = NULL;
          CenterName *CenterName::SATURN = NULL;
          CenterName *CenterName::SOLAR_SYSTEM_BARYCENTER = NULL;
          CenterName *CenterName::SUN = NULL;
          CenterName *CenterName::URANUS = NULL;
          CenterName *CenterName::VENUS = NULL;

          jclass CenterName::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/CenterName");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCelestialBody_798caa59db6076aa] = env->getMethodID(cls, "getCelestialBody", "()Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_getCelestialBody_86edba62e1b0c8fe] = env->getMethodID(cls, "getCelestialBody", "(Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_guessCenter_febdc9b326bc0d01] = env->getStaticMethodID(cls, "guessCenter", "(Lorg/orekit/frames/Frame;)Ljava/lang/String;");
              mids$[mid_map_51935237629eb555] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/CenterName;");
              mids$[mid_valueOf_60ea843e15b39289] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CenterName;");
              mids$[mid_values_3a5200f01c72cf94] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/CenterName;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EARTH = new CenterName(env->getStaticObjectField(cls, "EARTH", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              EARTH_MOON = new CenterName(env->getStaticObjectField(cls, "EARTH_MOON", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              JUPITER = new CenterName(env->getStaticObjectField(cls, "JUPITER", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MARS = new CenterName(env->getStaticObjectField(cls, "MARS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MERCURY = new CenterName(env->getStaticObjectField(cls, "MERCURY", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MOON = new CenterName(env->getStaticObjectField(cls, "MOON", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              NEPTUNE = new CenterName(env->getStaticObjectField(cls, "NEPTUNE", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              PLUTO = new CenterName(env->getStaticObjectField(cls, "PLUTO", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SATURN = new CenterName(env->getStaticObjectField(cls, "SATURN", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SOLAR_SYSTEM_BARYCENTER = new CenterName(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SUN = new CenterName(env->getStaticObjectField(cls, "SUN", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              URANUS = new CenterName(env->getStaticObjectField(cls, "URANUS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              VENUS = new CenterName(env->getStaticObjectField(cls, "VENUS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::bodies::CelestialBody CenterName::getCelestialBody() const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getCelestialBody_798caa59db6076aa]));
          }

          ::org::orekit::bodies::CelestialBody CenterName::getCelestialBody(const ::org::orekit::bodies::CelestialBodies & a0) const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getCelestialBody_86edba62e1b0c8fe], a0.this$));
          }

          ::java::lang::String CenterName::guessCenter(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_guessCenter_febdc9b326bc0d01], a0.this$));
          }

          CenterName CenterName::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CenterName(env->callStaticObjectMethod(cls, mids$[mid_map_51935237629eb555], a0.this$));
          }

          CenterName CenterName::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CenterName(env->callStaticObjectMethod(cls, mids$[mid_valueOf_60ea843e15b39289], a0.this$));
          }

          JArray< CenterName > CenterName::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CenterName >(env->callStaticObjectMethod(cls, mids$[mid_values_3a5200f01c72cf94]));
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
        namespace definitions {
          static PyObject *t_CenterName_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_of_(t_CenterName *self, PyObject *args);
          static PyObject *t_CenterName_getCelestialBody(t_CenterName *self, PyObject *args);
          static PyObject *t_CenterName_guessCenter(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CenterName_values(PyTypeObject *type);
          static PyObject *t_CenterName_get__celestialBody(t_CenterName *self, void *data);
          static PyObject *t_CenterName_get__parameters_(t_CenterName *self, void *data);
          static PyGetSetDef t_CenterName__fields_[] = {
            DECLARE_GET_FIELD(t_CenterName, celestialBody),
            DECLARE_GET_FIELD(t_CenterName, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CenterName__methods_[] = {
            DECLARE_METHOD(t_CenterName, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, of_, METH_VARARGS),
            DECLARE_METHOD(t_CenterName, getCelestialBody, METH_VARARGS),
            DECLARE_METHOD(t_CenterName, guessCenter, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CenterName, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CenterName)[] = {
            { Py_tp_methods, t_CenterName__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CenterName__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CenterName)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CenterName, t_CenterName, CenterName);
          PyObject *t_CenterName::wrap_Object(const CenterName& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CenterName::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CenterName *self = (t_CenterName *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CenterName::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CenterName::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CenterName *self = (t_CenterName *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CenterName::install(PyObject *module)
          {
            installType(&PY_TYPE(CenterName), &PY_TYPE_DEF(CenterName), module, "CenterName", 0);
          }

          void t_CenterName::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "class_", make_descriptor(CenterName::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "wrapfn_", make_descriptor(t_CenterName::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "boxfn_", make_descriptor(boxObject));
            env->getClass(CenterName::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "EARTH", make_descriptor(t_CenterName::wrap_Object(*CenterName::EARTH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "EARTH_MOON", make_descriptor(t_CenterName::wrap_Object(*CenterName::EARTH_MOON)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "JUPITER", make_descriptor(t_CenterName::wrap_Object(*CenterName::JUPITER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MARS", make_descriptor(t_CenterName::wrap_Object(*CenterName::MARS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MERCURY", make_descriptor(t_CenterName::wrap_Object(*CenterName::MERCURY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MOON", make_descriptor(t_CenterName::wrap_Object(*CenterName::MOON)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "NEPTUNE", make_descriptor(t_CenterName::wrap_Object(*CenterName::NEPTUNE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "PLUTO", make_descriptor(t_CenterName::wrap_Object(*CenterName::PLUTO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SATURN", make_descriptor(t_CenterName::wrap_Object(*CenterName::SATURN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(t_CenterName::wrap_Object(*CenterName::SOLAR_SYSTEM_BARYCENTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SUN", make_descriptor(t_CenterName::wrap_Object(*CenterName::SUN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "URANUS", make_descriptor(t_CenterName::wrap_Object(*CenterName::URANUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "VENUS", make_descriptor(t_CenterName::wrap_Object(*CenterName::VENUS)));
          }

          static PyObject *t_CenterName_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CenterName::initializeClass, 1)))
              return NULL;
            return t_CenterName::wrap_Object(CenterName(((t_CenterName *) arg)->object.this$));
          }
          static PyObject *t_CenterName_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CenterName::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CenterName_of_(t_CenterName *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CenterName_getCelestialBody(t_CenterName *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::orekit::bodies::CelestialBody result((jobject) NULL);
                OBJ_CALL(result = self->object.getCelestialBody());
                return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::bodies::CelestialBodies a0((jobject) NULL);
                ::org::orekit::bodies::CelestialBody result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getCelestialBody(a0));
                  return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getCelestialBody", args);
            return NULL;
          }

          static PyObject *t_CenterName_guessCenter(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::guessCenter(a0));
              return j2p(result);
            }

            PyErr_SetArgsError(type, "guessCenter", arg);
            return NULL;
          }

          static PyObject *t_CenterName_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            CenterName result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::map(a0));
              return t_CenterName::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_CenterName_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CenterName result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::valueOf(a0));
              return t_CenterName::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CenterName_values(PyTypeObject *type)
          {
            JArray< CenterName > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::values());
            return JArray<jobject>(result.this$).wrap(t_CenterName::wrap_jobject);
          }
          static PyObject *t_CenterName_get__parameters_(t_CenterName *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CenterName_get__celestialBody(t_CenterName *self, void *data)
          {
            ::org::orekit::bodies::CelestialBody value((jobject) NULL);
            OBJ_CALL(value = self->object.getCelestialBody());
            return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
          }
        }
      }
    }
  }
}
