#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "java/util/Collection.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToGroundMapping.h"
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
              mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_addGroundMapping_8e6e13960e940d33] = env->getMethodID(cls, "addGroundMapping", "(Lorg/orekit/rugged/adjustment/measurements/SensorToGroundMapping;)V");
              mids$[mid_addInterMapping_33f55f90ed9a2941] = env->getMethodID(cls, "addInterMapping", "(Lorg/orekit/rugged/adjustment/measurements/SensorToSensorMapping;)V");
              mids$[mid_getGroundMapping_1d3ad911c8b09b5e] = env->getMethodID(cls, "getGroundMapping", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/rugged/adjustment/measurements/SensorToGroundMapping;");
              mids$[mid_getGroundMappings_cb666ea1a15f5210] = env->getMethodID(cls, "getGroundMappings", "()Ljava/util/Collection;");
              mids$[mid_getInterMapping_280eb85d4190bd68] = env->getMethodID(cls, "getInterMapping", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/rugged/adjustment/measurements/SensorToSensorMapping;");
              mids$[mid_getInterMappings_cb666ea1a15f5210] = env->getMethodID(cls, "getInterMappings", "()Ljava/util/Collection;");
              mids$[mid_getNbModels_55546ef6a647f39b] = env->getMethodID(cls, "getNbModels", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Observables::Observables(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

          void Observables::addGroundMapping(const ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGroundMapping_8e6e13960e940d33], a0.this$);
          }

          void Observables::addInterMapping(const ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addInterMapping_33f55f90ed9a2941], a0.this$);
          }

          ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping Observables::getGroundMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) const
          {
            return ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping(env->callObjectMethod(this$, mids$[mid_getGroundMapping_1d3ad911c8b09b5e], a0.this$, a1.this$));
          }

          ::java::util::Collection Observables::getGroundMappings() const
          {
            return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getGroundMappings_cb666ea1a15f5210]));
          }

          ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping Observables::getInterMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) const
          {
            return ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping(env->callObjectMethod(this$, mids$[mid_getInterMapping_280eb85d4190bd68], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::java::util::Collection Observables::getInterMappings() const
          {
            return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getInterMappings_cb666ea1a15f5210]));
          }

          jint Observables::getNbModels() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbModels_55546ef6a647f39b]);
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
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *SumOfLogs::class$ = NULL;
          jmethodID *SumOfLogs::mids$ = NULL;
          bool SumOfLogs::live$ = false;

          jclass SumOfLogs::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/SumOfLogs");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_2f567ea6ff0bfe8c] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_f7eb836b073b76c1] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SumOfLogs::SumOfLogs() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void SumOfLogs::aggregate(const SumOfLogs & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_2f567ea6ff0bfe8c], a0.this$);
          }

          void SumOfLogs::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          SumOfLogs SumOfLogs::copy() const
          {
            return SumOfLogs(env->callObjectMethod(this$, mids$[mid_copy_f7eb836b073b76c1]));
          }

          jdouble SumOfLogs::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jlong SumOfLogs::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble SumOfLogs::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void SumOfLogs::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
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
        namespace summary {
          static PyObject *t_SumOfLogs_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SumOfLogs_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SumOfLogs_init_(t_SumOfLogs *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SumOfLogs_aggregate(t_SumOfLogs *self, PyObject *arg);
          static PyObject *t_SumOfLogs_clear(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_copy(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_evaluate(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_getN(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_getResult(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_increment(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_get__n(t_SumOfLogs *self, void *data);
          static PyObject *t_SumOfLogs_get__result(t_SumOfLogs *self, void *data);
          static PyGetSetDef t_SumOfLogs__fields_[] = {
            DECLARE_GET_FIELD(t_SumOfLogs, n),
            DECLARE_GET_FIELD(t_SumOfLogs, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SumOfLogs__methods_[] = {
            DECLARE_METHOD(t_SumOfLogs, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfLogs, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfLogs, aggregate, METH_O),
            DECLARE_METHOD(t_SumOfLogs, clear, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, copy, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, getN, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SumOfLogs)[] = {
            { Py_tp_methods, t_SumOfLogs__methods_ },
            { Py_tp_init, (void *) t_SumOfLogs_init_ },
            { Py_tp_getset, t_SumOfLogs__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SumOfLogs)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SumOfLogs, t_SumOfLogs, SumOfLogs);

          void t_SumOfLogs::install(PyObject *module)
          {
            installType(&PY_TYPE(SumOfLogs), &PY_TYPE_DEF(SumOfLogs), module, "SumOfLogs", 0);
          }

          void t_SumOfLogs::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "class_", make_descriptor(SumOfLogs::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "wrapfn_", make_descriptor(t_SumOfLogs::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SumOfLogs_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SumOfLogs::initializeClass, 1)))
              return NULL;
            return t_SumOfLogs::wrap_Object(SumOfLogs(((t_SumOfLogs *) arg)->object.this$));
          }
          static PyObject *t_SumOfLogs_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SumOfLogs::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SumOfLogs_init_(t_SumOfLogs *self, PyObject *args, PyObject *kwds)
          {
            SumOfLogs object((jobject) NULL);

            INT_CALL(object = SumOfLogs());
            self->object = object;

            return 0;
          }

          static PyObject *t_SumOfLogs_aggregate(t_SumOfLogs *self, PyObject *arg)
          {
            SumOfLogs a0((jobject) NULL);

            if (!parseArg(arg, "k", SumOfLogs::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SumOfLogs_clear(t_SumOfLogs *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SumOfLogs_copy(t_SumOfLogs *self, PyObject *args)
          {
            SumOfLogs result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SumOfLogs::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SumOfLogs_evaluate(t_SumOfLogs *self, PyObject *args)
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

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SumOfLogs_getN(t_SumOfLogs *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_SumOfLogs_getResult(t_SumOfLogs *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SumOfLogs_increment(t_SumOfLogs *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SumOfLogs_get__n(t_SumOfLogs *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_SumOfLogs_get__result(t_SumOfLogs *self, void *data)
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
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/stream/Stream.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *LineSensor::class$ = NULL;
        jmethodID *LineSensor::mids$ = NULL;
        bool LineSensor::live$ = false;

        jclass LineSensor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/LineSensor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1cf725ce5c7fae72] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/rugged/linesensor/LineDatation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/los/TimeDependentLOS;)V");
            mids$[mid_dumpRate_8ba9fe7a847cecad] = env->getMethodID(cls, "dumpRate", "(D)V");
            mids$[mid_getDate_f359a0110559347a] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLOS_6fb34ebfd1928e89] = env->getMethodID(cls, "getLOS", "(Lorg/orekit/time/AbsoluteDate;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOS_81db334e9ae8d0f0] = env->getMethodID(cls, "getLOS", "(Lorg/orekit/time/AbsoluteDate;I)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOSDerivatives_4d0e33e8d7307935] = env->getMethodID(cls, "getLOSDerivatives", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getLOSDerivatives_8c1346b73fbd45ff] = env->getMethodID(cls, "getLOSDerivatives", "(Lorg/orekit/time/AbsoluteDate;ILorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getLine_fd347811007a6ba3] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getNbPixels_55546ef6a647f39b] = env->getMethodID(cls, "getNbPixels", "()I");
            mids$[mid_getParametersDrivers_14e21bf777ff0ccf] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_getPosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getRate_04fd0666b613d2ab] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LineSensor::LineSensor(const ::java::lang::String & a0, const ::org::orekit::rugged::linesensor::LineDatation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::los::TimeDependentLOS & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1cf725ce5c7fae72, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void LineSensor::dumpRate(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_dumpRate_8ba9fe7a847cecad], a0);
        }

        ::org::orekit::time::AbsoluteDate LineSensor::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f359a0110559347a], a0));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getLOS(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_6fb34ebfd1928e89], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getLOS(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_81db334e9ae8d0f0], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LineSensor::getLOSDerivatives(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_4d0e33e8d7307935], a0.this$, a1, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LineSensor::getLOSDerivatives(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_8c1346b73fbd45ff], a0.this$, a1, a2.this$));
        }

        jdouble LineSensor::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_fd347811007a6ba3], a0.this$);
        }

        ::java::lang::String LineSensor::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        jint LineSensor::getNbPixels() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixels_55546ef6a647f39b]);
        }

        ::java::util::stream::Stream LineSensor::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_14e21bf777ff0ccf]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_8b724f8b4fdad1a2]));
        }

        jdouble LineSensor::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_04fd0666b613d2ab], a0);
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
        static PyObject *t_LineSensor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LineSensor_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LineSensor_init_(t_LineSensor *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LineSensor_dumpRate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getDate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getLOS(t_LineSensor *self, PyObject *args);
        static PyObject *t_LineSensor_getLOSDerivatives(t_LineSensor *self, PyObject *args);
        static PyObject *t_LineSensor_getLine(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getName(t_LineSensor *self);
        static PyObject *t_LineSensor_getNbPixels(t_LineSensor *self);
        static PyObject *t_LineSensor_getParametersDrivers(t_LineSensor *self);
        static PyObject *t_LineSensor_getPosition(t_LineSensor *self);
        static PyObject *t_LineSensor_getRate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_get__name(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__nbPixels(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__parametersDrivers(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__position(t_LineSensor *self, void *data);
        static PyGetSetDef t_LineSensor__fields_[] = {
          DECLARE_GET_FIELD(t_LineSensor, name),
          DECLARE_GET_FIELD(t_LineSensor, nbPixels),
          DECLARE_GET_FIELD(t_LineSensor, parametersDrivers),
          DECLARE_GET_FIELD(t_LineSensor, position),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LineSensor__methods_[] = {
          DECLARE_METHOD(t_LineSensor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineSensor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineSensor, dumpRate, METH_O),
          DECLARE_METHOD(t_LineSensor, getDate, METH_O),
          DECLARE_METHOD(t_LineSensor, getLOS, METH_VARARGS),
          DECLARE_METHOD(t_LineSensor, getLOSDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_LineSensor, getLine, METH_O),
          DECLARE_METHOD(t_LineSensor, getName, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getNbPixels, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getRate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LineSensor)[] = {
          { Py_tp_methods, t_LineSensor__methods_ },
          { Py_tp_init, (void *) t_LineSensor_init_ },
          { Py_tp_getset, t_LineSensor__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LineSensor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LineSensor, t_LineSensor, LineSensor);

        void t_LineSensor::install(PyObject *module)
        {
          installType(&PY_TYPE(LineSensor), &PY_TYPE_DEF(LineSensor), module, "LineSensor", 0);
        }

        void t_LineSensor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "class_", make_descriptor(LineSensor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "wrapfn_", make_descriptor(t_LineSensor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LineSensor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LineSensor::initializeClass, 1)))
            return NULL;
          return t_LineSensor::wrap_Object(LineSensor(((t_LineSensor *) arg)->object.this$));
        }
        static PyObject *t_LineSensor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LineSensor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LineSensor_init_(t_LineSensor *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineDatation a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::los::TimeDependentLOS a3((jobject) NULL);
          LineSensor object((jobject) NULL);

          if (!parseArgs(args, "skkk", ::org::orekit::rugged::linesensor::LineDatation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::los::TimeDependentLOS::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = LineSensor(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LineSensor_dumpRate(t_LineSensor *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.dumpRate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "dumpRate", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_getDate(t_LineSensor *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getDate(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDate", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_getLOS(t_LineSensor *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLOS", args);
          return NULL;
        }

        static PyObject *t_LineSensor_getLOSDerivatives(t_LineSensor *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "kDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jint a1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "kIK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLOSDerivatives", args);
          return NULL;
        }

        static PyObject *t_LineSensor_getLine(t_LineSensor *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLine(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLine", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_getName(t_LineSensor *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_LineSensor_getNbPixels(t_LineSensor *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixels());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_LineSensor_getParametersDrivers(t_LineSensor *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LineSensor_getPosition(t_LineSensor *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_LineSensor_getRate(t_LineSensor *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRate", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_get__name(t_LineSensor *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_LineSensor_get__nbPixels(t_LineSensor *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixels());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_LineSensor_get__parametersDrivers(t_LineSensor *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_LineSensor_get__position(t_LineSensor *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *TDOA::class$ = NULL;
        jmethodID *TDOA::mids$ = NULL;
        bool TDOA::live$ = false;
        ::java::lang::String *TDOA::MEASUREMENT_TYPE = NULL;

        jclass TDOA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/TDOA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd3e59569738d7bf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimeStation_e5278a7660eeb13f] = env->getMethodID(cls, "getPrimeStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondStation_e5278a7660eeb13f] = env->getMethodID(cls, "getSecondStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TDOA::TDOA(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_bd3e59569738d7bf, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation TDOA::getPrimeStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimeStation_e5278a7660eeb13f]));
        }

        ::org::orekit::estimation::measurements::GroundStation TDOA::getSecondStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondStation_e5278a7660eeb13f]));
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
        static PyObject *t_TDOA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TDOA_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TDOA_of_(t_TDOA *self, PyObject *args);
        static int t_TDOA_init_(t_TDOA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TDOA_getPrimeStation(t_TDOA *self);
        static PyObject *t_TDOA_getSecondStation(t_TDOA *self);
        static PyObject *t_TDOA_get__primeStation(t_TDOA *self, void *data);
        static PyObject *t_TDOA_get__secondStation(t_TDOA *self, void *data);
        static PyObject *t_TDOA_get__parameters_(t_TDOA *self, void *data);
        static PyGetSetDef t_TDOA__fields_[] = {
          DECLARE_GET_FIELD(t_TDOA, primeStation),
          DECLARE_GET_FIELD(t_TDOA, secondStation),
          DECLARE_GET_FIELD(t_TDOA, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TDOA__methods_[] = {
          DECLARE_METHOD(t_TDOA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDOA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDOA, of_, METH_VARARGS),
          DECLARE_METHOD(t_TDOA, getPrimeStation, METH_NOARGS),
          DECLARE_METHOD(t_TDOA, getSecondStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TDOA)[] = {
          { Py_tp_methods, t_TDOA__methods_ },
          { Py_tp_init, (void *) t_TDOA_init_ },
          { Py_tp_getset, t_TDOA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TDOA)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(TDOA, t_TDOA, TDOA);
        PyObject *t_TDOA::wrap_Object(const TDOA& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TDOA::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TDOA *self = (t_TDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TDOA::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TDOA::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TDOA *self = (t_TDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TDOA::install(PyObject *module)
        {
          installType(&PY_TYPE(TDOA), &PY_TYPE_DEF(TDOA), module, "TDOA", 0);
        }

        void t_TDOA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "class_", make_descriptor(TDOA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "wrapfn_", make_descriptor(t_TDOA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "boxfn_", make_descriptor(boxObject));
          env->getClass(TDOA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "MEASUREMENT_TYPE", make_descriptor(j2p(*TDOA::MEASUREMENT_TYPE)));
        }

        static PyObject *t_TDOA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TDOA::initializeClass, 1)))
            return NULL;
          return t_TDOA::wrap_Object(TDOA(((t_TDOA *) arg)->object.this$));
        }
        static PyObject *t_TDOA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TDOA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TDOA_of_(t_TDOA *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_TDOA_init_(t_TDOA *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          TDOA object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = TDOA(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TDOA);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TDOA_getPrimeStation(t_TDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_TDOA_getSecondStation(t_TDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_TDOA_get__parameters_(t_TDOA *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_TDOA_get__primeStation(t_TDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_TDOA_get__secondStation(t_TDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/HypergeometricDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *HypergeometricDistribution::class$ = NULL;
        jmethodID *HypergeometricDistribution::mids$ = NULL;
        bool HypergeometricDistribution::live$ = false;

        jclass HypergeometricDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/HypergeometricDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a0df4b8e4ed3805e] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_cumulativeProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfSuccesses_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfSuccesses", "()I");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPopulationSize_55546ef6a647f39b] = env->getMethodID(cls, "getPopulationSize", "()I");
            mids$[mid_getSampleSize_55546ef6a647f39b] = env->getMethodID(cls, "getSampleSize", "()I");
            mids$[mid_getSupportLowerBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_2afcbc21f4e57ab2] = env->getMethodID(cls, "probability", "(I)D");
            mids$[mid_upperCumulativeProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "upperCumulativeProbability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HypergeometricDistribution::HypergeometricDistribution(jint a0, jint a1, jint a2) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_a0df4b8e4ed3805e, a0, a1, a2)) {}

        jdouble HypergeometricDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_2afcbc21f4e57ab2], a0);
        }

        jint HypergeometricDistribution::getNumberOfSuccesses() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfSuccesses_55546ef6a647f39b]);
        }

        jdouble HypergeometricDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble HypergeometricDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jint HypergeometricDistribution::getPopulationSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getPopulationSize_55546ef6a647f39b]);
        }

        jint HypergeometricDistribution::getSampleSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSampleSize_55546ef6a647f39b]);
        }

        jint HypergeometricDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_55546ef6a647f39b]);
        }

        jint HypergeometricDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_55546ef6a647f39b]);
        }

        jboolean HypergeometricDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble HypergeometricDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_2afcbc21f4e57ab2], a0);
        }

        jdouble HypergeometricDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_2afcbc21f4e57ab2], a0);
        }

        jdouble HypergeometricDistribution::upperCumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_upperCumulativeProbability_2afcbc21f4e57ab2], a0);
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
    namespace distribution {
      namespace discrete {
        static PyObject *t_HypergeometricDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HypergeometricDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HypergeometricDistribution_init_(t_HypergeometricDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HypergeometricDistribution_cumulativeProbability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getNumberOfSuccesses(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getNumericalMean(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getNumericalVariance(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getPopulationSize(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getSampleSize(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getSupportLowerBound(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getSupportUpperBound(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_isSupportConnected(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_logProbability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_probability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_upperCumulativeProbability(t_HypergeometricDistribution *self, PyObject *arg);
        static PyObject *t_HypergeometricDistribution_get__numberOfSuccesses(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__numericalMean(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__numericalVariance(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__populationSize(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__sampleSize(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportConnected(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportLowerBound(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportUpperBound(t_HypergeometricDistribution *self, void *data);
        static PyGetSetDef t_HypergeometricDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numberOfSuccesses),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numericalMean),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, populationSize),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, sampleSize),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportConnected),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HypergeometricDistribution__methods_[] = {
          DECLARE_METHOD(t_HypergeometricDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HypergeometricDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HypergeometricDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumberOfSuccesses, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getPopulationSize, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSampleSize, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, probability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, upperCumulativeProbability, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HypergeometricDistribution)[] = {
          { Py_tp_methods, t_HypergeometricDistribution__methods_ },
          { Py_tp_init, (void *) t_HypergeometricDistribution_init_ },
          { Py_tp_getset, t_HypergeometricDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HypergeometricDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(HypergeometricDistribution, t_HypergeometricDistribution, HypergeometricDistribution);

        void t_HypergeometricDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(HypergeometricDistribution), &PY_TYPE_DEF(HypergeometricDistribution), module, "HypergeometricDistribution", 0);
        }

        void t_HypergeometricDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "class_", make_descriptor(HypergeometricDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "wrapfn_", make_descriptor(t_HypergeometricDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HypergeometricDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HypergeometricDistribution::initializeClass, 1)))
            return NULL;
          return t_HypergeometricDistribution::wrap_Object(HypergeometricDistribution(((t_HypergeometricDistribution *) arg)->object.this$));
        }
        static PyObject *t_HypergeometricDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HypergeometricDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HypergeometricDistribution_init_(t_HypergeometricDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jint a2;
          HypergeometricDistribution object((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            INT_CALL(object = HypergeometricDistribution(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HypergeometricDistribution_cumulativeProbability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getNumberOfSuccesses(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getNumericalMean(t_HypergeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getNumericalVariance(t_HypergeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getPopulationSize(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPopulationSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getSampleSize(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSampleSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getSupportLowerBound(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getSupportUpperBound(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_isSupportConnected(t_HypergeometricDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_logProbability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_probability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_upperCumulativeProbability(t_HypergeometricDistribution *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.upperCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "upperCumulativeProbability", arg);
          return NULL;
        }

        static PyObject *t_HypergeometricDistribution_get__numberOfSuccesses(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__numericalMean(t_HypergeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HypergeometricDistribution_get__numericalVariance(t_HypergeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HypergeometricDistribution_get__populationSize(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPopulationSize());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__sampleSize(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSampleSize());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportConnected(t_HypergeometricDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportLowerBound(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportUpperBound(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/PythonTLEPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *PythonTLEPropagator::class$ = NULL;
          jmethodID *PythonTLEPropagator::mids$ = NULL;
          bool PythonTLEPropagator::live$ = false;

          jclass PythonTLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/PythonTLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7a5e69c032c7e921] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_3b79aaf1b59208bb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_sxpInitialize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_8ba9fe7a847cecad] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTLEPropagator::PythonTLEPropagator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_7a5e69c032c7e921, a0.this$, a1.this$, a2)) {}

          PythonTLEPropagator::PythonTLEPropagator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_3b79aaf1b59208bb, a0.this$, a1.this$, a2, a3.this$)) {}

          void PythonTLEPropagator::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonTLEPropagator::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonTLEPropagator::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonTLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTLEPropagator_init_(t_PythonTLEPropagator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTLEPropagator_finalize(t_PythonTLEPropagator *self);
          static PyObject *t_PythonTLEPropagator_pythonExtension(t_PythonTLEPropagator *self, PyObject *args);
          static void JNICALL t_PythonTLEPropagator_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTLEPropagator_sxpInitialize1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTLEPropagator_sxpPropagate2(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PythonTLEPropagator_get__self(t_PythonTLEPropagator *self, void *data);
          static PyGetSetDef t_PythonTLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTLEPropagator, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTLEPropagator__methods_[] = {
            DECLARE_METHOD(t_PythonTLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTLEPropagator, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTLEPropagator, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTLEPropagator)[] = {
            { Py_tp_methods, t_PythonTLEPropagator__methods_ },
            { Py_tp_init, (void *) t_PythonTLEPropagator_init_ },
            { Py_tp_getset, t_PythonTLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(PythonTLEPropagator, t_PythonTLEPropagator, PythonTLEPropagator);

          void t_PythonTLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTLEPropagator), &PY_TYPE_DEF(PythonTLEPropagator), module, "PythonTLEPropagator", 1);
          }

          void t_PythonTLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "class_", make_descriptor(PythonTLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "wrapfn_", make_descriptor(t_PythonTLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTLEPropagator::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonTLEPropagator_pythonDecRef0 },
              { "sxpInitialize", "()V", (void *) t_PythonTLEPropagator_sxpInitialize1 },
              { "sxpPropagate", "(D)V", (void *) t_PythonTLEPropagator_sxpPropagate2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonTLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTLEPropagator::initializeClass, 1)))
              return NULL;
            return t_PythonTLEPropagator::wrap_Object(PythonTLEPropagator(((t_PythonTLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_PythonTLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTLEPropagator_init_(t_PythonTLEPropagator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                PythonTLEPropagator object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonTLEPropagator(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                PythonTLEPropagator object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonTLEPropagator(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTLEPropagator_finalize(t_PythonTLEPropagator *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTLEPropagator_pythonExtension(t_PythonTLEPropagator *self, PyObject *args)
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

          static void JNICALL t_PythonTLEPropagator_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonTLEPropagator_sxpInitialize1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "sxpInitialize", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonTLEPropagator_sxpPropagate2(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "sxpPropagate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonTLEPropagator_get__self(t_PythonTLEPropagator *self, void *data)
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
#include "org/orekit/files/rinex/navigation/SystemTimeOffsetMessage.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *SystemTimeOffsetMessage::class$ = NULL;
          jmethodID *SystemTimeOffsetMessage::mids$ = NULL;
          bool SystemTimeOffsetMessage::live$ = false;

          jclass SystemTimeOffsetMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/SystemTimeOffsetMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2f7855eb8fb85f32] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getA0_b74f83833fdad017] = env->getMethodID(cls, "getA0", "()D");
              mids$[mid_getA1_b74f83833fdad017] = env->getMethodID(cls, "getA1", "()D");
              mids$[mid_getA2_b74f83833fdad017] = env->getMethodID(cls, "getA2", "()D");
              mids$[mid_getDefinedTimeSystem_28830357acffb3e1] = env->getMethodID(cls, "getDefinedTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getReferenceEpoch_c325492395d89b24] = env->getMethodID(cls, "getReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getReferenceTimeSystem_28830357acffb3e1] = env->getMethodID(cls, "getReferenceTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getSbasId_edaeb02a93410c90] = env->getMethodID(cls, "getSbasId", "()Lorg/orekit/files/rinex/navigation/SbasId;");
              mids$[mid_getTransmissionTime_b74f83833fdad017] = env->getMethodID(cls, "getTransmissionTime", "()D");
              mids$[mid_getUtcId_2e5abf1a6dc741a8] = env->getMethodID(cls, "getUtcId", "()Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_setA0_8ba9fe7a847cecad] = env->getMethodID(cls, "setA0", "(D)V");
              mids$[mid_setA1_8ba9fe7a847cecad] = env->getMethodID(cls, "setA1", "(D)V");
              mids$[mid_setA2_8ba9fe7a847cecad] = env->getMethodID(cls, "setA2", "(D)V");
              mids$[mid_setDefinedTimeSystem_885124f6a0a748ea] = env->getMethodID(cls, "setDefinedTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
              mids$[mid_setReferenceEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setReferenceEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setReferenceTimeSystem_885124f6a0a748ea] = env->getMethodID(cls, "setReferenceTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
              mids$[mid_setSbasId_09073838d403e58a] = env->getMethodID(cls, "setSbasId", "(Lorg/orekit/files/rinex/navigation/SbasId;)V");
              mids$[mid_setTransmissionTime_8ba9fe7a847cecad] = env->getMethodID(cls, "setTransmissionTime", "(D)V");
              mids$[mid_setUtcId_eb9393677e867fe4] = env->getMethodID(cls, "setUtcId", "(Lorg/orekit/files/rinex/navigation/UtcId;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SystemTimeOffsetMessage::SystemTimeOffsetMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_2f7855eb8fb85f32, a0.this$, a1, a2.this$)) {}

          jdouble SystemTimeOffsetMessage::getA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA0_b74f83833fdad017]);
          }

          jdouble SystemTimeOffsetMessage::getA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA1_b74f83833fdad017]);
          }

          jdouble SystemTimeOffsetMessage::getA2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA2_b74f83833fdad017]);
          }

          ::org::orekit::gnss::TimeSystem SystemTimeOffsetMessage::getDefinedTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getDefinedTimeSystem_28830357acffb3e1]));
          }

          ::org::orekit::time::AbsoluteDate SystemTimeOffsetMessage::getReferenceEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceEpoch_c325492395d89b24]));
          }

          ::org::orekit::gnss::TimeSystem SystemTimeOffsetMessage::getReferenceTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getReferenceTimeSystem_28830357acffb3e1]));
          }

          ::org::orekit::files::rinex::navigation::SbasId SystemTimeOffsetMessage::getSbasId() const
          {
            return ::org::orekit::files::rinex::navigation::SbasId(env->callObjectMethod(this$, mids$[mid_getSbasId_edaeb02a93410c90]));
          }

          jdouble SystemTimeOffsetMessage::getTransmissionTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_b74f83833fdad017]);
          }

          ::org::orekit::files::rinex::navigation::UtcId SystemTimeOffsetMessage::getUtcId() const
          {
            return ::org::orekit::files::rinex::navigation::UtcId(env->callObjectMethod(this$, mids$[mid_getUtcId_2e5abf1a6dc741a8]));
          }

          void SystemTimeOffsetMessage::setA0(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA0_8ba9fe7a847cecad], a0);
          }

          void SystemTimeOffsetMessage::setA1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA1_8ba9fe7a847cecad], a0);
          }

          void SystemTimeOffsetMessage::setA2(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA2_8ba9fe7a847cecad], a0);
          }

          void SystemTimeOffsetMessage::setDefinedTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDefinedTimeSystem_885124f6a0a748ea], a0.this$);
          }

          void SystemTimeOffsetMessage::setReferenceEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceEpoch_02135a6ef25adb4b], a0.this$);
          }

          void SystemTimeOffsetMessage::setReferenceTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceTimeSystem_885124f6a0a748ea], a0.this$);
          }

          void SystemTimeOffsetMessage::setSbasId(const ::org::orekit::files::rinex::navigation::SbasId & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSbasId_09073838d403e58a], a0.this$);
          }

          void SystemTimeOffsetMessage::setTransmissionTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmissionTime_8ba9fe7a847cecad], a0);
          }

          void SystemTimeOffsetMessage::setUtcId(const ::org::orekit::files::rinex::navigation::UtcId & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setUtcId_eb9393677e867fe4], a0.this$);
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
          static PyObject *t_SystemTimeOffsetMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SystemTimeOffsetMessage_init_(t_SystemTimeOffsetMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SystemTimeOffsetMessage_getA0(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getA1(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getA2(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getDefinedTimeSystem(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getReferenceEpoch(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getReferenceTimeSystem(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getSbasId(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getTransmissionTime(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getUtcId(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_setA0(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setA1(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setA2(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setDefinedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setReferenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setReferenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setSbasId(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setTransmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setUtcId(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_get__a0(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a0(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__a1(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a1(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__a2(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a2(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__definedTimeSystem(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__definedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__referenceEpoch(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__referenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__referenceTimeSystem(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__referenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__sbasId(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__sbasId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__transmissionTime(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__transmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__utcId(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__utcId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_SystemTimeOffsetMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a0),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a1),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a2),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, definedTimeSystem),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, referenceEpoch),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, referenceTimeSystem),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, sbasId),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, transmissionTime),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, utcId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SystemTimeOffsetMessage__methods_[] = {
            DECLARE_METHOD(t_SystemTimeOffsetMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA0, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA1, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA2, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getDefinedTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getReferenceEpoch, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getReferenceTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getSbasId, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getTransmissionTime, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getUtcId, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA0, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA1, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA2, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setDefinedTimeSystem, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setReferenceEpoch, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setReferenceTimeSystem, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setSbasId, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setTransmissionTime, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setUtcId, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SystemTimeOffsetMessage)[] = {
            { Py_tp_methods, t_SystemTimeOffsetMessage__methods_ },
            { Py_tp_init, (void *) t_SystemTimeOffsetMessage_init_ },
            { Py_tp_getset, t_SystemTimeOffsetMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SystemTimeOffsetMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(SystemTimeOffsetMessage, t_SystemTimeOffsetMessage, SystemTimeOffsetMessage);

          void t_SystemTimeOffsetMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(SystemTimeOffsetMessage), &PY_TYPE_DEF(SystemTimeOffsetMessage), module, "SystemTimeOffsetMessage", 0);
          }

          void t_SystemTimeOffsetMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "class_", make_descriptor(SystemTimeOffsetMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "wrapfn_", make_descriptor(t_SystemTimeOffsetMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SystemTimeOffsetMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SystemTimeOffsetMessage::initializeClass, 1)))
              return NULL;
            return t_SystemTimeOffsetMessage::wrap_Object(SystemTimeOffsetMessage(((t_SystemTimeOffsetMessage *) arg)->object.this$));
          }
          static PyObject *t_SystemTimeOffsetMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SystemTimeOffsetMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SystemTimeOffsetMessage_init_(t_SystemTimeOffsetMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            SystemTimeOffsetMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = SystemTimeOffsetMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SystemTimeOffsetMessage_getA0(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getA1(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getA2(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getDefinedTimeSystem(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getDefinedTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getReferenceEpoch(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getReferenceTimeSystem(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getSbasId(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::files::rinex::navigation::SbasId result((jobject) NULL);
            OBJ_CALL(result = self->object.getSbasId());
            return ::org::orekit::files::rinex::navigation::t_SbasId::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getTransmissionTime(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getUtcId(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::files::rinex::navigation::UtcId result((jobject) NULL);
            OBJ_CALL(result = self->object.getUtcId());
            return ::org::orekit::files::rinex::navigation::t_UtcId::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_setA0(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA0(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA0", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setA1(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA1", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setA2(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA2(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA2", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setDefinedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setDefinedTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDefinedTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setReferenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setReferenceEpoch(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReferenceEpoch", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setReferenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setReferenceTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReferenceTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setSbasId(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::SbasId a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::SbasId::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_SbasId::parameters_))
            {
              OBJ_CALL(self->object.setSbasId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSbasId", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setTransmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setTransmissionTime(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransmissionTime", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setUtcId(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::UtcId a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::UtcId::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_UtcId::parameters_))
            {
              OBJ_CALL(self->object.setUtcId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setUtcId", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a0(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA0());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a0(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA0(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a0", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a1(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a1(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a1", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a2(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA2());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a2(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA2(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a2", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__definedTimeSystem(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getDefinedTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__definedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setDefinedTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "definedTimeSystem", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__referenceEpoch(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__referenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceEpoch(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceEpoch", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__referenceTimeSystem(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__referenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceTimeSystem", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__sbasId(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::SbasId value((jobject) NULL);
            OBJ_CALL(value = self->object.getSbasId());
            return ::org::orekit::files::rinex::navigation::t_SbasId::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__sbasId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::SbasId value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::SbasId::initializeClass, &value))
              {
                INT_CALL(self->object.setSbasId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "sbasId", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__transmissionTime(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__transmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setTransmissionTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "transmissionTime", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__utcId(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::UtcId value((jobject) NULL);
            OBJ_CALL(value = self->object.getUtcId());
            return ::org::orekit::files::rinex::navigation::t_UtcId::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__utcId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::UtcId value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::UtcId::initializeClass, &value))
              {
                INT_CALL(self->object.setUtcId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "utcId", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDetermination::class$ = NULL;
              jmethodID *AttitudeDetermination::mids$ = NULL;
              bool AttitudeDetermination::live$ = false;

              jclass AttitudeDetermination::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addSensor_4e458b36c7297083] = env->getMethodID(cls, "addSensor", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor;)V");
                  mids$[mid_getAttitudeStates_53d1d57d6e9487ac] = env->getMethodID(cls, "getAttitudeStates", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getCovarianceType_49fb04b3e4992396] = env->getMethodID(cls, "getCovarianceType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_getEndpoints_c60ad1d207bc8e06] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_513511eeab1350d5] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMethod_3f186886b06461a4] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/files/ccsds/definitions/AdMethodType;");
                  mids$[mid_getNbStates_55546ef6a647f39b] = env->getMethodID(cls, "getNbStates", "()I");
                  mids$[mid_getPrevId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPrevId", "()Ljava/lang/String;");
                  mids$[mid_getRateProcessNoiseStdDev_b74f83833fdad017] = env->getMethodID(cls, "getRateProcessNoiseStdDev", "()D");
                  mids$[mid_getRateStates_7f391c24fe2095f0] = env->getMethodID(cls, "getRateStates", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_getSensorsUsed_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSensorsUsed", "()Ljava/util/List;");
                  mids$[mid_getSigmaU_b74f83833fdad017] = env->getMethodID(cls, "getSigmaU", "()D");
                  mids$[mid_getSigmaV_b74f83833fdad017] = env->getMethodID(cls, "getSigmaV", "()D");
                  mids$[mid_getSource_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                  mids$[mid_setAttitudeStates_2fd9a6a10148e91b] = env->getMethodID(cls, "setAttitudeStates", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;)V");
                  mids$[mid_setCovarianceType_8563e2f42c19e56b] = env->getMethodID(cls, "setCovarianceType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;)V");
                  mids$[mid_setEulerRotSeq_062f1951e591952f] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setId_734b91ac30d5f9b4] = env->getMethodID(cls, "setId", "(Ljava/lang/String;)V");
                  mids$[mid_setMethod_801f7c356502c653] = env->getMethodID(cls, "setMethod", "(Lorg/orekit/files/ccsds/definitions/AdMethodType;)V");
                  mids$[mid_setNbStates_44ed599e93e8a30c] = env->getMethodID(cls, "setNbStates", "(I)V");
                  mids$[mid_setPrevId_734b91ac30d5f9b4] = env->getMethodID(cls, "setPrevId", "(Ljava/lang/String;)V");
                  mids$[mid_setRateProcessNoiseStdDev_8ba9fe7a847cecad] = env->getMethodID(cls, "setRateProcessNoiseStdDev", "(D)V");
                  mids$[mid_setRateStates_6e45359e1a7bacd4] = env->getMethodID(cls, "setRateStates", "(Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;)V");
                  mids$[mid_setSigmaU_8ba9fe7a847cecad] = env->getMethodID(cls, "setSigmaU", "(D)V");
                  mids$[mid_setSigmaV_8ba9fe7a847cecad] = env->getMethodID(cls, "setSigmaV", "(D)V");
                  mids$[mid_setSource_734b91ac30d5f9b4] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeDetermination::AttitudeDetermination() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              void AttitudeDetermination::addSensor(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addSensor_4e458b36c7297083], a0.this$);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeDetermination::getAttitudeStates() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeStates_53d1d57d6e9487ac]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeDetermination::getCovarianceType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getCovarianceType_49fb04b3e4992396]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AttitudeDetermination::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c60ad1d207bc8e06]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AttitudeDetermination::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_513511eeab1350d5]));
              }

              ::java::lang::String AttitudeDetermination::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::files::ccsds::definitions::AdMethodType AttitudeDetermination::getMethod() const
              {
                return ::org::orekit::files::ccsds::definitions::AdMethodType(env->callObjectMethod(this$, mids$[mid_getMethod_3f186886b06461a4]));
              }

              jint AttitudeDetermination::getNbStates() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbStates_55546ef6a647f39b]);
              }

              ::java::lang::String AttitudeDetermination::getPrevId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevId_1c1fa1e935d6cdcf]));
              }

              jdouble AttitudeDetermination::getRateProcessNoiseStdDev() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRateProcessNoiseStdDev_b74f83833fdad017]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeDetermination::getRateStates() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateStates_7f391c24fe2095f0]));
              }

              ::java::util::List AttitudeDetermination::getSensorsUsed() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSensorsUsed_e62d3bb06d56d7e3]));
              }

              jdouble AttitudeDetermination::getSigmaU() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSigmaU_b74f83833fdad017]);
              }

              jdouble AttitudeDetermination::getSigmaV() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSigmaV_b74f83833fdad017]);
              }

              ::java::lang::String AttitudeDetermination::getSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_1c1fa1e935d6cdcf]));
              }

              void AttitudeDetermination::setAttitudeStates(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeStates_2fd9a6a10148e91b], a0.this$);
              }

              void AttitudeDetermination::setCovarianceType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovarianceType_8563e2f42c19e56b], a0.this$);
              }

              void AttitudeDetermination::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_062f1951e591952f], a0.this$);
              }

              void AttitudeDetermination::setId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setId_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeDetermination::setMethod(const ::org::orekit::files::ccsds::definitions::AdMethodType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMethod_801f7c356502c653], a0.this$);
              }

              void AttitudeDetermination::setNbStates(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbStates_44ed599e93e8a30c], a0);
              }

              void AttitudeDetermination::setPrevId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevId_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeDetermination::setRateProcessNoiseStdDev(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateProcessNoiseStdDev_8ba9fe7a847cecad], a0);
              }

              void AttitudeDetermination::setRateStates(const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateStates_6e45359e1a7bacd4], a0.this$);
              }

              void AttitudeDetermination::setSigmaU(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSigmaU_8ba9fe7a847cecad], a0);
              }

              void AttitudeDetermination::setSigmaV(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSigmaV_8ba9fe7a847cecad], a0);
              }

              void AttitudeDetermination::setSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSource_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeDetermination::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
              static PyObject *t_AttitudeDetermination_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDetermination_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeDetermination_init_(t_AttitudeDetermination *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeDetermination_addSensor(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_getAttitudeStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getCovarianceType(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getEndpoints(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getEulerRotSeq(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getId(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getMethod(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getNbStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getPrevId(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getRateProcessNoiseStdDev(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getRateStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSensorsUsed(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSigmaU(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSigmaV(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSource(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_setAttitudeStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setCovarianceType(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setEulerRotSeq(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setId(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setMethod(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setNbStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setPrevId(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setRateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setRateStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSigmaU(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSigmaV(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSource(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_validate(t_AttitudeDetermination *self, PyObject *args);
              static PyObject *t_AttitudeDetermination_get__attitudeStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__attitudeStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__covarianceType(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__covarianceType(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__endpoints(t_AttitudeDetermination *self, void *data);
              static PyObject *t_AttitudeDetermination_get__eulerRotSeq(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__eulerRotSeq(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__id(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__id(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__method(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__method(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__nbStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__nbStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__prevId(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__prevId(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__rateProcessNoiseStdDev(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__rateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__rateStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__rateStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__sensorsUsed(t_AttitudeDetermination *self, void *data);
              static PyObject *t_AttitudeDetermination_get__sigmaU(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__sigmaU(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__sigmaV(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__sigmaV(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__source(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__source(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeDetermination__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, attitudeStates),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, covarianceType),
                DECLARE_GET_FIELD(t_AttitudeDetermination, endpoints),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, eulerRotSeq),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, id),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, method),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, nbStates),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, prevId),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, rateProcessNoiseStdDev),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, rateStates),
                DECLARE_GET_FIELD(t_AttitudeDetermination, sensorsUsed),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, sigmaU),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, sigmaV),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, source),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDetermination__methods_[] = {
                DECLARE_METHOD(t_AttitudeDetermination, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDetermination, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDetermination, addSensor, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, getAttitudeStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getCovarianceType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getId, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getMethod, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getNbStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getPrevId, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getRateProcessNoiseStdDev, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getRateStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSensorsUsed, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSigmaU, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSigmaV, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSource, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, setAttitudeStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setCovarianceType, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setId, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setMethod, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setNbStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setPrevId, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setRateProcessNoiseStdDev, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setRateStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSigmaU, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSigmaV, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSource, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDetermination)[] = {
                { Py_tp_methods, t_AttitudeDetermination__methods_ },
                { Py_tp_init, (void *) t_AttitudeDetermination_init_ },
                { Py_tp_getset, t_AttitudeDetermination__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDetermination)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeDetermination, t_AttitudeDetermination, AttitudeDetermination);

              void t_AttitudeDetermination::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDetermination), &PY_TYPE_DEF(AttitudeDetermination), module, "AttitudeDetermination", 0);
              }

              void t_AttitudeDetermination::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "class_", make_descriptor(AttitudeDetermination::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "wrapfn_", make_descriptor(t_AttitudeDetermination::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeDetermination_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDetermination::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDetermination::wrap_Object(AttitudeDetermination(((t_AttitudeDetermination *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDetermination_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDetermination::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeDetermination_init_(t_AttitudeDetermination *self, PyObject *args, PyObject *kwds)
              {
                AttitudeDetermination object((jobject) NULL);

                INT_CALL(object = AttitudeDetermination());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeDetermination_addSensor(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addSensor(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addSensor", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_getAttitudeStates(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getCovarianceType(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getEndpoints(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getEulerRotSeq(t_AttitudeDetermination *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getId(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_getMethod(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType result((jobject) NULL);
                OBJ_CALL(result = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_AdMethodType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getNbStates(t_AttitudeDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbStates());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeDetermination_getPrevId(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrevId());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_getRateProcessNoiseStdDev(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRateProcessNoiseStdDev());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getRateStates(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getRateStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getSensorsUsed(t_AttitudeDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensorsUsed());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeDeterminationSensor));
              }

              static PyObject *t_AttitudeDetermination_getSigmaU(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSigmaU());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getSigmaV(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSigmaV());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getSource(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSource());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_setAttitudeStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setCovarianceType(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_))
                {
                  OBJ_CALL(self->object.setCovarianceType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovarianceType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setEulerRotSeq(t_AttitudeDetermination *self, PyObject *arg)
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

              static PyObject *t_AttitudeDetermination_setId(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setId", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setMethod(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::AdMethodType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_AdMethodType::parameters_))
                {
                  OBJ_CALL(self->object.setMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMethod", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setNbStates(t_AttitudeDetermination *self, PyObject *arg)
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

              static PyObject *t_AttitudeDetermination_setPrevId(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrevId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrevId", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setRateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRateProcessNoiseStdDev(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateProcessNoiseStdDev", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setRateStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setRateStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSigmaU(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSigmaU(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSigmaU", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSigmaV(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSigmaV(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSigmaV", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSource(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSource", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_validate(t_AttitudeDetermination *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeDetermination), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeDetermination_get__attitudeStates(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__attitudeStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__covarianceType(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__covarianceType(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovarianceType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covarianceType", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__endpoints(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AttitudeDetermination_get__eulerRotSeq(t_AttitudeDetermination *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__eulerRotSeq(t_AttitudeDetermination *self, PyObject *arg, void *data)
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

              static PyObject *t_AttitudeDetermination_get__id(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__id(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "id", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__method(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_AdMethodType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__method(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::AdMethodType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::AdMethodType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "method", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__nbStates(t_AttitudeDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbStates());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeDetermination_set__nbStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
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

              static PyObject *t_AttitudeDetermination_get__prevId(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrevId());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__prevId(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrevId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prevId", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__rateProcessNoiseStdDev(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRateProcessNoiseStdDev());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__rateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRateProcessNoiseStdDev(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateProcessNoiseStdDev", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__rateStates(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getRateStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__rateStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setRateStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__sensorsUsed(t_AttitudeDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensorsUsed());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeDetermination_get__sigmaU(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSigmaU());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__sigmaU(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSigmaU(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sigmaU", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__sigmaV(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSigmaV());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__sigmaV(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSigmaV(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sigmaV", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__source(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSource());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__source(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "source", arg);
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
#include "org/orekit/gnss/metric/ntrip/PythonMessageObserver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *PythonMessageObserver::class$ = NULL;
          jmethodID *PythonMessageObserver::mids$ = NULL;
          bool PythonMessageObserver::live$ = false;

          jclass PythonMessageObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/PythonMessageObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_messageAvailable_1a4f1f18b22ebdb4] = env->getMethodID(cls, "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMessageObserver::PythonMessageObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonMessageObserver::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonMessageObserver::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonMessageObserver::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        namespace ntrip {
          static PyObject *t_PythonMessageObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMessageObserver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMessageObserver_init_(t_PythonMessageObserver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMessageObserver_finalize(t_PythonMessageObserver *self);
          static PyObject *t_PythonMessageObserver_pythonExtension(t_PythonMessageObserver *self, PyObject *args);
          static void JNICALL t_PythonMessageObserver_messageAvailable0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMessageObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMessageObserver_get__self(t_PythonMessageObserver *self, void *data);
          static PyGetSetDef t_PythonMessageObserver__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMessageObserver, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMessageObserver__methods_[] = {
            DECLARE_METHOD(t_PythonMessageObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageObserver, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMessageObserver, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMessageObserver)[] = {
            { Py_tp_methods, t_PythonMessageObserver__methods_ },
            { Py_tp_init, (void *) t_PythonMessageObserver_init_ },
            { Py_tp_getset, t_PythonMessageObserver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMessageObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMessageObserver, t_PythonMessageObserver, PythonMessageObserver);

          void t_PythonMessageObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMessageObserver), &PY_TYPE_DEF(PythonMessageObserver), module, "PythonMessageObserver", 1);
          }

          void t_PythonMessageObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "class_", make_descriptor(PythonMessageObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "wrapfn_", make_descriptor(t_PythonMessageObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMessageObserver::initializeClass);
            JNINativeMethod methods[] = {
              { "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V", (void *) t_PythonMessageObserver_messageAvailable0 },
              { "pythonDecRef", "()V", (void *) t_PythonMessageObserver_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMessageObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMessageObserver::initializeClass, 1)))
              return NULL;
            return t_PythonMessageObserver::wrap_Object(PythonMessageObserver(((t_PythonMessageObserver *) arg)->object.this$));
          }
          static PyObject *t_PythonMessageObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMessageObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMessageObserver_init_(t_PythonMessageObserver *self, PyObject *args, PyObject *kwds)
          {
            PythonMessageObserver object((jobject) NULL);

            INT_CALL(object = PythonMessageObserver());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMessageObserver_finalize(t_PythonMessageObserver *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMessageObserver_pythonExtension(t_PythonMessageObserver *self, PyObject *args)
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

          static void JNICALL t_PythonMessageObserver_messageAvailable0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = env->fromJString((jstring) a0, 0);
            PyObject *o1 = ::org::orekit::gnss::metric::messages::t_ParsedMessage::wrap_Object(::org::orekit::gnss::metric::messages::ParsedMessage(a1));
            PyObject *result = PyObject_CallMethod(obj, "messageAvailable", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMessageObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMessageObserver_get__self(t_PythonMessageObserver *self, void *data)
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
#include "org/orekit/files/sp3/SP3Utils.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/units/Unit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Utils::class$ = NULL;
        jmethodID *SP3Utils::mids$ = NULL;
        bool SP3Utils::live$ = false;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_RATE_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_RATE_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_UNIT = NULL;
        jdouble SP3Utils::DEFAULT_CLOCK_RATE_VALUE = (jdouble) 0;
        jdouble SP3Utils::DEFAULT_CLOCK_VALUE = (jdouble) 0;
        ::org::orekit::utils::units::Unit *SP3Utils::POSITION_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::POSITION_UNIT = NULL;
        jdouble SP3Utils::POS_VEL_BASE_ACCURACY = (jdouble) 0;
        ::org::orekit::utils::units::Unit *SP3Utils::VELOCITY_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::VELOCITY_UNIT = NULL;

        jclass SP3Utils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Utils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_indexAccuracy_34c8a12040a1782d] = env->getStaticMethodID(cls, "indexAccuracy", "(Lorg/orekit/utils/units/Unit;DD)I");
            mids$[mid_siAccuracy_05657b63cb3ef35a] = env->getStaticMethodID(cls, "siAccuracy", "(Lorg/orekit/utils/units/Unit;DI)D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CLOCK_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_RATE_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_RATE_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_RATE_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_RATE_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_UNIT", "Lorg/orekit/utils/units/Unit;"));
            DEFAULT_CLOCK_RATE_VALUE = env->getStaticDoubleField(cls, "DEFAULT_CLOCK_RATE_VALUE");
            DEFAULT_CLOCK_VALUE = env->getStaticDoubleField(cls, "DEFAULT_CLOCK_VALUE");
            POSITION_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "POSITION_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            POSITION_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "POSITION_UNIT", "Lorg/orekit/utils/units/Unit;"));
            POS_VEL_BASE_ACCURACY = env->getStaticDoubleField(cls, "POS_VEL_BASE_ACCURACY");
            VELOCITY_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "VELOCITY_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            VELOCITY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "VELOCITY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint SP3Utils::indexAccuracy(const ::org::orekit::utils::units::Unit & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticIntMethod(cls, mids$[mid_indexAccuracy_34c8a12040a1782d], a0.this$, a1, a2);
        }

        jdouble SP3Utils::siAccuracy(const ::org::orekit::utils::units::Unit & a0, jdouble a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_siAccuracy_05657b63cb3ef35a], a0.this$, a1, a2);
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
      namespace sp3 {
        static PyObject *t_SP3Utils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Utils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Utils_indexAccuracy(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3Utils_siAccuracy(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_SP3Utils__methods_[] = {
          DECLARE_METHOD(t_SP3Utils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, indexAccuracy, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, siAccuracy, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Utils)[] = {
          { Py_tp_methods, t_SP3Utils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Utils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Utils, t_SP3Utils, SP3Utils);

        void t_SP3Utils::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Utils), &PY_TYPE_DEF(SP3Utils), module, "SP3Utils", 0);
        }

        void t_SP3Utils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "class_", make_descriptor(SP3Utils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "wrapfn_", make_descriptor(t_SP3Utils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Utils::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_RATE_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_RATE_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_RATE_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_RATE_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "DEFAULT_CLOCK_RATE_VALUE", make_descriptor(SP3Utils::DEFAULT_CLOCK_RATE_VALUE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "DEFAULT_CLOCK_VALUE", make_descriptor(SP3Utils::DEFAULT_CLOCK_VALUE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POSITION_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::POSITION_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POSITION_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::POSITION_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POS_VEL_BASE_ACCURACY", make_descriptor(SP3Utils::POS_VEL_BASE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "VELOCITY_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::VELOCITY_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "VELOCITY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::VELOCITY_UNIT)));
        }

        static PyObject *t_SP3Utils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Utils::initializeClass, 1)))
            return NULL;
          return t_SP3Utils::wrap_Object(SP3Utils(((t_SP3Utils *) arg)->object.this$));
        }
        static PyObject *t_SP3Utils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Utils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3Utils_indexAccuracy(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jint result;

          if (!parseArgs(args, "kDD", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3Utils::indexAccuracy(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError(type, "indexAccuracy", args);
          return NULL;
        }

        static PyObject *t_SP3Utils_siAccuracy(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          jdouble a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "kDI", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3Utils::siAccuracy(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "siAccuracy", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *SubHyperplane$SplitSubHyperplane::class$ = NULL;
        jmethodID *SubHyperplane$SplitSubHyperplane::mids$ = NULL;
        bool SubHyperplane$SplitSubHyperplane::live$ = false;

        jclass SubHyperplane$SplitSubHyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5e8fba6ecc19b859] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/SubHyperplane;)V");
            mids$[mid_getMinus_0417f9f9ce6ee466] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getPlus_0417f9f9ce6ee466] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getSide_e46f65835b705175] = env->getMethodID(cls, "getSide", "()Lorg/hipparchus/geometry/partitioning/Side;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SubHyperplane$SplitSubHyperplane::SubHyperplane$SplitSubHyperplane(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const ::org::hipparchus::geometry::partitioning::SubHyperplane & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e8fba6ecc19b859, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::partitioning::SubHyperplane SubHyperplane$SplitSubHyperplane::getMinus() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getMinus_0417f9f9ce6ee466]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane SubHyperplane$SplitSubHyperplane::getPlus() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlus_0417f9f9ce6ee466]));
        }

        ::org::hipparchus::geometry::partitioning::Side SubHyperplane$SplitSubHyperplane::getSide() const
        {
          return ::org::hipparchus::geometry::partitioning::Side(env->callObjectMethod(this$, mids$[mid_getSide_e46f65835b705175]));
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
      namespace partitioning {
        static PyObject *t_SubHyperplane$SplitSubHyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_of_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args);
        static int t_SubHyperplane$SplitSubHyperplane_init_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_getMinus(t_SubHyperplane$SplitSubHyperplane *self);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_getPlus(t_SubHyperplane$SplitSubHyperplane *self);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_getSide(t_SubHyperplane$SplitSubHyperplane *self);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__minus(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__plus(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__side(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__parameters_(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyGetSetDef t_SubHyperplane$SplitSubHyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, minus),
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, plus),
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, side),
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SubHyperplane$SplitSubHyperplane__methods_[] = {
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, getMinus, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, getPlus, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, getSide, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SubHyperplane$SplitSubHyperplane)[] = {
          { Py_tp_methods, t_SubHyperplane$SplitSubHyperplane__methods_ },
          { Py_tp_init, (void *) t_SubHyperplane$SplitSubHyperplane_init_ },
          { Py_tp_getset, t_SubHyperplane$SplitSubHyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SubHyperplane$SplitSubHyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SubHyperplane$SplitSubHyperplane, t_SubHyperplane$SplitSubHyperplane, SubHyperplane$SplitSubHyperplane);
        PyObject *t_SubHyperplane$SplitSubHyperplane::wrap_Object(const SubHyperplane$SplitSubHyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane$SplitSubHyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane$SplitSubHyperplane *self = (t_SubHyperplane$SplitSubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SubHyperplane$SplitSubHyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane$SplitSubHyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane$SplitSubHyperplane *self = (t_SubHyperplane$SplitSubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SubHyperplane$SplitSubHyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(SubHyperplane$SplitSubHyperplane), &PY_TYPE_DEF(SubHyperplane$SplitSubHyperplane), module, "SubHyperplane$SplitSubHyperplane", 0);
        }

        void t_SubHyperplane$SplitSubHyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane$SplitSubHyperplane), "class_", make_descriptor(SubHyperplane$SplitSubHyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane$SplitSubHyperplane), "wrapfn_", make_descriptor(t_SubHyperplane$SplitSubHyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane$SplitSubHyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SubHyperplane$SplitSubHyperplane::initializeClass, 1)))
            return NULL;
          return t_SubHyperplane$SplitSubHyperplane::wrap_Object(SubHyperplane$SplitSubHyperplane(((t_SubHyperplane$SplitSubHyperplane *) arg)->object.this$));
        }
        static PyObject *t_SubHyperplane$SplitSubHyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SubHyperplane$SplitSubHyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_of_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SubHyperplane$SplitSubHyperplane_init_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane a1((jobject) NULL);
          PyTypeObject **p1;
          SubHyperplane$SplitSubHyperplane object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            INT_CALL(object = SubHyperplane$SplitSubHyperplane(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_getMinus(t_SubHyperplane$SplitSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_getPlus(t_SubHyperplane$SplitSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_getSide(t_SubHyperplane$SplitSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Side result((jobject) NULL);
          OBJ_CALL(result = self->object.getSide());
          return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(result);
        }
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__parameters_(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__minus(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__plus(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__side(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Side value((jobject) NULL);
          OBJ_CALL(value = self->object.getSide());
          return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/HexadecimalSequenceEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *HexadecimalSequenceEncodedMessage::class$ = NULL;
          jmethodID *HexadecimalSequenceEncodedMessage::mids$ = NULL;
          bool HexadecimalSequenceEncodedMessage::live$ = false;

          jclass HexadecimalSequenceEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/HexadecimalSequenceEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_902d69c788edaf18] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
              mids$[mid_start_a1fa5dae97ea5ed2] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_55546ef6a647f39b] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HexadecimalSequenceEncodedMessage::HexadecimalSequenceEncodedMessage(const ::java::lang::CharSequence & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_902d69c788edaf18, a0.this$)) {}

          void HexadecimalSequenceEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_a1fa5dae97ea5ed2]);
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
        namespace parser {
          static PyObject *t_HexadecimalSequenceEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HexadecimalSequenceEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HexadecimalSequenceEncodedMessage_init_(t_HexadecimalSequenceEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HexadecimalSequenceEncodedMessage_start(t_HexadecimalSequenceEncodedMessage *self, PyObject *args);

          static PyMethodDef t_HexadecimalSequenceEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, start, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HexadecimalSequenceEncodedMessage)[] = {
            { Py_tp_methods, t_HexadecimalSequenceEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_HexadecimalSequenceEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HexadecimalSequenceEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(HexadecimalSequenceEncodedMessage, t_HexadecimalSequenceEncodedMessage, HexadecimalSequenceEncodedMessage);

          void t_HexadecimalSequenceEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(HexadecimalSequenceEncodedMessage), &PY_TYPE_DEF(HexadecimalSequenceEncodedMessage), module, "HexadecimalSequenceEncodedMessage", 0);
          }

          void t_HexadecimalSequenceEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "class_", make_descriptor(HexadecimalSequenceEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "wrapfn_", make_descriptor(t_HexadecimalSequenceEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HexadecimalSequenceEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HexadecimalSequenceEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_HexadecimalSequenceEncodedMessage::wrap_Object(HexadecimalSequenceEncodedMessage(((t_HexadecimalSequenceEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_HexadecimalSequenceEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HexadecimalSequenceEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HexadecimalSequenceEncodedMessage_init_(t_HexadecimalSequenceEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::CharSequence a0((jobject) NULL);
            HexadecimalSequenceEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
            {
              INT_CALL(object = HexadecimalSequenceEncodedMessage(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_HexadecimalSequenceEncodedMessage_start(t_HexadecimalSequenceEncodedMessage *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.start());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(HexadecimalSequenceEncodedMessage), (PyObject *) self, "start", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistory::class$ = NULL;
              jmethodID *AttitudeStateHistory::mids$ = NULL;
              bool AttitudeStateHistory::live$ = false;

              jclass AttitudeStateHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e50dbd2c00143db4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getAngularCoordinates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
                  mids$[mid_getAttitudeProvider_fcce29ba1cf2a05e] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
                  mids$[mid_getAttitudeStates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAttitudeStates", "()Ljava/util/List;");
                  mids$[mid_getAvailableDerivatives_33d67d456ec94a0c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getInterpolationMethod_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMetadata_131acac04ad2d884] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;");
                  mids$[mid_getReferenceFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeStateHistory::AttitudeStateHistory(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e50dbd2c00143db4, a0.this$, a1.this$)) {}

              ::java::util::List AttitudeStateHistory::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_e62d3bb06d56d7e3]));
              }

              ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeStateHistory::getAttitudeProvider() const
              {
                return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_fcce29ba1cf2a05e]));
              }

              ::java::util::List AttitudeStateHistory::getAttitudeStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAttitudeStates_e62d3bb06d56d7e3]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AttitudeStateHistory::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_33d67d456ec94a0c]));
              }

              ::java::lang::String AttitudeStateHistory::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_1c1fa1e935d6cdcf]));
              }

              jint AttitudeStateHistory::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_55546ef6a647f39b]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata AttitudeStateHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_131acac04ad2d884]));
              }

              ::org::orekit::frames::Frame AttitudeStateHistory::getReferenceFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_2c51111cc6894ba1]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeStateHistory::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeStateHistory::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
              static PyObject *t_AttitudeStateHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeStateHistory_init_(t_AttitudeStateHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeStateHistory_getAngularCoordinates(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAttitudeProvider(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAttitudeStates(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAvailableDerivatives(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getInterpolationMethod(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getInterpolationSamples(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getMetadata(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getReferenceFrame(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getStart(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getStop(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_get__angularCoordinates(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__attitudeProvider(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__attitudeStates(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__availableDerivatives(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__interpolationMethod(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__interpolationSamples(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__metadata(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__referenceFrame(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__start(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__stop(t_AttitudeStateHistory *self, void *data);
              static PyGetSetDef t_AttitudeStateHistory__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeStateHistory, angularCoordinates),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, attitudeProvider),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, attitudeStates),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, availableDerivatives),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, interpolationMethod),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, interpolationSamples),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, metadata),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, referenceFrame),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, start),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistory__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAngularCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAttitudeProvider, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAttitudeStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistory)[] = {
                { Py_tp_methods, t_AttitudeStateHistory__methods_ },
                { Py_tp_init, (void *) t_AttitudeStateHistory_init_ },
                { Py_tp_getset, t_AttitudeStateHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistory, t_AttitudeStateHistory, AttitudeStateHistory);

              void t_AttitudeStateHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistory), &PY_TYPE_DEF(AttitudeStateHistory), module, "AttitudeStateHistory", 0);
              }

              void t_AttitudeStateHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "class_", make_descriptor(AttitudeStateHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "wrapfn_", make_descriptor(t_AttitudeStateHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeStateHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistory::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistory::wrap_Object(AttitudeStateHistory(((t_AttitudeStateHistory *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeStateHistory_init_(t_AttitudeStateHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AttitudeStateHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AttitudeStateHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeStateHistory_getAngularCoordinates(t_AttitudeStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AttitudeStateHistory_getAttitudeProvider(t_AttitudeStateHistory *self)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getAttitudeStates(t_AttitudeStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeStates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeState));
              }

              static PyObject *t_AttitudeStateHistory_getAvailableDerivatives(t_AttitudeStateHistory *self)
              {
                ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getInterpolationMethod(t_AttitudeStateHistory *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistory_getInterpolationSamples(t_AttitudeStateHistory *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeStateHistory_getMetadata(t_AttitudeStateHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeStateHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getReferenceFrame(t_AttitudeStateHistory *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getStart(t_AttitudeStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getStop(t_AttitudeStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_get__angularCoordinates(t_AttitudeStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__attitudeProvider(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__attitudeStates(t_AttitudeStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeStates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__availableDerivatives(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__interpolationMethod(t_AttitudeStateHistory *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }

              static PyObject *t_AttitudeStateHistory_get__interpolationSamples(t_AttitudeStateHistory *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AttitudeStateHistory_get__metadata(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeStateHistoryMetadata::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__referenceFrame(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__start(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__stop(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/orekit/forces/gravity/ThirdBodyAttractionEpoch.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *ThirdBodyAttractionEpoch::class$ = NULL;
        jmethodID *ThirdBodyAttractionEpoch::mids$ = NULL;
        bool ThirdBodyAttractionEpoch::live$ = false;

        jclass ThirdBodyAttractionEpoch::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/ThirdBodyAttractionEpoch");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5b078eb816ea0c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_getDerivativesToEpoch_4f09578ce9fbd006] = env->getMethodID(cls, "getDerivativesToEpoch", "(Lorg/orekit/propagation/SpacecraftState;[D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThirdBodyAttractionEpoch::ThirdBodyAttractionEpoch(const ::org::orekit::bodies::CelestialBody & a0) : ::org::orekit::forces::gravity::ThirdBodyAttraction(env->newObject(initializeClass, &mids$, mid_init$_b5b078eb816ea0c4, a0.this$)) {}

        JArray< jdouble > ThirdBodyAttractionEpoch::getDerivativesToEpoch(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDerivativesToEpoch_4f09578ce9fbd006], a0.this$, a1.this$));
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
        static PyObject *t_ThirdBodyAttractionEpoch_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThirdBodyAttractionEpoch_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThirdBodyAttractionEpoch_init_(t_ThirdBodyAttractionEpoch *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThirdBodyAttractionEpoch_getDerivativesToEpoch(t_ThirdBodyAttractionEpoch *self, PyObject *args);

        static PyMethodDef t_ThirdBodyAttractionEpoch__methods_[] = {
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, getDerivativesToEpoch, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThirdBodyAttractionEpoch)[] = {
          { Py_tp_methods, t_ThirdBodyAttractionEpoch__methods_ },
          { Py_tp_init, (void *) t_ThirdBodyAttractionEpoch_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThirdBodyAttractionEpoch)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::gravity::ThirdBodyAttraction),
          NULL
        };

        DEFINE_TYPE(ThirdBodyAttractionEpoch, t_ThirdBodyAttractionEpoch, ThirdBodyAttractionEpoch);

        void t_ThirdBodyAttractionEpoch::install(PyObject *module)
        {
          installType(&PY_TYPE(ThirdBodyAttractionEpoch), &PY_TYPE_DEF(ThirdBodyAttractionEpoch), module, "ThirdBodyAttractionEpoch", 0);
        }

        void t_ThirdBodyAttractionEpoch::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "class_", make_descriptor(ThirdBodyAttractionEpoch::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "wrapfn_", make_descriptor(t_ThirdBodyAttractionEpoch::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThirdBodyAttractionEpoch_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThirdBodyAttractionEpoch::initializeClass, 1)))
            return NULL;
          return t_ThirdBodyAttractionEpoch::wrap_Object(ThirdBodyAttractionEpoch(((t_ThirdBodyAttractionEpoch *) arg)->object.this$));
        }
        static PyObject *t_ThirdBodyAttractionEpoch_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThirdBodyAttractionEpoch::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThirdBodyAttractionEpoch_init_(t_ThirdBodyAttractionEpoch *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          ThirdBodyAttractionEpoch object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = ThirdBodyAttractionEpoch(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThirdBodyAttractionEpoch_getDerivativesToEpoch(t_ThirdBodyAttractionEpoch *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getDerivativesToEpoch(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivativesToEpoch", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateVectorFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateVectorFunctionDifferentiator::mids$ = NULL;
        bool UnivariateVectorFunctionDifferentiator::live$ = false;

        jclass UnivariateVectorFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_3e92258d2209079c] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction UnivariateVectorFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateVectorFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction(env->callObjectMethod(this$, mids$[mid_differentiate_3e92258d2209079c], a0.this$));
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
        static PyObject *t_UnivariateVectorFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateVectorFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateVectorFunctionDifferentiator_differentiate(t_UnivariateVectorFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateVectorFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateVectorFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateVectorFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateVectorFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateVectorFunctionDifferentiator, t_UnivariateVectorFunctionDifferentiator, UnivariateVectorFunctionDifferentiator);

        void t_UnivariateVectorFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateVectorFunctionDifferentiator), &PY_TYPE_DEF(UnivariateVectorFunctionDifferentiator), module, "UnivariateVectorFunctionDifferentiator", 0);
        }

        void t_UnivariateVectorFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "class_", make_descriptor(UnivariateVectorFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateVectorFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateVectorFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateVectorFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateVectorFunctionDifferentiator::wrap_Object(UnivariateVectorFunctionDifferentiator(((t_UnivariateVectorFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateVectorFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateVectorFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateVectorFunctionDifferentiator_differentiate(t_UnivariateVectorFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateVectorFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateVectorFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableVectorFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldMidPointIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldMidPointIntegrator::class$ = NULL;
        jmethodID *FieldMidPointIntegrator::mids$ = NULL;
        bool FieldMidPointIntegrator::live$ = false;
        jint FieldMidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldMidPointIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldMidPointIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_b6c946d1cbf160f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_287374284b786369] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_81520b552cb3fa26] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MIDPOINT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "MIDPOINT_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b6c946d1cbf160f0, a0.this$, a1, a2)) {}

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_287374284b786369, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldMidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldMidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldMidPointIntegrator_of_(t_FieldMidPointIntegrator *self, PyObject *args);
        static int t_FieldMidPointIntegrator_init_(t_FieldMidPointIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldMidPointIntegrator_get__parameters_(t_FieldMidPointIntegrator *self, void *data);
        static PyGetSetDef t_FieldMidPointIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldMidPointIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldMidPointIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldMidPointIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldMidPointIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldMidPointIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldMidPointIntegrator)[] = {
          { Py_tp_methods, t_FieldMidPointIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldMidPointIntegrator_init_ },
          { Py_tp_getset, t_FieldMidPointIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldMidPointIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldMidPointIntegrator, t_FieldMidPointIntegrator, FieldMidPointIntegrator);
        PyObject *t_FieldMidPointIntegrator::wrap_Object(const FieldMidPointIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldMidPointIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldMidPointIntegrator *self = (t_FieldMidPointIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldMidPointIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldMidPointIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldMidPointIntegrator *self = (t_FieldMidPointIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldMidPointIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldMidPointIntegrator), &PY_TYPE_DEF(FieldMidPointIntegrator), module, "FieldMidPointIntegrator", 0);
        }

        void t_FieldMidPointIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "class_", make_descriptor(FieldMidPointIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "wrapfn_", make_descriptor(t_FieldMidPointIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldMidPointIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "MIDPOINT_MAX_ITERATIONS_COUNT", make_descriptor(FieldMidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldMidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldMidPointIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldMidPointIntegrator::wrap_Object(FieldMidPointIntegrator(((t_FieldMidPointIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldMidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldMidPointIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldMidPointIntegrator_of_(t_FieldMidPointIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldMidPointIntegrator_init_(t_FieldMidPointIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldMidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldMidPointIntegrator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              FieldMidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldMidPointIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldMidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldMidPointIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldMidPointIntegrator_get__parameters_(t_FieldMidPointIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *SemiAnalyticalKalmanEstimatorBuilder::mids$ = NULL;
        bool SemiAnalyticalKalmanEstimatorBuilder::live$ = false;

        jclass SemiAnalyticalKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_a396da815d82426d] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");
            mids$[mid_build_d2e217fd1610430e] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator;");
            mids$[mid_decomposer_9c30c144bdffdffa] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_93ad8e267c04336d] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalKalmanEstimatorBuilder::SemiAnalyticalKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_a396da815d82426d], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator SemiAnalyticalKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_d2e217fd1610430e]));
        }

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_9c30c144bdffdffa], a0.this$));
        }

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_93ad8e267c04336d], a0.this$, a1.this$));
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
      namespace sequential {
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimatorBuilder_init_(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_build(t_SemiAnalyticalKalmanEstimatorBuilder *self);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args);

        static PyMethodDef t_SemiAnalyticalKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_SemiAnalyticalKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalKalmanEstimatorBuilder, t_SemiAnalyticalKalmanEstimatorBuilder, SemiAnalyticalKalmanEstimatorBuilder);

        void t_SemiAnalyticalKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), &PY_TYPE_DEF(SemiAnalyticalKalmanEstimatorBuilder), module, "SemiAnalyticalKalmanEstimatorBuilder", 0);
        }

        void t_SemiAnalyticalKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), "class_", make_descriptor(SemiAnalyticalKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_SemiAnalyticalKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(SemiAnalyticalKalmanEstimatorBuilder(((t_SemiAnalyticalKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalKalmanEstimatorBuilder_init_(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          SemiAnalyticalKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = SemiAnalyticalKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_build(t_SemiAnalyticalKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_SemiAnalyticalKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          SemiAnalyticalKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/ThirdBodyAttraction.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *ThirdBodyAttraction::class$ = NULL;
        jmethodID *ThirdBodyAttraction::mids$ = NULL;
        bool ThirdBodyAttraction::live$ = false;
        ::java::lang::String *ThirdBodyAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass ThirdBodyAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/ThirdBodyAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5b078eb816ea0c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThirdBodyAttraction::ThirdBodyAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5b078eb816ea0c4, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ThirdBodyAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThirdBodyAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        jboolean ThirdBodyAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::java::util::List ThirdBodyAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
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
        static PyObject *t_ThirdBodyAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThirdBodyAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThirdBodyAttraction_init_(t_ThirdBodyAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThirdBodyAttraction_acceleration(t_ThirdBodyAttraction *self, PyObject *args);
        static PyObject *t_ThirdBodyAttraction_dependsOnPositionOnly(t_ThirdBodyAttraction *self);
        static PyObject *t_ThirdBodyAttraction_getParametersDrivers(t_ThirdBodyAttraction *self);
        static PyObject *t_ThirdBodyAttraction_get__parametersDrivers(t_ThirdBodyAttraction *self, void *data);
        static PyGetSetDef t_ThirdBodyAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_ThirdBodyAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThirdBodyAttraction__methods_[] = {
          DECLARE_METHOD(t_ThirdBodyAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ThirdBodyAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_ThirdBodyAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThirdBodyAttraction)[] = {
          { Py_tp_methods, t_ThirdBodyAttraction__methods_ },
          { Py_tp_init, (void *) t_ThirdBodyAttraction_init_ },
          { Py_tp_getset, t_ThirdBodyAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThirdBodyAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ThirdBodyAttraction, t_ThirdBodyAttraction, ThirdBodyAttraction);

        void t_ThirdBodyAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(ThirdBodyAttraction), &PY_TYPE_DEF(ThirdBodyAttraction), module, "ThirdBodyAttraction", 0);
        }

        void t_ThirdBodyAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "class_", make_descriptor(ThirdBodyAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "wrapfn_", make_descriptor(t_ThirdBodyAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(ThirdBodyAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*ThirdBodyAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_ThirdBodyAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThirdBodyAttraction::initializeClass, 1)))
            return NULL;
          return t_ThirdBodyAttraction::wrap_Object(ThirdBodyAttraction(((t_ThirdBodyAttraction *) arg)->object.this$));
        }
        static PyObject *t_ThirdBodyAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThirdBodyAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThirdBodyAttraction_init_(t_ThirdBodyAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          ThirdBodyAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = ThirdBodyAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThirdBodyAttraction_acceleration(t_ThirdBodyAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_ThirdBodyAttraction_dependsOnPositionOnly(t_ThirdBodyAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ThirdBodyAttraction_getParametersDrivers(t_ThirdBodyAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_ThirdBodyAttraction_get__parametersDrivers(t_ThirdBodyAttraction *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonAbstractTimeScales.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/TTScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonAbstractTimeScales::class$ = NULL;
      jmethodID *PythonAbstractTimeScales::mids$ = NULL;
      bool PythonAbstractTimeScales::live$ = false;

      jclass PythonAbstractTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonAbstractTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBDT_e66ecc29d9b0858a] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getEopHistory_a77e9d6bc0da2439] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getGLONASS_75a06d4a3e06af34] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGPS_a74060fc815076a7] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_935fd284aa6ccd53] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_d7fbef15a3374e78] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_f801e6f0b9a78872] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_700cdb40469496d6] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_e0443055c5547bea] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_9ccd709f9ae42bbc] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_61ba58ac615801fa] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_68d743a8c670f6cb] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_0d98cf69977e0c28] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_1e4acbbebd50858e] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractTimeScales::PythonAbstractTimeScales() : ::org::orekit::time::AbstractTimeScales(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonAbstractTimeScales::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      ::org::orekit::time::UT1Scale PythonAbstractTimeScales::getUT1(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_0d98cf69977e0c28], a0.this$));
      }

      jlong PythonAbstractTimeScales::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonAbstractTimeScales::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonAbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractTimeScales_init_(t_PythonAbstractTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractTimeScales_finalize(t_PythonAbstractTimeScales *self);
      static PyObject *t_PythonAbstractTimeScales_getUT1(t_PythonAbstractTimeScales *self, PyObject *args);
      static PyObject *t_PythonAbstractTimeScales_pythonExtension(t_PythonAbstractTimeScales *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractTimeScales_getBDT0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getEopHistory1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonAbstractTimeScales_getGLONASS2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getGPS3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getGST4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getIRNSS5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getQZSS6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTAI7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTCB8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTCG9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTDB10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTT11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getUTC12(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAbstractTimeScales_pythonDecRef13(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractTimeScales_get__self(t_PythonAbstractTimeScales *self, void *data);
      static PyGetSetDef t_PythonAbstractTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractTimeScales, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractTimeScales__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractTimeScales)[] = {
        { Py_tp_methods, t_PythonAbstractTimeScales__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractTimeScales_init_ },
        { Py_tp_getset, t_PythonAbstractTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractTimeScales)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeScales),
        NULL
      };

      DEFINE_TYPE(PythonAbstractTimeScales, t_PythonAbstractTimeScales, PythonAbstractTimeScales);

      void t_PythonAbstractTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractTimeScales), &PY_TYPE_DEF(PythonAbstractTimeScales), module, "PythonAbstractTimeScales", 1);
      }

      void t_PythonAbstractTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "class_", make_descriptor(PythonAbstractTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "wrapfn_", make_descriptor(t_PythonAbstractTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractTimeScales::initializeClass);
        JNINativeMethod methods[] = {
          { "getBDT", "()Lorg/orekit/time/BDTScale;", (void *) t_PythonAbstractTimeScales_getBDT0 },
          { "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonAbstractTimeScales_getEopHistory1 },
          { "getGLONASS", "()Lorg/orekit/time/GLONASSScale;", (void *) t_PythonAbstractTimeScales_getGLONASS2 },
          { "getGPS", "()Lorg/orekit/time/GPSScale;", (void *) t_PythonAbstractTimeScales_getGPS3 },
          { "getGST", "()Lorg/orekit/time/GalileoScale;", (void *) t_PythonAbstractTimeScales_getGST4 },
          { "getIRNSS", "()Lorg/orekit/time/IRNSSScale;", (void *) t_PythonAbstractTimeScales_getIRNSS5 },
          { "getQZSS", "()Lorg/orekit/time/QZSSScale;", (void *) t_PythonAbstractTimeScales_getQZSS6 },
          { "getTAI", "()Lorg/orekit/time/TAIScale;", (void *) t_PythonAbstractTimeScales_getTAI7 },
          { "getTCB", "()Lorg/orekit/time/TCBScale;", (void *) t_PythonAbstractTimeScales_getTCB8 },
          { "getTCG", "()Lorg/orekit/time/TCGScale;", (void *) t_PythonAbstractTimeScales_getTCG9 },
          { "getTDB", "()Lorg/orekit/time/TDBScale;", (void *) t_PythonAbstractTimeScales_getTDB10 },
          { "getTT", "()Lorg/orekit/time/TTScale;", (void *) t_PythonAbstractTimeScales_getTT11 },
          { "getUTC", "()Lorg/orekit/time/UTCScale;", (void *) t_PythonAbstractTimeScales_getUTC12 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractTimeScales_pythonDecRef13 },
        };
        env->registerNatives(cls, methods, 14);
      }

      static PyObject *t_PythonAbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractTimeScales::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractTimeScales::wrap_Object(PythonAbstractTimeScales(((t_PythonAbstractTimeScales *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractTimeScales_init_(t_PythonAbstractTimeScales *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractTimeScales object((jobject) NULL);

        INT_CALL(object = PythonAbstractTimeScales());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractTimeScales_finalize(t_PythonAbstractTimeScales *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractTimeScales_getUT1(t_PythonAbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getUT1(a0));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(PythonAbstractTimeScales), (PyObject *) self, "getUT1", args, 2);
      }

      static PyObject *t_PythonAbstractTimeScales_pythonExtension(t_PythonAbstractTimeScales *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractTimeScales_getBDT0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::BDTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBDT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::BDTScale::initializeClass, &value))
        {
          throwTypeError("getBDT", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getEopHistory1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEopHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEopHistory", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getGLONASS2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGLONASS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GLONASSScale::initializeClass, &value))
        {
          throwTypeError("getGLONASS", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getGPS3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GPSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGPS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GPSScale::initializeClass, &value))
        {
          throwTypeError("getGPS", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getGST4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGST", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GalileoScale::initializeClass, &value))
        {
          throwTypeError("getGST", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getIRNSS5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getIRNSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::IRNSSScale::initializeClass, &value))
        {
          throwTypeError("getIRNSS", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getQZSS6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getQZSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::QZSSScale::initializeClass, &value))
        {
          throwTypeError("getQZSS", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTAI7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TAIScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTAI", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TAIScale::initializeClass, &value))
        {
          throwTypeError("getTAI", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTCB8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCBScale::initializeClass, &value))
        {
          throwTypeError("getTCB", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTCG9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCGScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCG", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCGScale::initializeClass, &value))
        {
          throwTypeError("getTCG", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTDB10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TDBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTDB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TDBScale::initializeClass, &value))
        {
          throwTypeError("getTDB", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTT11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TTScale::initializeClass, &value))
        {
          throwTypeError("getTT", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getUTC12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::UTCScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUTC", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::UTCScale::initializeClass, &value))
        {
          throwTypeError("getUTC", result);
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

      static void JNICALL t_PythonAbstractTimeScales_pythonDecRef13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractTimeScales_get__self(t_PythonAbstractTimeScales *self, void *data)
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
#include "org/orekit/errors/OrekitInternalError.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitInternalError::class$ = NULL;
      jmethodID *OrekitInternalError::mids$ = NULL;
      bool OrekitInternalError::live$ = false;

      jclass OrekitInternalError::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitInternalError");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c5d3549d4f245728] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
          mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_26070c28e6ea354d] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_24e2edd6319f4c5a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_d8f5056e4f45c9a6] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitInternalError::OrekitInternalError(const ::java::lang::Throwable & a0) : ::java::lang::IllegalStateException(env->newObject(initializeClass, &mids$, mid_init$_c5d3549d4f245728, a0.this$)) {}

      ::java::lang::String OrekitInternalError::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String OrekitInternalError::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String OrekitInternalError::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_26070c28e6ea354d], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitInternalError::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_24e2edd6319f4c5a]));
      }

      ::org::hipparchus::exception::Localizable OrekitInternalError::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_d8f5056e4f45c9a6]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitInternalError_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitInternalError_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitInternalError_init_(t_OrekitInternalError *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitInternalError_getLocalizedMessage(t_OrekitInternalError *self, PyObject *args);
      static PyObject *t_OrekitInternalError_getMessage(t_OrekitInternalError *self, PyObject *args);
      static PyObject *t_OrekitInternalError_getParts(t_OrekitInternalError *self);
      static PyObject *t_OrekitInternalError_getSpecifier(t_OrekitInternalError *self);
      static PyObject *t_OrekitInternalError_get__localizedMessage(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__message(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__parts(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__specifier(t_OrekitInternalError *self, void *data);
      static PyGetSetDef t_OrekitInternalError__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitInternalError, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitInternalError, message),
        DECLARE_GET_FIELD(t_OrekitInternalError, parts),
        DECLARE_GET_FIELD(t_OrekitInternalError, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitInternalError__methods_[] = {
        DECLARE_METHOD(t_OrekitInternalError, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitInternalError, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitInternalError, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitInternalError, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitInternalError, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitInternalError, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitInternalError)[] = {
        { Py_tp_methods, t_OrekitInternalError__methods_ },
        { Py_tp_init, (void *) t_OrekitInternalError_init_ },
        { Py_tp_getset, t_OrekitInternalError__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitInternalError)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalStateException),
        NULL
      };

      DEFINE_TYPE(OrekitInternalError, t_OrekitInternalError, OrekitInternalError);

      void t_OrekitInternalError::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitInternalError), &PY_TYPE_DEF(OrekitInternalError), module, "OrekitInternalError", 0);
      }

      void t_OrekitInternalError::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "class_", make_descriptor(OrekitInternalError::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "wrapfn_", make_descriptor(t_OrekitInternalError::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitInternalError_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitInternalError::initializeClass, 1)))
          return NULL;
        return t_OrekitInternalError::wrap_Object(OrekitInternalError(((t_OrekitInternalError *) arg)->object.this$));
      }
      static PyObject *t_OrekitInternalError_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitInternalError::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitInternalError_init_(t_OrekitInternalError *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Throwable a0((jobject) NULL);
        OrekitInternalError object((jobject) NULL);

        if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
        {
          INT_CALL(object = OrekitInternalError(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitInternalError_getLocalizedMessage(t_OrekitInternalError *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitInternalError), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitInternalError_getMessage(t_OrekitInternalError *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitInternalError), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitInternalError_getParts(t_OrekitInternalError *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitInternalError_getSpecifier(t_OrekitInternalError *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitInternalError_get__localizedMessage(t_OrekitInternalError *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitInternalError_get__message(t_OrekitInternalError *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitInternalError_get__parts(t_OrekitInternalError *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitInternalError_get__specifier(t_OrekitInternalError *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/PythonForceModel.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *PythonForceModel::class$ = NULL;
      jmethodID *PythonForceModel::mids$ = NULL;
      bool PythonForceModel::live$ = false;

      jclass PythonForceModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/PythonForceModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_addContribution_6aa2b69cacacea60] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
          mids$[mid_addContribution_ab5e59960ebc27c2] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
          mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getParameterDriver_1ab2f25935933fb2] = env->getMethodID(cls, "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;");
          mids$[mid_getParameters_25e1757a36c4dde2] = env->getMethodID(cls, "getParameters", "()[D");
          mids$[mid_getParameters_5286daa2a5b3d227] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_isSupported_cde6b28e15c96b75] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonForceModel::PythonForceModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonForceModel::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonForceModel::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonForceModel::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonForceModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonForceModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonForceModel_init_(t_PythonForceModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonForceModel_finalize(t_PythonForceModel *self);
      static PyObject *t_PythonForceModel_pythonExtension(t_PythonForceModel *self, PyObject *args);
      static jobject JNICALL t_PythonForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonForceModel_addContribution2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonForceModel_addContribution3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonForceModel_dependsOnPositionOnly4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonForceModel_getParameterDriver5(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonForceModel_getParameters6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonForceModel_getParameters7(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonForceModel_getParametersDrivers8(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonForceModel_init9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonForceModel_isSupported10(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonForceModel_pythonDecRef11(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonForceModel_get__self(t_PythonForceModel *self, void *data);
      static PyGetSetDef t_PythonForceModel__fields_[] = {
        DECLARE_GET_FIELD(t_PythonForceModel, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonForceModel__methods_[] = {
        DECLARE_METHOD(t_PythonForceModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonForceModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonForceModel, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonForceModel, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonForceModel)[] = {
        { Py_tp_methods, t_PythonForceModel__methods_ },
        { Py_tp_init, (void *) t_PythonForceModel_init_ },
        { Py_tp_getset, t_PythonForceModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonForceModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonForceModel, t_PythonForceModel, PythonForceModel);

      void t_PythonForceModel::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonForceModel), &PY_TYPE_DEF(PythonForceModel), module, "PythonForceModel", 1);
      }

      void t_PythonForceModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "class_", make_descriptor(PythonForceModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "wrapfn_", make_descriptor(t_PythonForceModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonForceModel::initializeClass);
        JNINativeMethod methods[] = {
          { "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonForceModel_acceleration0 },
          { "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonForceModel_acceleration1 },
          { "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V", (void *) t_PythonForceModel_addContribution2 },
          { "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V", (void *) t_PythonForceModel_addContribution3 },
          { "dependsOnPositionOnly", "()Z", (void *) t_PythonForceModel_dependsOnPositionOnly4 },
          { "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;", (void *) t_PythonForceModel_getParameterDriver5 },
          { "getParameters", "()[D", (void *) t_PythonForceModel_getParameters6 },
          { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonForceModel_getParameters7 },
          { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonForceModel_getParametersDrivers8 },
          { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonForceModel_init9 },
          { "isSupported", "(Ljava/lang/String;)Z", (void *) t_PythonForceModel_isSupported10 },
          { "pythonDecRef", "()V", (void *) t_PythonForceModel_pythonDecRef11 },
        };
        env->registerNatives(cls, methods, 12);
      }

      static PyObject *t_PythonForceModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonForceModel::initializeClass, 1)))
          return NULL;
        return t_PythonForceModel::wrap_Object(PythonForceModel(((t_PythonForceModel *) arg)->object.this$));
      }
      static PyObject *t_PythonForceModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonForceModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonForceModel_init_(t_PythonForceModel *self, PyObject *args, PyObject *kwds)
      {
        PythonForceModel object((jobject) NULL);

        INT_CALL(object = PythonForceModel());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonForceModel_finalize(t_PythonForceModel *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonForceModel_pythonExtension(t_PythonForceModel *self, PyObject *args)
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

      static jobject JNICALL t_PythonForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = JArray<jdouble>(a1).wrap();
        PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("acceleration", result);
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

      static jobject JNICALL t_PythonForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("acceleration", result);
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

      static void JNICALL t_PythonForceModel_addContribution2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *o1 = ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::wrap_Object(::org::orekit::propagation::numerical::FieldTimeDerivativesEquations(a1));
        PyObject *result = PyObject_CallMethod(obj, "addContribution", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonForceModel_addContribution3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = ::org::orekit::propagation::numerical::t_TimeDerivativesEquations::wrap_Object(::org::orekit::propagation::numerical::TimeDerivativesEquations(a1));
        PyObject *result = PyObject_CallMethod(obj, "addContribution", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jboolean JNICALL t_PythonForceModel_dependsOnPositionOnly4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *result = PyObject_CallMethod(obj, "dependsOnPositionOnly", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("dependsOnPositionOnly", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonForceModel_getParameterDriver5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::ParameterDriver value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getParameterDriver", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &value))
        {
          throwTypeError("getParameterDriver", result);
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

      static jobject JNICALL t_PythonForceModel_getParameters6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("getParameters", result);
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

      static jobject JNICALL t_PythonForceModel_getParameters7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getParameters", result);
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

      static jobject JNICALL t_PythonForceModel_getParametersDrivers8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static void JNICALL t_PythonForceModel_init9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jboolean JNICALL t_PythonForceModel_isSupported10(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isSupported", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isSupported", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static void JNICALL t_PythonForceModel_pythonDecRef11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonForceModel_get__self(t_PythonForceModel *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistoryMetadataKey::class$ = NULL;
              jmethodID *AttitudeCovarianceHistoryMetadataKey::mids$ = NULL;
              bool AttitudeCovarianceHistoryMetadataKey::live$ = false;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COMMENT = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_BASIS = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_BASIS_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_PREV_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_REF_FRAME = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_TYPE = NULL;

              jclass AttitudeCovarianceHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_fd6ae81ae15d407c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;)Z");
                  mids$[mid_valueOf_da69b5ebcba70c41] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;");
                  mids$[mid_values_c949f946bb78b56c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_BASIS = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_BASIS_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_PREV_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_REF_FRAME = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_TYPE = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeCovarianceHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_fd6ae81ae15d407c], a0.this$, a1.this$, a2.this$);
              }

              AttitudeCovarianceHistoryMetadataKey AttitudeCovarianceHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeCovarianceHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_da69b5ebcba70c41], a0.this$));
              }

              JArray< AttitudeCovarianceHistoryMetadataKey > AttitudeCovarianceHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeCovarianceHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c949f946bb78b56c]));
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
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_of_(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_process(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_get__parameters_(t_AttitudeCovarianceHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistoryMetadataKey)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeCovarianceHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistoryMetadataKey, t_AttitudeCovarianceHistoryMetadataKey, AttitudeCovarianceHistoryMetadataKey);
              PyObject *t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(const AttitudeCovarianceHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceHistoryMetadataKey *self = (t_AttitudeCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceHistoryMetadataKey *self = (t_AttitudeCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeCovarianceHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistoryMetadataKey), &PY_TYPE_DEF(AttitudeCovarianceHistoryMetadataKey), module, "AttitudeCovarianceHistoryMetadataKey", 0);
              }

              void t_AttitudeCovarianceHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "class_", make_descriptor(AttitudeCovarianceHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeCovarianceHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COMMENT", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_BASIS", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_BASIS_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_PREV_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_REF_FRAME", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_TYPE", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_TYPE)));
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(AttitudeCovarianceHistoryMetadataKey(((t_AttitudeCovarianceHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_of_(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_process(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeCovarianceHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadataKey::valueOf(a0));
                  return t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< AttitudeCovarianceHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_get__parameters_(t_AttitudeCovarianceHistoryMetadataKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/propagation/analytical/AbstractAnalyticalMatricesHarvester.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/util/List.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalMatricesHarvester::class$ = NULL;
        jmethodID *AbstractAnalyticalMatricesHarvester::mids$ = NULL;
        bool AbstractAnalyticalMatricesHarvester::live$ = false;

        jclass AbstractAnalyticalMatricesHarvester::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalMatricesHarvester");

            mids$ = new jmethodID[max_mid];
            mids$[mid_freezeColumnsNames_a1fa5dae97ea5ed2] = env->getMethodID(cls, "freezeColumnsNames", "()V");
            mids$[mid_getAdditionalState_f227e5f48720b798] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
            mids$[mid_getGradientConverter_3c9b6f24c90a46d6] = env->getMethodID(cls, "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;");
            mids$[mid_getJacobiansColumnsNames_e62d3bb06d56d7e3] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getParametersJacobian_b7aa5791b069a41f] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getStateTransitionMatrix_b7aa5791b069a41f] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_setReferenceState_280c3390961e0a50] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractAnalyticalMatricesHarvester::freezeColumnsNames() const
        {
          env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_a1fa5dae97ea5ed2]);
        }

        JArray< jdouble > AbstractAnalyticalMatricesHarvester::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_f227e5f48720b798], a0.this$));
        }

        ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter AbstractAnalyticalMatricesHarvester::getGradientConverter() const
        {
          return ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter(env->callObjectMethod(this$, mids$[mid_getGradientConverter_3c9b6f24c90a46d6]));
        }

        ::java::util::List AbstractAnalyticalMatricesHarvester::getJacobiansColumnsNames() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_e62d3bb06d56d7e3]));
        }

        ::java::lang::String AbstractAnalyticalMatricesHarvester::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        ::org::orekit::orbits::OrbitType AbstractAnalyticalMatricesHarvester::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
        }

        ::org::hipparchus::linear::RealMatrix AbstractAnalyticalMatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_b7aa5791b069a41f], a0.this$));
        }

        ::org::orekit::orbits::PositionAngleType AbstractAnalyticalMatricesHarvester::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
        }

        ::org::hipparchus::linear::RealMatrix AbstractAnalyticalMatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_b7aa5791b069a41f], a0.this$));
        }

        void AbstractAnalyticalMatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setReferenceState_280c3390961e0a50], a0.this$);
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
        static PyObject *t_AbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_freezeColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getAdditionalState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getGradientConverter(t_AbstractAnalyticalMatricesHarvester *self);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getJacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getName(t_AbstractAnalyticalMatricesHarvester *self);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getOrbitType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getParametersJacobian(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getPositionAngleType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getStateTransitionMatrix(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_setReferenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__gradientConverter(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__jacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__name(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__orbitType(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__positionAngleType(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static int t_AbstractAnalyticalMatricesHarvester_set__referenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractAnalyticalMatricesHarvester__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, gradientConverter),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, jacobiansColumnsNames),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, name),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, orbitType),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, positionAngleType),
          DECLARE_SET_FIELD(t_AbstractAnalyticalMatricesHarvester, referenceState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalMatricesHarvester__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, freezeColumnsNames, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getAdditionalState, METH_O),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getGradientConverter, METH_NOARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getJacobiansColumnsNames, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getName, METH_NOARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getOrbitType, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getParametersJacobian, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getPositionAngleType, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getStateTransitionMatrix, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, setReferenceState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalMatricesHarvester)[] = {
          { Py_tp_methods, t_AbstractAnalyticalMatricesHarvester__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalMatricesHarvester__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalMatricesHarvester)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractMatricesHarvester),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalMatricesHarvester, t_AbstractAnalyticalMatricesHarvester, AbstractAnalyticalMatricesHarvester);

        void t_AbstractAnalyticalMatricesHarvester::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalMatricesHarvester), &PY_TYPE_DEF(AbstractAnalyticalMatricesHarvester), module, "AbstractAnalyticalMatricesHarvester", 0);
        }

        void t_AbstractAnalyticalMatricesHarvester::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalMatricesHarvester), "class_", make_descriptor(AbstractAnalyticalMatricesHarvester::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalMatricesHarvester), "wrapfn_", make_descriptor(t_AbstractAnalyticalMatricesHarvester::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalMatricesHarvester::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalMatricesHarvester::wrap_Object(AbstractAnalyticalMatricesHarvester(((t_AbstractAnalyticalMatricesHarvester *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalMatricesHarvester::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_freezeColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.freezeColumnsNames());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "freezeColumnsNames", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getAdditionalState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAdditionalState(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
          return NULL;
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getGradientConverter(t_AbstractAnalyticalMatricesHarvester *self)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradientConverter());
          return ::org::orekit::propagation::analytical::t_AbstractAnalyticalGradientConverter::wrap_Object(result);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getJacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getJacobiansColumnsNames());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getJacobiansColumnsNames", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getName(t_AbstractAnalyticalMatricesHarvester *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getOrbitType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getOrbitType", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getParametersJacobian(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getParametersJacobian(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getParametersJacobian", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getPositionAngleType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getPositionAngleType", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getStateTransitionMatrix(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getStateTransitionMatrix", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_setReferenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setReferenceState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "setReferenceState", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__gradientConverter(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradientConverter());
          return ::org::orekit::propagation::analytical::t_AbstractAnalyticalGradientConverter::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__jacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getJacobiansColumnsNames());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__name(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__orbitType(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__positionAngleType(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static int t_AbstractAnalyticalMatricesHarvester_set__referenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setReferenceState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/Well1024a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well1024a::class$ = NULL;
      jmethodID *Well1024a::mids$ = NULL;
      bool Well1024a::live$ = false;

      jclass Well1024a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well1024a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_86a2769cb881d388] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well1024a::Well1024a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      Well1024a::Well1024a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_86a2769cb881d388, a0.this$)) {}

      Well1024a::Well1024a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      Well1024a::Well1024a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

      jint Well1024a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_Well1024a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well1024a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well1024a_init_(t_Well1024a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well1024a_nextInt(t_Well1024a *self, PyObject *args);

      static PyMethodDef t_Well1024a__methods_[] = {
        DECLARE_METHOD(t_Well1024a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well1024a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well1024a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well1024a)[] = {
        { Py_tp_methods, t_Well1024a__methods_ },
        { Py_tp_init, (void *) t_Well1024a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well1024a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well1024a, t_Well1024a, Well1024a);

      void t_Well1024a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well1024a), &PY_TYPE_DEF(Well1024a), module, "Well1024a", 0);
      }

      void t_Well1024a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "class_", make_descriptor(Well1024a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "wrapfn_", make_descriptor(t_Well1024a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well1024a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well1024a::initializeClass, 1)))
          return NULL;
        return t_Well1024a::wrap_Object(Well1024a(((t_Well1024a *) arg)->object.this$));
      }
      static PyObject *t_Well1024a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well1024a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well1024a_init_(t_Well1024a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well1024a object((jobject) NULL);

            INT_CALL(object = Well1024a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well1024a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well1024a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well1024a(a0));
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

      static PyObject *t_Well1024a_nextInt(t_Well1024a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well1024a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeShiftable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *Orbit::class$ = NULL;
      jmethodID *Orbit::mids$ = NULL;
      bool Orbit::live$ = false;

      jclass Orbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/Orbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addKeplerContribution_2a5649bc1625306e] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_b74f83833fdad017] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_b74f83833fdad017] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_b74f83833fdad017] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_b74f83833fdad017] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_b74f83833fdad017] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_b74f83833fdad017] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_b74f83833fdad017] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_b74f83833fdad017] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_b74f83833fdad017] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getJacobianWrtCartesian_65c599ca9407e3cd] = env->getMethodID(cls, "getJacobianWrtCartesian", "(Lorg/orekit/orbits/PositionAngleType;[[D)V");
          mids$[mid_getJacobianWrtParameters_65c599ca9407e3cd] = env->getMethodID(cls, "getJacobianWrtParameters", "(Lorg/orekit/orbits/PositionAngleType;[[D)V");
          mids$[mid_getKeplerianMeanMotion_b74f83833fdad017] = env->getMethodID(cls, "getKeplerianMeanMotion", "()D");
          mids$[mid_getKeplerianPeriod_b74f83833fdad017] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
          mids$[mid_getLE_b74f83833fdad017] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_b74f83833fdad017] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_b74f83833fdad017] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_b74f83833fdad017] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_b74f83833fdad017] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_b74f83833fdad017] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getMeanAnomalyDotWrtA_b74f83833fdad017] = env->getMethodID(cls, "getMeanAnomalyDotWrtA", "()D");
          mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
          mids$[mid_getPVCoordinates_136cc8ba23b21c29] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_03c7a0bca588a4f5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_982d534f80d70918] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getType_c7d4737d7afca612] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_9ab94ac1dc23b105] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_isElliptical_9ab94ac1dc23b105] = env->getMethodID(cls, "isElliptical", "()Z");
          mids$[mid_shiftedBy_93453d78b4f95a28] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;");
          mids$[mid_initPosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_136cc8ba23b21c29] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");
          mids$[mid_fillHalfRow_9f8cd3edea4f0e61] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_8a5961cf8eb19262] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_44c48a103668461a] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_1c68c597005b904c] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_deb891bf31139295] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_1c3a172681737618] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_hasNonKeplerianAcceleration_80f28e82741a4d98] = env->getStaticMethodID(cls, "hasNonKeplerianAcceleration", "(Lorg/orekit/utils/PVCoordinates;D)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Orbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_2a5649bc1625306e], a0.this$, a1, a2.this$);
      }

      jdouble Orbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_b74f83833fdad017]);
      }

      jdouble Orbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_b74f83833fdad017]);
      }

      ::org::orekit::time::AbsoluteDate Orbit::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      jdouble Orbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
      }

      jdouble Orbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_b74f83833fdad017]);
      }

      jdouble Orbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_b74f83833fdad017]);
      }

      jdouble Orbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_b74f83833fdad017]);
      }

      jdouble Orbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_b74f83833fdad017]);
      }

      jdouble Orbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_b74f83833fdad017]);
      }

      ::org::orekit::frames::Frame Orbit::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      jdouble Orbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_b74f83833fdad017]);
      }

      jdouble Orbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_b74f83833fdad017]);
      }

      jdouble Orbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_b74f83833fdad017]);
      }

      jdouble Orbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_b74f83833fdad017]);
      }

      jdouble Orbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_b74f83833fdad017]);
      }

      jdouble Orbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_b74f83833fdad017]);
      }

      void Orbit::getJacobianWrtCartesian(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtCartesian_65c599ca9407e3cd], a0.this$, a1.this$);
      }

      void Orbit::getJacobianWrtParameters(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtParameters_65c599ca9407e3cd], a0.this$, a1.this$);
      }

      jdouble Orbit::getKeplerianMeanMotion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianMeanMotion_b74f83833fdad017]);
      }

      jdouble Orbit::getKeplerianPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_b74f83833fdad017]);
      }

      jdouble Orbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_b74f83833fdad017]);
      }

      jdouble Orbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_b74f83833fdad017]);
      }

      jdouble Orbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_b74f83833fdad017]);
      }

      jdouble Orbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_b74f83833fdad017]);
      }

      jdouble Orbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_b74f83833fdad017]);
      }

      jdouble Orbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_b74f83833fdad017]);
      }

      jdouble Orbit::getMeanAnomalyDotWrtA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomalyDotWrtA_b74f83833fdad017]);
      }

      jdouble Orbit::getMu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_136cc8ba23b21c29]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_03c7a0bca588a4f5], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_e5d15ef236cd9ffe], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Orbit::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Orbit::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_982d534f80d70918], a0.this$));
      }

      ::org::orekit::orbits::OrbitType Orbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_c7d4737d7afca612]));
      }

      jboolean Orbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_9ab94ac1dc23b105]);
      }

      jboolean Orbit::isElliptical() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isElliptical_9ab94ac1dc23b105]);
      }

      Orbit Orbit::shiftedBy(jdouble a0) const
      {
        return Orbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_93453d78b4f95a28], a0));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_Orbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Orbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Orbit_addKeplerContribution(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getA(t_Orbit *self);
      static PyObject *t_Orbit_getADot(t_Orbit *self);
      static PyObject *t_Orbit_getDate(t_Orbit *self);
      static PyObject *t_Orbit_getE(t_Orbit *self);
      static PyObject *t_Orbit_getEDot(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEx(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialExDot(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEy(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEyDot(t_Orbit *self);
      static PyObject *t_Orbit_getFrame(t_Orbit *self);
      static PyObject *t_Orbit_getHx(t_Orbit *self);
      static PyObject *t_Orbit_getHxDot(t_Orbit *self);
      static PyObject *t_Orbit_getHy(t_Orbit *self);
      static PyObject *t_Orbit_getHyDot(t_Orbit *self);
      static PyObject *t_Orbit_getI(t_Orbit *self);
      static PyObject *t_Orbit_getIDot(t_Orbit *self);
      static PyObject *t_Orbit_getJacobianWrtCartesian(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getJacobianWrtParameters(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getKeplerianMeanMotion(t_Orbit *self);
      static PyObject *t_Orbit_getKeplerianPeriod(t_Orbit *self);
      static PyObject *t_Orbit_getLE(t_Orbit *self);
      static PyObject *t_Orbit_getLEDot(t_Orbit *self);
      static PyObject *t_Orbit_getLM(t_Orbit *self);
      static PyObject *t_Orbit_getLMDot(t_Orbit *self);
      static PyObject *t_Orbit_getLv(t_Orbit *self);
      static PyObject *t_Orbit_getLvDot(t_Orbit *self);
      static PyObject *t_Orbit_getMeanAnomalyDotWrtA(t_Orbit *self);
      static PyObject *t_Orbit_getMu(t_Orbit *self);
      static PyObject *t_Orbit_getPVCoordinates(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getPosition(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getType(t_Orbit *self);
      static PyObject *t_Orbit_hasDerivatives(t_Orbit *self);
      static PyObject *t_Orbit_isElliptical(t_Orbit *self);
      static PyObject *t_Orbit_shiftedBy(t_Orbit *self, PyObject *arg);
      static PyObject *t_Orbit_get__a(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__aDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__date(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__e(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__eDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__elliptical(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEx(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialExDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEy(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEyDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__frame(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hx(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hxDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hy(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hyDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__i(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__iDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__keplerianMeanMotion(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__keplerianPeriod(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lE(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lEDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lM(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lMDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lv(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lvDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__meanAnomalyDotWrtA(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__mu(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__pVCoordinates(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__position(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__type(t_Orbit *self, void *data);
      static PyGetSetDef t_Orbit__fields_[] = {
        DECLARE_GET_FIELD(t_Orbit, a),
        DECLARE_GET_FIELD(t_Orbit, aDot),
        DECLARE_GET_FIELD(t_Orbit, date),
        DECLARE_GET_FIELD(t_Orbit, e),
        DECLARE_GET_FIELD(t_Orbit, eDot),
        DECLARE_GET_FIELD(t_Orbit, elliptical),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEx),
        DECLARE_GET_FIELD(t_Orbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEy),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_Orbit, frame),
        DECLARE_GET_FIELD(t_Orbit, hx),
        DECLARE_GET_FIELD(t_Orbit, hxDot),
        DECLARE_GET_FIELD(t_Orbit, hy),
        DECLARE_GET_FIELD(t_Orbit, hyDot),
        DECLARE_GET_FIELD(t_Orbit, i),
        DECLARE_GET_FIELD(t_Orbit, iDot),
        DECLARE_GET_FIELD(t_Orbit, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_Orbit, keplerianPeriod),
        DECLARE_GET_FIELD(t_Orbit, lE),
        DECLARE_GET_FIELD(t_Orbit, lEDot),
        DECLARE_GET_FIELD(t_Orbit, lM),
        DECLARE_GET_FIELD(t_Orbit, lMDot),
        DECLARE_GET_FIELD(t_Orbit, lv),
        DECLARE_GET_FIELD(t_Orbit, lvDot),
        DECLARE_GET_FIELD(t_Orbit, meanAnomalyDotWrtA),
        DECLARE_GET_FIELD(t_Orbit, mu),
        DECLARE_GET_FIELD(t_Orbit, pVCoordinates),
        DECLARE_GET_FIELD(t_Orbit, position),
        DECLARE_GET_FIELD(t_Orbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Orbit__methods_[] = {
        DECLARE_METHOD(t_Orbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Orbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Orbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getA, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getADot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getE, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialExDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEyDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHx, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHxDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHy, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHyDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getI, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getIDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getJacobianWrtCartesian, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getJacobianWrtParameters, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLE, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLM, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLMDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLv, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLvDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getMeanAnomalyDotWrtA, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getMu, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getType, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, hasDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, isElliptical, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Orbit)[] = {
        { Py_tp_methods, t_Orbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Orbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Orbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Orbit, t_Orbit, Orbit);

      void t_Orbit::install(PyObject *module)
      {
        installType(&PY_TYPE(Orbit), &PY_TYPE_DEF(Orbit), module, "Orbit", 0);
      }

      void t_Orbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "class_", make_descriptor(Orbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "wrapfn_", make_descriptor(t_Orbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Orbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Orbit::initializeClass, 1)))
          return NULL;
        return t_Orbit::wrap_Object(Orbit(((t_Orbit *) arg)->object.this$));
      }
      static PyObject *t_Orbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Orbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Orbit_addKeplerContribution(t_Orbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", args);
        return NULL;
      }

      static PyObject *t_Orbit_getA(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getADot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getADot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getDate(t_Orbit *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Orbit_getE(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEx(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialExDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEy(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEyDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getFrame(t_Orbit *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Orbit_getHx(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHxDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHxDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHy(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHyDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getI(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getIDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getIDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getJacobianWrtCartesian(t_Orbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobianWrtCartesian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtCartesian", args);
        return NULL;
      }

      static PyObject *t_Orbit_getJacobianWrtParameters(t_Orbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobianWrtParameters(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtParameters", args);
        return NULL;
      }

      static PyObject *t_Orbit_getKeplerianMeanMotion(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getKeplerianPeriod(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLE(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLEDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLM(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLMDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLv(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLv());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLvDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLvDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getMeanAnomalyDotWrtA(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomalyDotWrtA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getMu(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMu());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getPVCoordinates(t_Orbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_Orbit_getPosition(t_Orbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_Orbit_getType(t_Orbit *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_Orbit_hasDerivatives(t_Orbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasDerivatives());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Orbit_isElliptical(t_Orbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isElliptical());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Orbit_shiftedBy(t_Orbit *self, PyObject *arg)
      {
        jdouble a0;
        Orbit result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Orbit::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Orbit_get__a(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__aDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__date(t_Orbit *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__e(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__eDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__elliptical(t_Orbit *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isElliptical());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Orbit_get__equinoctialEx(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialExDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialEy(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialEyDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__frame(t_Orbit *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__hx(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hxDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hy(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hyDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__i(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__iDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__keplerianMeanMotion(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__keplerianPeriod(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lE(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lEDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lM(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lMDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lv(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lvDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__meanAnomalyDotWrtA(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomalyDotWrtA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__mu(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMu());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__pVCoordinates(t_Orbit *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__position(t_Orbit *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__type(t_Orbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouCivilianNavigationMessage::class$ = NULL;
            jmethodID *BeidouCivilianNavigationMessage::mids$ = NULL;
            bool BeidouCivilianNavigationMessage::live$ = false;
            ::java::lang::String *BeidouCivilianNavigationMessage::CNV1 = NULL;
            ::java::lang::String *BeidouCivilianNavigationMessage::CNV2 = NULL;
            ::java::lang::String *BeidouCivilianNavigationMessage::CNV3 = NULL;

            jclass BeidouCivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_aacf6092a9eb11f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/Frequency;)V");
                mids$[mid_getADot_b74f83833fdad017] = env->getMethodID(cls, "getADot", "()D");
                mids$[mid_getDeltaN0Dot_b74f83833fdad017] = env->getMethodID(cls, "getDeltaN0Dot", "()D");
                mids$[mid_getHealth_55546ef6a647f39b] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getIODC_55546ef6a647f39b] = env->getMethodID(cls, "getIODC", "()I");
                mids$[mid_getIODE_55546ef6a647f39b] = env->getMethodID(cls, "getIODE", "()I");
                mids$[mid_getIntegrityFlags_55546ef6a647f39b] = env->getMethodID(cls, "getIntegrityFlags", "()I");
                mids$[mid_getIscB1CD_b74f83833fdad017] = env->getMethodID(cls, "getIscB1CD", "()D");
                mids$[mid_getIscB1CP_b74f83833fdad017] = env->getMethodID(cls, "getIscB1CP", "()D");
                mids$[mid_getIscB2AD_b74f83833fdad017] = env->getMethodID(cls, "getIscB2AD", "()D");
                mids$[mid_getSatelliteType_24565fd6cf1b58ad] = env->getMethodID(cls, "getSatelliteType", "()Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");
                mids$[mid_getSignal_35d188bf58b06cba] = env->getMethodID(cls, "getSignal", "()Lorg/orekit/gnss/Frequency;");
                mids$[mid_getSisaiOc1_55546ef6a647f39b] = env->getMethodID(cls, "getSisaiOc1", "()I");
                mids$[mid_getSisaiOc2_55546ef6a647f39b] = env->getMethodID(cls, "getSisaiOc2", "()I");
                mids$[mid_getSisaiOcb_55546ef6a647f39b] = env->getMethodID(cls, "getSisaiOcb", "()I");
                mids$[mid_getSisaiOe_55546ef6a647f39b] = env->getMethodID(cls, "getSisaiOe", "()I");
                mids$[mid_getSismai_55546ef6a647f39b] = env->getMethodID(cls, "getSismai", "()I");
                mids$[mid_getTgdB1Cp_b74f83833fdad017] = env->getMethodID(cls, "getTgdB1Cp", "()D");
                mids$[mid_getTgdB2ap_b74f83833fdad017] = env->getMethodID(cls, "getTgdB2ap", "()D");
                mids$[mid_getTgdB2bI_b74f83833fdad017] = env->getMethodID(cls, "getTgdB2bI", "()D");
                mids$[mid_setADot_8ba9fe7a847cecad] = env->getMethodID(cls, "setADot", "(D)V");
                mids$[mid_setDeltaN0Dot_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeltaN0Dot", "(D)V");
                mids$[mid_setHealth_44ed599e93e8a30c] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setIODC_44ed599e93e8a30c] = env->getMethodID(cls, "setIODC", "(I)V");
                mids$[mid_setIODE_44ed599e93e8a30c] = env->getMethodID(cls, "setIODE", "(I)V");
                mids$[mid_setIntegrityFlags_44ed599e93e8a30c] = env->getMethodID(cls, "setIntegrityFlags", "(I)V");
                mids$[mid_setIscB1CD_8ba9fe7a847cecad] = env->getMethodID(cls, "setIscB1CD", "(D)V");
                mids$[mid_setIscB1CP_8ba9fe7a847cecad] = env->getMethodID(cls, "setIscB1CP", "(D)V");
                mids$[mid_setIscB2AD_8ba9fe7a847cecad] = env->getMethodID(cls, "setIscB2AD", "(D)V");
                mids$[mid_setSatelliteType_a4d0cb8da0a03811] = env->getMethodID(cls, "setSatelliteType", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;)V");
                mids$[mid_setSisaiOc1_44ed599e93e8a30c] = env->getMethodID(cls, "setSisaiOc1", "(I)V");
                mids$[mid_setSisaiOc2_44ed599e93e8a30c] = env->getMethodID(cls, "setSisaiOc2", "(I)V");
                mids$[mid_setSisaiOcb_44ed599e93e8a30c] = env->getMethodID(cls, "setSisaiOcb", "(I)V");
                mids$[mid_setSisaiOe_44ed599e93e8a30c] = env->getMethodID(cls, "setSisaiOe", "(I)V");
                mids$[mid_setSismai_44ed599e93e8a30c] = env->getMethodID(cls, "setSismai", "(I)V");
                mids$[mid_setTgdB1Cp_8ba9fe7a847cecad] = env->getMethodID(cls, "setTgdB1Cp", "(D)V");
                mids$[mid_setTgdB2ap_8ba9fe7a847cecad] = env->getMethodID(cls, "setTgdB2ap", "(D)V");
                mids$[mid_setTgdB2bI_8ba9fe7a847cecad] = env->getMethodID(cls, "setTgdB2bI", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CNV1 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV1", "Ljava/lang/String;"));
                CNV2 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV2", "Ljava/lang/String;"));
                CNV3 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV3", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouCivilianNavigationMessage::BeidouCivilianNavigationMessage(const ::org::orekit::gnss::Frequency & a0) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_aacf6092a9eb11f7, a0.this$)) {}

            jdouble BeidouCivilianNavigationMessage::getADot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getADot_b74f83833fdad017]);
            }

            jdouble BeidouCivilianNavigationMessage::getDeltaN0Dot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN0Dot_b74f83833fdad017]);
            }

            jint BeidouCivilianNavigationMessage::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_55546ef6a647f39b]);
            }

            jint BeidouCivilianNavigationMessage::getIODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODC_55546ef6a647f39b]);
            }

            jint BeidouCivilianNavigationMessage::getIODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODE_55546ef6a647f39b]);
            }

            jint BeidouCivilianNavigationMessage::getIntegrityFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getIntegrityFlags_55546ef6a647f39b]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB1CD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB1CD_b74f83833fdad017]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB1CP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB1CP_b74f83833fdad017]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB2AD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB2AD_b74f83833fdad017]);
            }

            ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType BeidouCivilianNavigationMessage::getSatelliteType() const
            {
              return ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType(env->callObjectMethod(this$, mids$[mid_getSatelliteType_24565fd6cf1b58ad]));
            }

            ::org::orekit::gnss::Frequency BeidouCivilianNavigationMessage::getSignal() const
            {
              return ::org::orekit::gnss::Frequency(env->callObjectMethod(this$, mids$[mid_getSignal_35d188bf58b06cba]));
            }

            jint BeidouCivilianNavigationMessage::getSisaiOc1() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOc1_55546ef6a647f39b]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOc2() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOc2_55546ef6a647f39b]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOcb() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOcb_55546ef6a647f39b]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOe() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOe_55546ef6a647f39b]);
            }

            jint BeidouCivilianNavigationMessage::getSismai() const
            {
              return env->callIntMethod(this$, mids$[mid_getSismai_55546ef6a647f39b]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB1Cp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB1Cp_b74f83833fdad017]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB2ap() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB2ap_b74f83833fdad017]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB2bI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB2bI_b74f83833fdad017]);
            }

            void BeidouCivilianNavigationMessage::setADot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setADot_8ba9fe7a847cecad], a0);
            }

            void BeidouCivilianNavigationMessage::setDeltaN0Dot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN0Dot_8ba9fe7a847cecad], a0);
            }

            void BeidouCivilianNavigationMessage::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_44ed599e93e8a30c], a0);
            }

            void BeidouCivilianNavigationMessage::setIODC(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODC_44ed599e93e8a30c], a0);
            }

            void BeidouCivilianNavigationMessage::setIODE(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODE_44ed599e93e8a30c], a0);
            }

            void BeidouCivilianNavigationMessage::setIntegrityFlags(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrityFlags_44ed599e93e8a30c], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB1CD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB1CD_8ba9fe7a847cecad], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB1CP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB1CP_8ba9fe7a847cecad], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB2AD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB2AD_8ba9fe7a847cecad], a0);
            }

            void BeidouCivilianNavigationMessage::setSatelliteType(const ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSatelliteType_a4d0cb8da0a03811], a0.this$);
            }

            void BeidouCivilianNavigationMessage::setSisaiOc1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOc1_44ed599e93e8a30c], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOc2(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOc2_44ed599e93e8a30c], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOcb(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOcb_44ed599e93e8a30c], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOe(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOe_44ed599e93e8a30c], a0);
            }

            void BeidouCivilianNavigationMessage::setSismai(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSismai_44ed599e93e8a30c], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB1Cp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB1Cp_8ba9fe7a847cecad], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB2ap(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB2ap_8ba9fe7a847cecad], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB2bI(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB2bI_8ba9fe7a847cecad], a0);
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
            static PyObject *t_BeidouCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_BeidouCivilianNavigationMessage_init_(t_BeidouCivilianNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BeidouCivilianNavigationMessage_getADot(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getDeltaN0Dot(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getHealth(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIODC(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIODE(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIntegrityFlags(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CD(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CP(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIscB2AD(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSatelliteType(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSignal(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc1(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc2(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOcb(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOe(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSismai(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB1Cp(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2ap(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2bI(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_setADot(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setDeltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setHealth(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIntegrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSatelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_get__aDot(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__aDot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__health(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__health(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iODC(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iODE(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__integrityFlags(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__integrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CD(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CP(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB2AD(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__satelliteType(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__satelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__signal(t_BeidouCivilianNavigationMessage *self, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc1(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc2(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOcb(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOe(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sismai(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2ap(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__tgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2bI(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__tgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_BeidouCivilianNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, aDot),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, deltaN0Dot),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, health),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iODC),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iODE),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, integrityFlags),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iscB1CD),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iscB1CP),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iscB2AD),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, satelliteType),
              DECLARE_GET_FIELD(t_BeidouCivilianNavigationMessage, signal),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOc1),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOc2),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOcb),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOe),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sismai),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, tgdB1Cp),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, tgdB2ap),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, tgdB2bI),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouCivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getADot, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getDeltaN0Dot, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIODC, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIODE, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIntegrityFlags, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIscB1CD, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIscB1CP, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIscB2AD, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSatelliteType, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSignal, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOc1, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOc2, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOcb, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOe, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSismai, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getTgdB1Cp, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getTgdB2ap, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getTgdB2bI, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setADot, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setDeltaN0Dot, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setHealth, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIODC, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIODE, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIntegrityFlags, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIscB1CD, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIscB1CP, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIscB2AD, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSatelliteType, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOc1, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOc2, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOcb, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOe, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSismai, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setTgdB1Cp, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setTgdB2ap, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setTgdB2bI, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouCivilianNavigationMessage)[] = {
              { Py_tp_methods, t_BeidouCivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_BeidouCivilianNavigationMessage_init_ },
              { Py_tp_getset, t_BeidouCivilianNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouCivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(BeidouCivilianNavigationMessage, t_BeidouCivilianNavigationMessage, BeidouCivilianNavigationMessage);

            void t_BeidouCivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouCivilianNavigationMessage), &PY_TYPE_DEF(BeidouCivilianNavigationMessage), module, "BeidouCivilianNavigationMessage", 0);
            }

            void t_BeidouCivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "class_", make_descriptor(BeidouCivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "wrapfn_", make_descriptor(t_BeidouCivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(BeidouCivilianNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "CNV1", make_descriptor(j2p(*BeidouCivilianNavigationMessage::CNV1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "CNV2", make_descriptor(j2p(*BeidouCivilianNavigationMessage::CNV2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "CNV3", make_descriptor(j2p(*BeidouCivilianNavigationMessage::CNV3)));
            }

            static PyObject *t_BeidouCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouCivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_BeidouCivilianNavigationMessage::wrap_Object(BeidouCivilianNavigationMessage(((t_BeidouCivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_BeidouCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouCivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_BeidouCivilianNavigationMessage_init_(t_BeidouCivilianNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::gnss::Frequency a0((jobject) NULL);
              PyTypeObject **p0;
              BeidouCivilianNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
              {
                INT_CALL(object = BeidouCivilianNavigationMessage(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getADot(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getADot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getDeltaN0Dot(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getHealth(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIODC(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIODE(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODE());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIntegrityFlags(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIntegrityFlags());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CD(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscB1CD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CP(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscB1CP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIscB2AD(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscB2AD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSatelliteType(t_BeidouCivilianNavigationMessage *self)
            {
              ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType result((jobject) NULL);
              OBJ_CALL(result = self->object.getSatelliteType());
              return ::org::orekit::propagation::analytical::gnss::data::t_BeidouSatelliteType::wrap_Object(result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSignal(t_BeidouCivilianNavigationMessage *self)
            {
              ::org::orekit::gnss::Frequency result((jobject) NULL);
              OBJ_CALL(result = self->object.getSignal());
              return ::org::orekit::gnss::t_Frequency::wrap_Object(result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc1(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOc1());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc2(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOc2());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOcb(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOcb());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOe(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOe());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSismai(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSismai());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB1Cp(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTgdB1Cp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2ap(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTgdB2ap());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2bI(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTgdB2bI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setADot(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setADot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setADot", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setDeltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaN0Dot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaN0Dot", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setHealth(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODC", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODE", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIntegrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIntegrityFlags(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrityFlags", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscB1CD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscB1CD", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscB1CP(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscB1CP", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscB2AD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscB2AD", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSatelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::gnss::data::t_BeidouSatelliteType::parameters_))
              {
                OBJ_CALL(self->object.setSatelliteType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSatelliteType", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOc1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOc1", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOc2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOc2", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOcb(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOcb", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOe(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOe", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSismai(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSismai", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTgdB1Cp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTgdB1Cp", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTgdB2ap(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTgdB2ap", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTgdB2bI(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTgdB2bI", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__aDot(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getADot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__aDot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setADot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aDot", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaN0Dot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaN0Dot", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__health(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__health(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iODC(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODC());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODC", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iODE(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODE());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODE", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__integrityFlags(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIntegrityFlags());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__integrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIntegrityFlags(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrityFlags", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CD(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscB1CD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscB1CD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscB1CD", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CP(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscB1CP());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscB1CP(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscB1CP", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB2AD(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscB2AD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscB2AD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscB2AD", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__satelliteType(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType value((jobject) NULL);
              OBJ_CALL(value = self->object.getSatelliteType());
              return ::org::orekit::propagation::analytical::gnss::data::t_BeidouSatelliteType::wrap_Object(value);
            }
            static int t_BeidouCivilianNavigationMessage_set__satelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::initializeClass, &value))
                {
                  INT_CALL(self->object.setSatelliteType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "satelliteType", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__signal(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              ::org::orekit::gnss::Frequency value((jobject) NULL);
              OBJ_CALL(value = self->object.getSignal());
              return ::org::orekit::gnss::t_Frequency::wrap_Object(value);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc1(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOc1());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOc1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOc1", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc2(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOc2());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOc2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOc2", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOcb(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOcb());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOcb(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOcb", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOe(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOe());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOe(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOe", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sismai(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSismai());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSismai(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sismai", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTgdB1Cp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTgdB1Cp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tgdB1Cp", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2ap(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTgdB2ap());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__tgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTgdB2ap(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tgdB2ap", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2bI(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTgdB2bI());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__tgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTgdB2bI(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tgdB2bI", arg);
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
#include "org/orekit/frames/AbstractEopParser.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractEopParser::class$ = NULL;
      jmethodID *AbstractEopParser::mids$ = NULL;
      bool AbstractEopParser::live$ = false;

      jclass AbstractEopParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractEopParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConverter_4136999951aaddfb] = env->getMethodID(cls, "getConverter", "()Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getUtc_34d3bda0a8989e3e] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");
          mids$[mid_getItrfVersionProvider_6c4234c6ef7ef572] = env->getMethodID(cls, "getItrfVersionProvider", "()Lorg/orekit/frames/ItrfVersionProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
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
      static PyObject *t_AbstractEopParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractEopParser_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_AbstractEopParser__methods_[] = {
        DECLARE_METHOD(t_AbstractEopParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractEopParser, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractEopParser)[] = {
        { Py_tp_methods, t_AbstractEopParser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractEopParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractEopParser, t_AbstractEopParser, AbstractEopParser);

      void t_AbstractEopParser::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractEopParser), &PY_TYPE_DEF(AbstractEopParser), module, "AbstractEopParser", 0);
      }

      void t_AbstractEopParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "class_", make_descriptor(AbstractEopParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "wrapfn_", make_descriptor(t_AbstractEopParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractEopParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractEopParser::initializeClass, 1)))
          return NULL;
        return t_AbstractEopParser::wrap_Object(AbstractEopParser(((t_AbstractEopParser *) arg)->object.this$));
      }
      static PyObject *t_AbstractEopParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractEopParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonics.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonUnnormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *PythonUnnormalizedSphericalHarmonics::mids$ = NULL;
          bool PythonUnnormalizedSphericalHarmonics::live$ = false;

          jclass PythonUnnormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getUnnormalizedCnm_cad98089d00f8a5b] = env->getMethodID(cls, "getUnnormalizedCnm", "(II)D");
              mids$[mid_getUnnormalizedSnm_cad98089d00f8a5b] = env->getMethodID(cls, "getUnnormalizedSnm", "(II)D");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonUnnormalizedSphericalHarmonics::PythonUnnormalizedSphericalHarmonics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonUnnormalizedSphericalHarmonics::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonUnnormalizedSphericalHarmonics::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonUnnormalizedSphericalHarmonics::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonUnnormalizedSphericalHarmonics_init_(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_finalize(t_PythonUnnormalizedSphericalHarmonics *self);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_pythonExtension(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonics_getDate0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static void JNICALL t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_get__self(t_PythonUnnormalizedSphericalHarmonics *self, void *data);
          static PyGetSetDef t_PythonUnnormalizedSphericalHarmonics__fields_[] = {
            DECLARE_GET_FIELD(t_PythonUnnormalizedSphericalHarmonics, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonUnnormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonUnnormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_PythonUnnormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) t_PythonUnnormalizedSphericalHarmonics_init_ },
            { Py_tp_getset, t_PythonUnnormalizedSphericalHarmonics__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonUnnormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonUnnormalizedSphericalHarmonics, t_PythonUnnormalizedSphericalHarmonics, PythonUnnormalizedSphericalHarmonics);

          void t_PythonUnnormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonUnnormalizedSphericalHarmonics), &PY_TYPE_DEF(PythonUnnormalizedSphericalHarmonics), module, "PythonUnnormalizedSphericalHarmonics", 1);
          }

          void t_PythonUnnormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "class_", make_descriptor(PythonUnnormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_PythonUnnormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonUnnormalizedSphericalHarmonics::initializeClass);
            JNINativeMethod methods[] = {
              { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonUnnormalizedSphericalHarmonics_getDate0 },
              { "getUnnormalizedCnm", "(II)D", (void *) t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1 },
              { "getUnnormalizedSnm", "(II)D", (void *) t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2 },
              { "pythonDecRef", "()V", (void *) t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonUnnormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_PythonUnnormalizedSphericalHarmonics::wrap_Object(PythonUnnormalizedSphericalHarmonics(((t_PythonUnnormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonUnnormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonUnnormalizedSphericalHarmonics_init_(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args, PyObject *kwds)
          {
            PythonUnnormalizedSphericalHarmonics object((jobject) NULL);

            INT_CALL(object = PythonUnnormalizedSphericalHarmonics());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_finalize(t_PythonUnnormalizedSphericalHarmonics *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_pythonExtension(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args)
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

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonics_getDate0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getDate", result);
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

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedCnm", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getUnnormalizedCnm", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedSnm", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getUnnormalizedSnm", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_get__self(t_PythonUnnormalizedSphericalHarmonics *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree$VanishingCutHandler::class$ = NULL;
        jmethodID *BSPTree$VanishingCutHandler::mids$ = NULL;
        bool BSPTree$VanishingCutHandler::live$ = false;

        jclass BSPTree$VanishingCutHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_fixNode_00f0f0312191ba7e] = env->getMethodID(cls, "fixNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/BSPTree;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::BSPTree BSPTree$VanishingCutHandler::fixNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_fixNode_00f0f0312191ba7e], a0.this$));
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
      namespace partitioning {
        static PyObject *t_BSPTree$VanishingCutHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_of_(t_BSPTree$VanishingCutHandler *self, PyObject *args);
        static PyObject *t_BSPTree$VanishingCutHandler_fixNode(t_BSPTree$VanishingCutHandler *self, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_get__parameters_(t_BSPTree$VanishingCutHandler *self, void *data);
        static PyGetSetDef t_BSPTree$VanishingCutHandler__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTree$VanishingCutHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree$VanishingCutHandler__methods_[] = {
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, fixNode, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree$VanishingCutHandler)[] = {
          { Py_tp_methods, t_BSPTree$VanishingCutHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTree$VanishingCutHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree$VanishingCutHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree$VanishingCutHandler, t_BSPTree$VanishingCutHandler, BSPTree$VanishingCutHandler);
        PyObject *t_BSPTree$VanishingCutHandler::wrap_Object(const BSPTree$VanishingCutHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$VanishingCutHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$VanishingCutHandler *self = (t_BSPTree$VanishingCutHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree$VanishingCutHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$VanishingCutHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$VanishingCutHandler *self = (t_BSPTree$VanishingCutHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree$VanishingCutHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree$VanishingCutHandler), &PY_TYPE_DEF(BSPTree$VanishingCutHandler), module, "BSPTree$VanishingCutHandler", 0);
        }

        void t_BSPTree$VanishingCutHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "class_", make_descriptor(BSPTree$VanishingCutHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "wrapfn_", make_descriptor(t_BSPTree$VanishingCutHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree$VanishingCutHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree$VanishingCutHandler::initializeClass, 1)))
            return NULL;
          return t_BSPTree$VanishingCutHandler::wrap_Object(BSPTree$VanishingCutHandler(((t_BSPTree$VanishingCutHandler *) arg)->object.this$));
        }
        static PyObject *t_BSPTree$VanishingCutHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree$VanishingCutHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree$VanishingCutHandler_of_(t_BSPTree$VanishingCutHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTree$VanishingCutHandler_fixNode(t_BSPTree$VanishingCutHandler *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.fixNode(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "fixNode", arg);
          return NULL;
        }
        static PyObject *t_BSPTree$VanishingCutHandler_get__parameters_(t_BSPTree$VanishingCutHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationParser.h"
#include "org/orekit/files/rinex/navigation/RinexNavigation.h"
#include "org/orekit/data/DataSource.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigationParser::class$ = NULL;
          jmethodID *RinexNavigationParser::mids$ = NULL;
          bool RinexNavigationParser::live$ = false;

          jclass RinexNavigationParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigationParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_0473fe41b53e3616] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;)V");
              mids$[mid_parse_58f8fb0799838569] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/rinex/navigation/RinexNavigation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigationParser::RinexNavigationParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          RinexNavigationParser::RinexNavigationParser(const ::org::orekit::time::TimeScales & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0473fe41b53e3616, a0.this$)) {}

          ::org::orekit::files::rinex::navigation::RinexNavigation RinexNavigationParser::parse(const ::org::orekit::data::DataSource & a0) const
          {
            return ::org::orekit::files::rinex::navigation::RinexNavigation(env->callObjectMethod(this$, mids$[mid_parse_58f8fb0799838569], a0.this$));
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
          static PyObject *t_RinexNavigationParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigationParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexNavigationParser_init_(t_RinexNavigationParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigationParser_parse(t_RinexNavigationParser *self, PyObject *arg);

          static PyMethodDef t_RinexNavigationParser__methods_[] = {
            DECLARE_METHOD(t_RinexNavigationParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationParser, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigationParser)[] = {
            { Py_tp_methods, t_RinexNavigationParser__methods_ },
            { Py_tp_init, (void *) t_RinexNavigationParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigationParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexNavigationParser, t_RinexNavigationParser, RinexNavigationParser);

          void t_RinexNavigationParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigationParser), &PY_TYPE_DEF(RinexNavigationParser), module, "RinexNavigationParser", 0);
          }

          void t_RinexNavigationParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "class_", make_descriptor(RinexNavigationParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "wrapfn_", make_descriptor(t_RinexNavigationParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigationParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigationParser::initializeClass, 1)))
              return NULL;
            return t_RinexNavigationParser::wrap_Object(RinexNavigationParser(((t_RinexNavigationParser *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigationParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigationParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexNavigationParser_init_(t_RinexNavigationParser *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RinexNavigationParser object((jobject) NULL);

                INT_CALL(object = RinexNavigationParser());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScales a0((jobject) NULL);
                RinexNavigationParser object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                {
                  INT_CALL(object = RinexNavigationParser(a0));
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

          static PyObject *t_RinexNavigationParser_parse(t_RinexNavigationParser *self, PyObject *arg)
          {
            ::org::orekit::data::DataSource a0((jobject) NULL);
            ::org::orekit::files::rinex::navigation::RinexNavigation result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::files::rinex::navigation::t_RinexNavigation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *SymmetricGaussIntegrator::class$ = NULL;
          jmethodID *SymmetricGaussIntegrator::mids$ = NULL;
          bool SymmetricGaussIntegrator::live$ = false;

          jclass SymmetricGaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_24d37c4bbd61d20e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_integrate_6bcb3ad6aa509267] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/UnivariateFunction;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SymmetricGaussIntegrator::SymmetricGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_24d37c4bbd61d20e, a0.this$)) {}

          SymmetricGaussIntegrator::SymmetricGaussIntegrator(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

          jdouble SymmetricGaussIntegrator::integrate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_integrate_6bcb3ad6aa509267], a0.this$);
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_SymmetricGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SymmetricGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SymmetricGaussIntegrator_init_(t_SymmetricGaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SymmetricGaussIntegrator_integrate(t_SymmetricGaussIntegrator *self, PyObject *args);

          static PyMethodDef t_SymmetricGaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_SymmetricGaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricGaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricGaussIntegrator, integrate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SymmetricGaussIntegrator)[] = {
            { Py_tp_methods, t_SymmetricGaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_SymmetricGaussIntegrator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SymmetricGaussIntegrator)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::GaussIntegrator),
            NULL
          };

          DEFINE_TYPE(SymmetricGaussIntegrator, t_SymmetricGaussIntegrator, SymmetricGaussIntegrator);

          void t_SymmetricGaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(SymmetricGaussIntegrator), &PY_TYPE_DEF(SymmetricGaussIntegrator), module, "SymmetricGaussIntegrator", 0);
          }

          void t_SymmetricGaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "class_", make_descriptor(SymmetricGaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "wrapfn_", make_descriptor(t_SymmetricGaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SymmetricGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SymmetricGaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_SymmetricGaussIntegrator::wrap_Object(SymmetricGaussIntegrator(((t_SymmetricGaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_SymmetricGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SymmetricGaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SymmetricGaussIntegrator_init_(t_SymmetricGaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                SymmetricGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = SymmetricGaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                SymmetricGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = SymmetricGaussIntegrator(a0, a1));
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

          static PyObject *t_SymmetricGaussIntegrator_integrate(t_SymmetricGaussIntegrator *self, PyObject *args)
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SymmetricGaussIntegrator), (PyObject *) self, "integrate", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ManeuverKey::class$ = NULL;
              jmethodID *ManeuverKey::mids$ = NULL;
              bool ManeuverKey::live$ = false;
              ManeuverKey *ManeuverKey::COMMENT = NULL;
              ManeuverKey *ManeuverKey::MAN_DELTA_MASS = NULL;
              ManeuverKey *ManeuverKey::MAN_DURATION = NULL;
              ManeuverKey *ManeuverKey::MAN_EPOCH_START = NULL;
              ManeuverKey *ManeuverKey::MAN_REF_FRAME = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_1 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_2 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_3 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_X = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_Y = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_Z = NULL;

              jclass ManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_fbaf6a77a0e2a2da] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;)Z");
                  mids$[mid_valueOf_a5a58c398ee66a96] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;");
                  mids$[mid_values_6479885f50a3f609] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_DELTA_MASS = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_DURATION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_EPOCH_START = new ManeuverKey(env->getStaticObjectField(cls, "MAN_EPOCH_START", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_REF_FRAME = new ManeuverKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_1 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_1", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_2 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_2", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_3 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_3", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_X = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_X", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_Y = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_Y", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_Z = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_Z", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_fbaf6a77a0e2a2da], a0.this$, a1.this$, a2.this$);
              }

              ManeuverKey ManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a5a58c398ee66a96], a0.this$));
              }

              JArray< ManeuverKey > ManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_6479885f50a3f609]));
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
              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverKey_values(PyTypeObject *type);
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data);
              static PyGetSetDef t_ManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverKey__methods_[] = {
                DECLARE_METHOD(t_ManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverKey)[] = {
                { Py_tp_methods, t_ManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverKey, t_ManeuverKey, ManeuverKey);
              PyObject *t_ManeuverKey::wrap_Object(const ManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverKey), &PY_TYPE_DEF(ManeuverKey), module, "ManeuverKey", 0);
              }

              void t_ManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "class_", make_descriptor(ManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "wrapfn_", make_descriptor(t_ManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "COMMENT", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DELTA_MASS", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DURATION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_EPOCH_START", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_EPOCH_START)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_REF_FRAME", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_1", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_2", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_3", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_X", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_Y", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_Z", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_Z)));
              }

              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_ManeuverKey::wrap_Object(ManeuverKey(((t_ManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ManeuverKey::valueOf(a0));
                  return t_ManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverKey_values(PyTypeObject *type)
              {
                JArray< ManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverKey::wrap_jobject);
              }
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
