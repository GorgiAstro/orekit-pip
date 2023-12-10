#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/AbstractGenerator.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/util/List.h"
#include "java/lang/CharSequence.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/io/IOException.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "java/lang/Appendable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *AbstractGenerator::class$ = NULL;
            jmethodID *AbstractGenerator::mids$ = NULL;
            bool AbstractGenerator::live$ = false;

            jclass AbstractGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/AbstractGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_421e10c76f266368] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;DZ)V");
                mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_40338d1d67048bfb] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_40338d1d67048bfb] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_b3e3531a0f06efb9] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_e8f51f84167aafbd] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_enterSection_d0bc48d5b00dc40c] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_11b109bd155ca898] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getOutputName_11b109bd155ca898] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_0fa09c18fee449d5] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_siToCcsdsName_92807efd57acb082] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_unitsListToString_34ebc3df083d2284] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeEntry_ebeb70e5f85f1dc9] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_8e27d18ccaeb99ba] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_f12777dd1821e86a] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_d298f8af5ad811ef] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_b4657dba79ed747b] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_95abad989fa63d1a] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_182383f649d6a00c] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_636c0bbb96cab723] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_5e688138ffe60231] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");
                mids$[mid_writeUnits_43de8ce72aa2edad] = env->getMethodID(cls, "writeUnits", "(Lorg/orekit/utils/units/Unit;)Z");
                mids$[mid_complain_d6df10f4e35ef1e8] = env->getMethodID(cls, "complain", "(Ljava/lang/String;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractGenerator::AbstractGenerator(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, jdouble a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_421e10c76f266368, a0.this$, a1.this$, a2, a3)) {}

            void AbstractGenerator::close() const
            {
              env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
            }

            ::java::lang::String AbstractGenerator::dateToCalendarString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToCalendarString_40338d1d67048bfb], a0.this$, a1.this$));
            }

            ::java::lang::String AbstractGenerator::dateToString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_40338d1d67048bfb], a0.this$, a1.this$));
            }

            ::java::lang::String AbstractGenerator::dateToString(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_b3e3531a0f06efb9], a0, a1, a2, a3, a4, a5));
            }

            ::java::lang::String AbstractGenerator::doubleToString(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_doubleToString_e8f51f84167aafbd], a0));
            }

            void AbstractGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_d0bc48d5b00dc40c], a0.this$);
            }

            ::java::lang::String AbstractGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_11b109bd155ca898]));
            }

            ::java::lang::String AbstractGenerator::getOutputName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputName_11b109bd155ca898]));
            }

            void AbstractGenerator::newLine() const
            {
              env->callVoidMethod(this$, mids$[mid_newLine_0fa09c18fee449d5]);
            }

            ::java::lang::String AbstractGenerator::siToCcsdsName(const ::java::lang::String & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_siToCcsdsName_92807efd57acb082], a0.this$));
            }

            ::java::lang::String AbstractGenerator::unitsListToString(const ::java::util::List & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_unitsListToString_34ebc3df083d2284], a0.this$));
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Enum & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_ebeb70e5f85f1dc9], a0.this$, a1.this$, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jchar a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_8e27d18ccaeb99ba], a0.this$, a1, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jint a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_f12777dd1821e86a], a0.this$, a1, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_d298f8af5ad811ef], a0.this$, a1.this$, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Double & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_b4657dba79ed747b], a0.this$, a1.this$, a2.this$, a3);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_95abad989fa63d1a], a0.this$, a1, a2.this$, a3);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1, const ::org::orekit::time::AbsoluteDate & a2, jboolean a3, jboolean a4) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_182383f649d6a00c], a0.this$, a1.this$, a2.this$, a3, a4);
            }

            void AbstractGenerator::writeRawData(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_636c0bbb96cab723], a0);
            }

            void AbstractGenerator::writeRawData(const ::java::lang::CharSequence & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_5e688138ffe60231], a0.this$);
            }

            jboolean AbstractGenerator::writeUnits(const ::org::orekit::utils::units::Unit & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_writeUnits_43de8ce72aa2edad], a0.this$);
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
          namespace generation {
            static PyObject *t_AbstractGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractGenerator_init_(t_AbstractGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractGenerator_close(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_dateToCalendarString(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_dateToString(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_doubleToString(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_enterSection(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_exitSection(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_getOutputName(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_newLine(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_siToCcsdsName(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_unitsListToString(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_writeEntry(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_writeRawData(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_writeUnits(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_get__outputName(t_AbstractGenerator *self, void *data);
            static PyGetSetDef t_AbstractGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGenerator, outputName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGenerator__methods_[] = {
              DECLARE_METHOD(t_AbstractGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGenerator, close, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, dateToCalendarString, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, dateToString, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, doubleToString, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, enterSection, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, exitSection, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, getOutputName, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, newLine, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, siToCcsdsName, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, unitsListToString, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, writeRawData, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, writeUnits, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGenerator)[] = {
              { Py_tp_methods, t_AbstractGenerator__methods_ },
              { Py_tp_init, (void *) t_AbstractGenerator_init_ },
              { Py_tp_getset, t_AbstractGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGenerator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractGenerator, t_AbstractGenerator, AbstractGenerator);

            void t_AbstractGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGenerator), &PY_TYPE_DEF(AbstractGenerator), module, "AbstractGenerator", 0);
            }

            void t_AbstractGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "class_", make_descriptor(AbstractGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "wrapfn_", make_descriptor(t_AbstractGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGenerator::initializeClass, 1)))
                return NULL;
              return t_AbstractGenerator::wrap_Object(AbstractGenerator(((t_AbstractGenerator *) arg)->object.this$));
            }
            static PyObject *t_AbstractGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractGenerator_init_(t_AbstractGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jboolean a3;
              AbstractGenerator object((jobject) NULL);

              if (!parseArgs(args, "ksDZ", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AbstractGenerator(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractGenerator_close(t_AbstractGenerator *self)
            {
              OBJ_CALL(self->object.close());
              Py_RETURN_NONE;
            }

            static PyObject *t_AbstractGenerator_dateToCalendarString(t_AbstractGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.dateToCalendarString(a0, a1));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "dateToCalendarString", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_dateToString(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1));
                    return j2p(result);
                  }
                }
                break;
               case 6:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1, a2, a3, a4, a5));
                    return j2p(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "dateToString", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_doubleToString(t_AbstractGenerator *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.doubleToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "doubleToString", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_enterSection(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_exitSection(t_AbstractGenerator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.exitSection());
              return j2p(result);
            }

            static PyObject *t_AbstractGenerator_getOutputName(t_AbstractGenerator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOutputName());
              return j2p(result);
            }

            static PyObject *t_AbstractGenerator_newLine(t_AbstractGenerator *self)
            {
              OBJ_CALL(self->object.newLine());
              Py_RETURN_NONE;
            }

            static PyObject *t_AbstractGenerator_siToCcsdsName(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = self->object.siToCcsdsName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToCcsdsName", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_unitsListToString(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.unitsListToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "unitsListToString", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeEntry(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Enum a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jchar a1;
                  jboolean a2;

                  if (!parseArgs(args, "sCZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jint a1;
                  jboolean a2;

                  if (!parseArgs(args, "sIZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::util::List a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Double a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sOkZ", ::java::lang::PY_TYPE(Double), ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sDkZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 5:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                  jboolean a3;
                  jboolean a4;

                  if (!parseArgs(args, "skkZZ", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3, a4));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeEntry", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeRawData(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jchar a0;

                  if (!parseArgs(args, "C", &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::CharSequence a0((jobject) NULL);

                  if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeRawData", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeUnits(t_AbstractGenerator *self, PyObject *arg)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::utils::units::Unit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.writeUnits(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "writeUnits", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_get__outputName(t_AbstractGenerator *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOutputName());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *QZSSScale::class$ = NULL;
      jmethodID *QZSSScale::mids$ = NULL;
      bool QZSSScale::live$ = false;

      jclass QZSSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/QZSSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_56358b00ba005b52] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String QZSSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jdouble QZSSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement QZSSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      jdouble QZSSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_56358b00ba005b52], a0.this$, a1.this$);
      }

      ::java::lang::String QZSSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_QZSSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QZSSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QZSSScale_getName(t_QZSSScale *self);
      static PyObject *t_QZSSScale_offsetFromTAI(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_offsetToTAI(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_toString(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_get__name(t_QZSSScale *self, void *data);
      static PyGetSetDef t_QZSSScale__fields_[] = {
        DECLARE_GET_FIELD(t_QZSSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_QZSSScale__methods_[] = {
        DECLARE_METHOD(t_QZSSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QZSSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QZSSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_QZSSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_QZSSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_QZSSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QZSSScale)[] = {
        { Py_tp_methods, t_QZSSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_QZSSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QZSSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QZSSScale, t_QZSSScale, QZSSScale);

      void t_QZSSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(QZSSScale), &PY_TYPE_DEF(QZSSScale), module, "QZSSScale", 0);
      }

      void t_QZSSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "class_", make_descriptor(QZSSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "wrapfn_", make_descriptor(t_QZSSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QZSSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QZSSScale::initializeClass, 1)))
          return NULL;
        return t_QZSSScale::wrap_Object(QZSSScale(((t_QZSSScale *) arg)->object.this$));
      }
      static PyObject *t_QZSSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QZSSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_QZSSScale_getName(t_QZSSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_QZSSScale_offsetFromTAI(t_QZSSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_QZSSScale_offsetToTAI(t_QZSSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_QZSSScale_toString(t_QZSSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(QZSSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_QZSSScale_get__name(t_QZSSScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/HashMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *HashMap::class$ = NULL;
    jmethodID *HashMap::mids$ = NULL;
    bool HashMap::live$ = false;

    jclass HashMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/HashMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_db8de8bc54857165] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
        mids$[mid_init$_76637231e1f360e3] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_containsKey_65c7d273e80d497a] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_65c7d273e80d497a] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_entrySet_015730311a5bacdc] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_get_9facd1449e0950d3] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_af8aa32ee9c1f184] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_015730311a5bacdc] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_put_af8aa32ee9c1f184] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_db8de8bc54857165] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_af8aa32ee9c1f184] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_9facd1449e0950d3] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_83750138b7b51bf4] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_af8aa32ee9c1f184] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_25e3a1e437d39751] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
        mids$[mid_values_37528d110cff6b74] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    HashMap::HashMap() : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    HashMap::HashMap(jint a0) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

    HashMap::HashMap(const ::java::util::Map & a0) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_db8de8bc54857165, a0.this$)) {}

    HashMap::HashMap(jint a0, jfloat a1) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_76637231e1f360e3, a0, a1)) {}

    void HashMap::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    ::java::lang::Object HashMap::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    jboolean HashMap::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_65c7d273e80d497a], a0.this$);
    }

    jboolean HashMap::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_65c7d273e80d497a], a0.this$);
    }

    ::java::util::Set HashMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_015730311a5bacdc]));
    }

    ::java::lang::Object HashMap::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_9facd1449e0950d3], a0.this$));
    }

    ::java::lang::Object HashMap::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    jboolean HashMap::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Set HashMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_015730311a5bacdc]));
    }

    ::java::lang::Object HashMap::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    void HashMap::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_db8de8bc54857165], a0.this$);
    }

    ::java::lang::Object HashMap::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    ::java::lang::Object HashMap::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_9facd1449e0950d3], a0.this$));
    }

    jboolean HashMap::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_83750138b7b51bf4], a0.this$, a1.this$);
    }

    ::java::lang::Object HashMap::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    jboolean HashMap::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_25e3a1e437d39751], a0.this$, a1.this$, a2.this$);
    }

    jint HashMap::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
    }

    ::java::util::Collection HashMap::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_37528d110cff6b74]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_HashMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashMap_of_(t_HashMap *self, PyObject *args);
    static int t_HashMap_init_(t_HashMap *self, PyObject *args, PyObject *kwds);
    static PyObject *t_HashMap_clear(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_clone(t_HashMap *self);
    static PyObject *t_HashMap_containsKey(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_containsValue(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_entrySet(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_get(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_getOrDefault(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_isEmpty(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_keySet(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_put(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_putAll(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_putIfAbsent(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_remove(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_replace(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_size(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_values(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_get__empty(t_HashMap *self, void *data);
    static PyObject *t_HashMap_get__parameters_(t_HashMap *self, void *data);
    static PyGetSetDef t_HashMap__fields_[] = {
      DECLARE_GET_FIELD(t_HashMap, empty),
      DECLARE_GET_FIELD(t_HashMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_HashMap__methods_[] = {
      DECLARE_METHOD(t_HashMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, clear, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, clone, METH_NOARGS),
      DECLARE_METHOD(t_HashMap, containsKey, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, containsValue, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, entrySet, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, get, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, keySet, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, put, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, putAll, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, remove, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, replace, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, size, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, values, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(HashMap)[] = {
      { Py_tp_methods, t_HashMap__methods_ },
      { Py_tp_init, (void *) t_HashMap_init_ },
      { Py_tp_getset, t_HashMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(HashMap)[] = {
      &PY_TYPE_DEF(::java::util::AbstractMap),
      NULL
    };

    DEFINE_TYPE(HashMap, t_HashMap, HashMap);
    PyObject *t_HashMap::wrap_Object(const HashMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_HashMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashMap *self = (t_HashMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_HashMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_HashMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashMap *self = (t_HashMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_HashMap::install(PyObject *module)
    {
      installType(&PY_TYPE(HashMap), &PY_TYPE_DEF(HashMap), module, "HashMap", 0);
    }

    void t_HashMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "class_", make_descriptor(HashMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "wrapfn_", make_descriptor(t_HashMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_HashMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, HashMap::initializeClass, 1)))
        return NULL;
      return t_HashMap::wrap_Object(HashMap(((t_HashMap *) arg)->object.this$));
    }
    static PyObject *t_HashMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, HashMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_HashMap_of_(t_HashMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_HashMap_init_(t_HashMap *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          HashMap object((jobject) NULL);

          INT_CALL(object = HashMap());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = HashMap(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Map a0((jobject) NULL);
          PyTypeObject **p0;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
          {
            INT_CALL(object = HashMap(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          jint a0;
          jfloat a1;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            INT_CALL(object = HashMap(a0, a1));
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

    static PyObject *t_HashMap_clear(t_HashMap *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_HashMap_clone(t_HashMap *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_HashMap_containsKey(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "containsKey", args, 2);
    }

    static PyObject *t_HashMap_containsValue(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "containsValue", args, 2);
    }

    static PyObject *t_HashMap_entrySet(t_HashMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.entrySet());
        return ::java::util::t_Set::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "entrySet", args, 2);
    }

    static PyObject *t_HashMap_get(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_HashMap_getOrDefault(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oO", self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "getOrDefault", args, 2);
    }

    static PyObject *t_HashMap_isEmpty(t_HashMap *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_HashMap_keySet(t_HashMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keySet());
        return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "keySet", args, 2);
    }

    static PyObject *t_HashMap_put(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "put", args, 2);
    }

    static PyObject *t_HashMap_putAll(t_HashMap *self, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "putAll", args, 2);
    }

    static PyObject *t_HashMap_putIfAbsent(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "putIfAbsent", args, 2);
    }

    static PyObject *t_HashMap_remove(t_HashMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.remove(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_HashMap_replace(t_HashMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "OOO", self->parameters[0], self->parameters[1], self->parameters[1], &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.replace(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_HashMap_size(t_HashMap *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_HashMap_values(t_HashMap *self, PyObject *args)
    {
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.values());
        return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "values", args, 2);
    }
    static PyObject *t_HashMap_get__parameters_(t_HashMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_HashMap_get__empty(t_HashMap *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/GTest.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *GTest::class$ = NULL;
        jmethodID *GTest::mids$ = NULL;
        bool GTest::live$ = false;

        jclass GTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/GTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_g_830834389f7bbf30] = env->getMethodID(cls, "g", "([D[J)D");
            mids$[mid_gDataSetsComparison_d498b5cc5125fdcb] = env->getMethodID(cls, "gDataSetsComparison", "([J[J)D");
            mids$[mid_gTest_830834389f7bbf30] = env->getMethodID(cls, "gTest", "([D[J)D");
            mids$[mid_gTest_d2b6ad91862e3050] = env->getMethodID(cls, "gTest", "([D[JD)Z");
            mids$[mid_gTestDataSetsComparison_d498b5cc5125fdcb] = env->getMethodID(cls, "gTestDataSetsComparison", "([J[J)D");
            mids$[mid_gTestDataSetsComparison_9c57b9c7c3ffd7eb] = env->getMethodID(cls, "gTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_gTestIntrinsic_830834389f7bbf30] = env->getMethodID(cls, "gTestIntrinsic", "([D[J)D");
            mids$[mid_rootLogLikelihoodRatio_4a76c08ca752718a] = env->getMethodID(cls, "rootLogLikelihoodRatio", "(JJJJ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GTest::GTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble GTest::g(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_830834389f7bbf30], a0.this$, a1.this$);
        }

        jdouble GTest::gDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gDataSetsComparison_d498b5cc5125fdcb], a0.this$, a1.this$);
        }

        jdouble GTest::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTest_830834389f7bbf30], a0.this$, a1.this$);
        }

        jboolean GTest::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_gTest_d2b6ad91862e3050], a0.this$, a1.this$, a2);
        }

        jdouble GTest::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTestDataSetsComparison_d498b5cc5125fdcb], a0.this$, a1.this$);
        }

        jboolean GTest::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_gTestDataSetsComparison_9c57b9c7c3ffd7eb], a0.this$, a1.this$, a2);
        }

        jdouble GTest::gTestIntrinsic(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTestIntrinsic_830834389f7bbf30], a0.this$, a1.this$);
        }

        jdouble GTest::rootLogLikelihoodRatio(jlong a0, jlong a1, jlong a2, jlong a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_rootLogLikelihoodRatio_4a76c08ca752718a], a0, a1, a2, a3);
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
        static PyObject *t_GTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GTest_init_(t_GTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GTest_g(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gDataSetsComparison(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTest(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTestDataSetsComparison(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTestIntrinsic(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_rootLogLikelihoodRatio(t_GTest *self, PyObject *args);

        static PyMethodDef t_GTest__methods_[] = {
          DECLARE_METHOD(t_GTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GTest, g, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTest, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTestDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTestIntrinsic, METH_VARARGS),
          DECLARE_METHOD(t_GTest, rootLogLikelihoodRatio, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GTest)[] = {
          { Py_tp_methods, t_GTest__methods_ },
          { Py_tp_init, (void *) t_GTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GTest, t_GTest, GTest);

        void t_GTest::install(PyObject *module)
        {
          installType(&PY_TYPE(GTest), &PY_TYPE_DEF(GTest), module, "GTest", 0);
        }

        void t_GTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "class_", make_descriptor(GTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "wrapfn_", make_descriptor(t_GTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GTest::initializeClass, 1)))
            return NULL;
          return t_GTest::wrap_Object(GTest(((t_GTest *) arg)->object.this$));
        }
        static PyObject *t_GTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GTest_init_(t_GTest *self, PyObject *args, PyObject *kwds)
        {
          GTest object((jobject) NULL);

          INT_CALL(object = GTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_GTest_g(t_GTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.g(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", args);
          return NULL;
        }

        static PyObject *t_GTest_gDataSetsComparison(t_GTest *self, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "gDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_GTest_gTest(t_GTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.gTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.gTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gTest", args);
          return NULL;
        }

        static PyObject *t_GTest_gTestDataSetsComparison(t_GTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.gTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.gTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_GTest_gTestIntrinsic(t_GTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gTestIntrinsic(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "gTestIntrinsic", args);
          return NULL;
        }

        static PyObject *t_GTest_rootLogLikelihoodRatio(t_GTest *self, PyObject *args)
        {
          jlong a0;
          jlong a1;
          jlong a2;
          jlong a3;
          jdouble result;

          if (!parseArgs(args, "JJJJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.rootLogLikelihoodRatio(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootLogLikelihoodRatio", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexODEConverter.h"
#include "org/hipparchus/ode/ComplexODEStateAndDerivative.h"
#include "org/hipparchus/ode/ComplexSecondaryODE.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ComplexOrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ComplexODEState.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEConverter::class$ = NULL;
      jmethodID *ComplexODEConverter::mids$ = NULL;
      bool ComplexODEConverter::live$ = false;

      jclass ComplexODEConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_convertEquations_66c8df12f3818ebb] = env->getMethodID(cls, "convertEquations", "(Lorg/hipparchus/ode/ComplexOrdinaryDifferentialEquation;)Lorg/hipparchus/ode/OrdinaryDifferentialEquation;");
          mids$[mid_convertSecondaryEquations_c01d75fd6cb02094] = env->getMethodID(cls, "convertSecondaryEquations", "(Lorg/hipparchus/ode/ComplexSecondaryODE;)Lorg/hipparchus/ode/SecondaryODE;");
          mids$[mid_convertState_583e7e18b418ae63] = env->getMethodID(cls, "convertState", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ComplexODEStateAndDerivative;");
          mids$[mid_convertState_2e1eef287dcdcc65] = env->getMethodID(cls, "convertState", "(Lorg/hipparchus/ode/ComplexODEState;)Lorg/hipparchus/ode/ODEState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEConverter::ComplexODEConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ::org::hipparchus::ode::OrdinaryDifferentialEquation ComplexODEConverter::convertEquations(const ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation & a0) const
      {
        return ::org::hipparchus::ode::OrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_convertEquations_66c8df12f3818ebb], a0.this$));
      }

      ::org::hipparchus::ode::SecondaryODE ComplexODEConverter::convertSecondaryEquations(const ::org::hipparchus::ode::ComplexSecondaryODE & a0) const
      {
        return ::org::hipparchus::ode::SecondaryODE(env->callObjectMethod(this$, mids$[mid_convertSecondaryEquations_c01d75fd6cb02094], a0.this$));
      }

      ::org::hipparchus::ode::ComplexODEStateAndDerivative ComplexODEConverter::convertState(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
      {
        return ::org::hipparchus::ode::ComplexODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_convertState_583e7e18b418ae63], a0.this$));
      }

      ::org::hipparchus::ode::ODEState ComplexODEConverter::convertState(const ::org::hipparchus::ode::ComplexODEState & a0) const
      {
        return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_convertState_2e1eef287dcdcc65], a0.this$));
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
      static PyObject *t_ComplexODEConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEConverter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEConverter_init_(t_ComplexODEConverter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEConverter_convertEquations(t_ComplexODEConverter *self, PyObject *arg);
      static PyObject *t_ComplexODEConverter_convertSecondaryEquations(t_ComplexODEConverter *self, PyObject *arg);
      static PyObject *t_ComplexODEConverter_convertState(t_ComplexODEConverter *self, PyObject *args);

      static PyMethodDef t_ComplexODEConverter__methods_[] = {
        DECLARE_METHOD(t_ComplexODEConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEConverter, convertEquations, METH_O),
        DECLARE_METHOD(t_ComplexODEConverter, convertSecondaryEquations, METH_O),
        DECLARE_METHOD(t_ComplexODEConverter, convertState, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEConverter)[] = {
        { Py_tp_methods, t_ComplexODEConverter__methods_ },
        { Py_tp_init, (void *) t_ComplexODEConverter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexODEConverter, t_ComplexODEConverter, ComplexODEConverter);

      void t_ComplexODEConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEConverter), &PY_TYPE_DEF(ComplexODEConverter), module, "ComplexODEConverter", 0);
      }

      void t_ComplexODEConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "class_", make_descriptor(ComplexODEConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "wrapfn_", make_descriptor(t_ComplexODEConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEConverter::initializeClass, 1)))
          return NULL;
        return t_ComplexODEConverter::wrap_Object(ComplexODEConverter(((t_ComplexODEConverter *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEConverter_init_(t_ComplexODEConverter *self, PyObject *args, PyObject *kwds)
      {
        ComplexODEConverter object((jobject) NULL);

        INT_CALL(object = ComplexODEConverter());
        self->object = object;

        return 0;
      }

      static PyObject *t_ComplexODEConverter_convertEquations(t_ComplexODEConverter *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation a0((jobject) NULL);
        ::org::hipparchus::ode::OrdinaryDifferentialEquation result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.convertEquations(a0));
          return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertEquations", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEConverter_convertSecondaryEquations(t_ComplexODEConverter *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ComplexSecondaryODE a0((jobject) NULL);
        ::org::hipparchus::ode::SecondaryODE result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ComplexSecondaryODE::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.convertSecondaryEquations(a0));
          return ::org::hipparchus::ode::t_SecondaryODE::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEConverter_convertState(t_ComplexODEConverter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
            ::org::hipparchus::ode::ComplexODEStateAndDerivative result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertState(a0));
              return ::org::hipparchus::ode::t_ComplexODEStateAndDerivative::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::ode::ComplexODEState a0((jobject) NULL);
            ::org::hipparchus::ode::ODEState result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::ode::ComplexODEState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertState(a0));
              return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "convertState", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldUnivariateVectorFunction::class$ = NULL;
      jmethodID *CalculusFieldUnivariateVectorFunction::mids$ = NULL;
      bool CalculusFieldUnivariateVectorFunction::live$ = false;

      jclass CalculusFieldUnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_30c819b09170a025] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > CalculusFieldUnivariateVectorFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_30c819b09170a025], a0.this$));
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
      static PyObject *t_CalculusFieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_of_(t_CalculusFieldUnivariateVectorFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_value(t_CalculusFieldUnivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_get__parameters_(t_CalculusFieldUnivariateVectorFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldUnivariateVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldUnivariateVectorFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldUnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldUnivariateVectorFunction)[] = {
        { Py_tp_methods, t_CalculusFieldUnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldUnivariateVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldUnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldUnivariateVectorFunction, t_CalculusFieldUnivariateVectorFunction, CalculusFieldUnivariateVectorFunction);
      PyObject *t_CalculusFieldUnivariateVectorFunction::wrap_Object(const CalculusFieldUnivariateVectorFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateVectorFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateVectorFunction *self = (t_CalculusFieldUnivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldUnivariateVectorFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateVectorFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateVectorFunction *self = (t_CalculusFieldUnivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldUnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldUnivariateVectorFunction), &PY_TYPE_DEF(CalculusFieldUnivariateVectorFunction), module, "CalculusFieldUnivariateVectorFunction", 0);
      }

      void t_CalculusFieldUnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "class_", make_descriptor(CalculusFieldUnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "wrapfn_", make_descriptor(t_CalculusFieldUnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldUnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldUnivariateVectorFunction::wrap_Object(CalculusFieldUnivariateVectorFunction(((t_CalculusFieldUnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldUnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_of_(t_CalculusFieldUnivariateVectorFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_value(t_CalculusFieldUnivariateVectorFunction *self, PyObject *arg)
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
      static PyObject *t_CalculusFieldUnivariateVectorFunction_get__parameters_(t_CalculusFieldUnivariateVectorFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventState$EventOccurrence.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventState$EventOccurrence::class$ = NULL;
        jmethodID *FieldEventState$EventOccurrence::mids$ = NULL;
        bool FieldEventState$EventOccurrence::live$ = false;

        jclass FieldEventState$EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventState$EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAction_4aa421fecbe7eed3] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_02cea343d9f71933] = env->getMethodID(cls, "getNewState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getStopDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getStopDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action FieldEventState$EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_4aa421fecbe7eed3]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldEventState$EventOccurrence::getNewState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getNewState_02cea343d9f71933]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldEventState$EventOccurrence::getStopDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopDate_51da00d5b8a3b5df]));
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
        static PyObject *t_FieldEventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState$EventOccurrence_of_(t_FieldEventState$EventOccurrence *self, PyObject *args);
        static PyObject *t_FieldEventState$EventOccurrence_getAction(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_getNewState(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_getStopDate(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_get__action(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__newState(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__stopDate(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__parameters_(t_FieldEventState$EventOccurrence *self, void *data);
        static PyGetSetDef t_FieldEventState$EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, action),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, newState),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, stopDate),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState$EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getStopDate, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState$EventOccurrence)[] = {
          { Py_tp_methods, t_FieldEventState$EventOccurrence__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventState$EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState$EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState$EventOccurrence, t_FieldEventState$EventOccurrence, FieldEventState$EventOccurrence);
        PyObject *t_FieldEventState$EventOccurrence::wrap_Object(const FieldEventState$EventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState$EventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState$EventOccurrence *self = (t_FieldEventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventState$EventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState$EventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState$EventOccurrence *self = (t_FieldEventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventState$EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState$EventOccurrence), &PY_TYPE_DEF(FieldEventState$EventOccurrence), module, "FieldEventState$EventOccurrence", 0);
        }

        void t_FieldEventState$EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "class_", make_descriptor(FieldEventState$EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "wrapfn_", make_descriptor(t_FieldEventState$EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState$EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_FieldEventState$EventOccurrence::wrap_Object(FieldEventState$EventOccurrence(((t_FieldEventState$EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState$EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState$EventOccurrence_of_(t_FieldEventState$EventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getAction(t_FieldEventState$EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getNewState(t_FieldEventState$EventOccurrence *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getStopDate(t_FieldEventState$EventOccurrence *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldEventState$EventOccurrence_get__parameters_(t_FieldEventState$EventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__action(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__newState(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__stopDate(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Cbrt.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cbrt::class$ = NULL;
        jmethodID *Cbrt::mids$ = NULL;
        bool Cbrt::live$ = false;

        jclass Cbrt::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cbrt");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cbrt::Cbrt() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Cbrt::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cbrt::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Cbrt_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cbrt_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cbrt_init_(t_Cbrt *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cbrt_value(t_Cbrt *self, PyObject *args);

        static PyMethodDef t_Cbrt__methods_[] = {
          DECLARE_METHOD(t_Cbrt, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cbrt, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cbrt, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cbrt)[] = {
          { Py_tp_methods, t_Cbrt__methods_ },
          { Py_tp_init, (void *) t_Cbrt_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cbrt)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cbrt, t_Cbrt, Cbrt);

        void t_Cbrt::install(PyObject *module)
        {
          installType(&PY_TYPE(Cbrt), &PY_TYPE_DEF(Cbrt), module, "Cbrt", 0);
        }

        void t_Cbrt::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "class_", make_descriptor(Cbrt::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "wrapfn_", make_descriptor(t_Cbrt::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cbrt_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cbrt::initializeClass, 1)))
            return NULL;
          return t_Cbrt::wrap_Object(Cbrt(((t_Cbrt *) arg)->object.this$));
        }
        static PyObject *t_Cbrt_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cbrt::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cbrt_init_(t_Cbrt *self, PyObject *args, PyObject *kwds)
        {
          Cbrt object((jobject) NULL);

          INT_CALL(object = Cbrt());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cbrt_value(t_Cbrt *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
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
#include "org/orekit/time/PythonTimeScalarFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScalarFunction::class$ = NULL;
      jmethodID *PythonTimeScalarFunction::mids$ = NULL;
      bool PythonTimeScalarFunction::live$ = false;

      jclass PythonTimeScalarFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScalarFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_bf1d7732f1acb697] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_value_2a5f05be83ff251d] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScalarFunction::PythonTimeScalarFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonTimeScalarFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonTimeScalarFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonTimeScalarFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonTimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScalarFunction_init_(t_PythonTimeScalarFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScalarFunction_finalize(t_PythonTimeScalarFunction *self);
      static PyObject *t_PythonTimeScalarFunction_pythonExtension(t_PythonTimeScalarFunction *self, PyObject *args);
      static void JNICALL t_PythonTimeScalarFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonTimeScalarFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeScalarFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonTimeScalarFunction_get__self(t_PythonTimeScalarFunction *self, void *data);
      static PyGetSetDef t_PythonTimeScalarFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScalarFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScalarFunction__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScalarFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScalarFunction)[] = {
        { Py_tp_methods, t_PythonTimeScalarFunction__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScalarFunction_init_ },
        { Py_tp_getset, t_PythonTimeScalarFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScalarFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScalarFunction, t_PythonTimeScalarFunction, PythonTimeScalarFunction);

      void t_PythonTimeScalarFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScalarFunction), &PY_TYPE_DEF(PythonTimeScalarFunction), module, "PythonTimeScalarFunction", 1);
      }

      void t_PythonTimeScalarFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "class_", make_descriptor(PythonTimeScalarFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "wrapfn_", make_descriptor(t_PythonTimeScalarFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScalarFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonTimeScalarFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonTimeScalarFunction_value1 },
          { "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeScalarFunction_value2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScalarFunction::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScalarFunction::wrap_Object(PythonTimeScalarFunction(((t_PythonTimeScalarFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScalarFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScalarFunction_init_(t_PythonTimeScalarFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScalarFunction object((jobject) NULL);

        INT_CALL(object = PythonTimeScalarFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScalarFunction_finalize(t_PythonTimeScalarFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScalarFunction_pythonExtension(t_PythonTimeScalarFunction *self, PyObject *args)
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

      static void JNICALL t_PythonTimeScalarFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonTimeScalarFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
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

      static jobject JNICALL t_PythonTimeScalarFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonTimeScalarFunction_get__self(t_PythonTimeScalarFunction *self, void *data)
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
#include "org/orekit/models/earth/troposphere/ViennaThreeModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaThreeModel::class$ = NULL;
          jmethodID *ViennaThreeModel::mids$ = NULL;
          bool ViennaThreeModel::live$ = false;

          jclass ViennaThreeModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaThreeModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_c9965c971ad94126] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_computeZenithDelay_61c3b5679b3be385] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_computeZenithDelay_dcd2d94aeb49e9c9] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_mappingFactors_7ef12dc9276409e6] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6f55c0ac27817ed2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_pathDelay_fe3b5c46874ab115] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_ff7a895eb6f0af2e] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaThreeModel::ViennaThreeModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

          ViennaThreeModel::ViennaThreeModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9965c971ad94126, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > ViennaThreeModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_61c3b5679b3be385], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaThreeModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_dcd2d94aeb49e9c9], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List ViennaThreeModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaThreeModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_7ef12dc9276409e6], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > ViennaThreeModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6f55c0ac27817ed2], a0, a1.this$, a2.this$));
          }

          jdouble ViennaThreeModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_fe3b5c46874ab115], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement ViennaThreeModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_ff7a895eb6f0af2e], a0.this$, a1.this$, a2.this$, a3.this$));
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
        namespace troposphere {
          static PyObject *t_ViennaThreeModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaThreeModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaThreeModel_init_(t_ViennaThreeModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaThreeModel_computeZenithDelay(t_ViennaThreeModel *self, PyObject *args);
          static PyObject *t_ViennaThreeModel_getParametersDrivers(t_ViennaThreeModel *self);
          static PyObject *t_ViennaThreeModel_mappingFactors(t_ViennaThreeModel *self, PyObject *args);
          static PyObject *t_ViennaThreeModel_pathDelay(t_ViennaThreeModel *self, PyObject *args);
          static PyObject *t_ViennaThreeModel_get__parametersDrivers(t_ViennaThreeModel *self, void *data);
          static PyGetSetDef t_ViennaThreeModel__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaThreeModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaThreeModel__methods_[] = {
            DECLARE_METHOD(t_ViennaThreeModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaThreeModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaThreeModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_ViennaThreeModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ViennaThreeModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_ViennaThreeModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaThreeModel)[] = {
            { Py_tp_methods, t_ViennaThreeModel__methods_ },
            { Py_tp_init, (void *) t_ViennaThreeModel_init_ },
            { Py_tp_getset, t_ViennaThreeModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaThreeModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ViennaThreeModel, t_ViennaThreeModel, ViennaThreeModel);

          void t_ViennaThreeModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaThreeModel), &PY_TYPE_DEF(ViennaThreeModel), module, "ViennaThreeModel", 0);
          }

          void t_ViennaThreeModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaThreeModel), "class_", make_descriptor(ViennaThreeModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaThreeModel), "wrapfn_", make_descriptor(t_ViennaThreeModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaThreeModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ViennaThreeModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaThreeModel::initializeClass, 1)))
              return NULL;
            return t_ViennaThreeModel::wrap_Object(ViennaThreeModel(((t_ViennaThreeModel *) arg)->object.this$));
          }
          static PyObject *t_ViennaThreeModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaThreeModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaThreeModel_init_(t_ViennaThreeModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ViennaThreeModel object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = ViennaThreeModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                ViennaThreeModel object((jobject) NULL);

                if (!parseArgs(args, "[D[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ViennaThreeModel(a0, a1, a2));
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

          static PyObject *t_ViennaThreeModel_computeZenithDelay(t_ViennaThreeModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "K[KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "computeZenithDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaThreeModel_getParametersDrivers(t_ViennaThreeModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ViennaThreeModel_mappingFactors(t_ViennaThreeModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }

          static PyObject *t_ViennaThreeModel_pathDelay(t_ViennaThreeModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaThreeModel_get__parametersDrivers(t_ViennaThreeModel *self, void *data)
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
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
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
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_16d47a327666f5ff] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");
            mids$[mid_add_465bcdb67e0beb29] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_finish_1463d3d0d52f94dd] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getHandlers_2afa36052df4765d] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
            mids$[mid_handleStep_edb529c141e8d4a9] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_remove_5516e9ecb647e12b] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_remove_16d47a327666f5ff] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepHandlerMultiplexer::FieldStepHandlerMultiplexer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void FieldStepHandlerMultiplexer::add(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_16d47a327666f5ff], a0.this$);
        }

        void FieldStepHandlerMultiplexer::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_add_465bcdb67e0beb29], a0.this$, a1.this$);
        }

        void FieldStepHandlerMultiplexer::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
        }

        void FieldStepHandlerMultiplexer::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_1463d3d0d52f94dd], a0.this$);
        }

        ::java::util::List FieldStepHandlerMultiplexer::getHandlers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_2afa36052df4765d]));
        }

        void FieldStepHandlerMultiplexer::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_edb529c141e8d4a9], a0.this$);
        }

        void FieldStepHandlerMultiplexer::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
        }

        void FieldStepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_5516e9ecb647e12b], a0.this$);
        }

        void FieldStepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_16d47a327666f5ff], a0.this$);
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
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {

          ::java::lang::Class *ContextBinding::class$ = NULL;
          jmethodID *ContextBinding::mids$ = NULL;
          bool ContextBinding::live$ = false;

          jclass ContextBinding::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/ContextBinding");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getClockCount_dff5885c2c873297] = env->getMethodID(cls, "getClockCount", "()D");
              mids$[mid_getClockRate_dff5885c2c873297] = env->getMethodID(cls, "getClockRate", "()D");
              mids$[mid_getConventions_60f9ded87ab7ca4c] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_0b7cf48ee6a922ee] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getParsedUnitsBehavior_8df14555f7513c0c] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_getReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeSystem_ee0a6b60b63a969e] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_isSimpleEOP_b108b35ef48e27bd] = env->getMethodID(cls, "isSimpleEOP", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble ContextBinding::getClockCount() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockCount_dff5885c2c873297]);
          }

          jdouble ContextBinding::getClockRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRate_dff5885c2c873297]);
          }

          ::org::orekit::utils::IERSConventions ContextBinding::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_60f9ded87ab7ca4c]));
          }

          ::org::orekit::data::DataContext ContextBinding::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_0b7cf48ee6a922ee]));
          }

          ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior ContextBinding::getParsedUnitsBehavior() const
          {
            return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_8df14555f7513c0c]));
          }

          ::org::orekit::time::AbsoluteDate ContextBinding::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_85703d13e302437e]));
          }

          ::org::orekit::files::ccsds::definitions::TimeSystem ContextBinding::getTimeSystem() const
          {
            return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_ee0a6b60b63a969e]));
          }

          jboolean ContextBinding::isSimpleEOP() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_b108b35ef48e27bd]);
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
          static PyObject *t_ContextBinding_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContextBinding_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContextBinding_getClockCount(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getClockRate(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getConventions(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getDataContext(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getParsedUnitsBehavior(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getReferenceDate(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getTimeSystem(t_ContextBinding *self);
          static PyObject *t_ContextBinding_isSimpleEOP(t_ContextBinding *self);
          static PyObject *t_ContextBinding_get__clockCount(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__clockRate(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__conventions(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__dataContext(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__parsedUnitsBehavior(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__referenceDate(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__simpleEOP(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__timeSystem(t_ContextBinding *self, void *data);
          static PyGetSetDef t_ContextBinding__fields_[] = {
            DECLARE_GET_FIELD(t_ContextBinding, clockCount),
            DECLARE_GET_FIELD(t_ContextBinding, clockRate),
            DECLARE_GET_FIELD(t_ContextBinding, conventions),
            DECLARE_GET_FIELD(t_ContextBinding, dataContext),
            DECLARE_GET_FIELD(t_ContextBinding, parsedUnitsBehavior),
            DECLARE_GET_FIELD(t_ContextBinding, referenceDate),
            DECLARE_GET_FIELD(t_ContextBinding, simpleEOP),
            DECLARE_GET_FIELD(t_ContextBinding, timeSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ContextBinding__methods_[] = {
            DECLARE_METHOD(t_ContextBinding, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContextBinding, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContextBinding, getClockCount, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getClockRate, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getParsedUnitsBehavior, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, isSimpleEOP, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContextBinding)[] = {
            { Py_tp_methods, t_ContextBinding__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ContextBinding__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContextBinding)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ContextBinding, t_ContextBinding, ContextBinding);

          void t_ContextBinding::install(PyObject *module)
          {
            installType(&PY_TYPE(ContextBinding), &PY_TYPE_DEF(ContextBinding), module, "ContextBinding", 0);
          }

          void t_ContextBinding::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "class_", make_descriptor(ContextBinding::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "wrapfn_", make_descriptor(t_ContextBinding::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContextBinding_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContextBinding::initializeClass, 1)))
              return NULL;
            return t_ContextBinding::wrap_Object(ContextBinding(((t_ContextBinding *) arg)->object.this$));
          }
          static PyObject *t_ContextBinding_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContextBinding::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ContextBinding_getClockCount(t_ContextBinding *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockCount());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ContextBinding_getClockRate(t_ContextBinding *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ContextBinding_getConventions(t_ContextBinding *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getDataContext(t_ContextBinding *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getParsedUnitsBehavior(t_ContextBinding *self)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
            OBJ_CALL(result = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getReferenceDate(t_ContextBinding *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getTimeSystem(t_ContextBinding *self)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_isSimpleEOP(t_ContextBinding *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isSimpleEOP());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ContextBinding_get__clockCount(t_ContextBinding *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockCount());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ContextBinding_get__clockRate(t_ContextBinding *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ContextBinding_get__conventions(t_ContextBinding *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__dataContext(t_ContextBinding *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__parsedUnitsBehavior(t_ContextBinding *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
            OBJ_CALL(value = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__referenceDate(t_ContextBinding *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__simpleEOP(t_ContextBinding *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isSimpleEOP());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_ContextBinding_get__timeSystem(t_ContextBinding *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldAbstractPropagator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldAbstractPropagator::class$ = NULL;
      jmethodID *FieldAbstractPropagator::mids$ = NULL;
      bool FieldAbstractPropagator::live$ = false;

      jclass FieldAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_2c8cec257f03501f] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_getAdditionalStateProviders_2afa36052df4765d] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_02cea343d9f71933] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_805c1ec2ab9b09dd] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_f6f1ea8aef3019eb] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_resetInitialState_1463d3d0d52f94dd] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_updateAdditionalStates_25e81e971666cba6] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_initializePropagation_0fa09c18fee449d5] = env->getMethodID(cls, "initializePropagation", "()V");
          mids$[mid_initializeAdditionalStates_d17277e76a7ead14] = env->getMethodID(cls, "initializeAdditionalStates", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_setStartDate_d17277e76a7ead14] = env->getMethodID(cls, "setStartDate", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_updateUnmanagedStates_25e81e971666cba6] = env->getMethodID(cls, "updateUnmanagedStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getStartDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_stateChanged_1463d3d0d52f94dd] = env->getMethodID(cls, "stateChanged", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldAbstractPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::FieldAdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_2c8cec257f03501f], a0.this$);
      }

      ::java::util::List FieldAbstractPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_2afa36052df4765d]));
      }

      ::org::orekit::attitudes::AttitudeProvider FieldAbstractPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_a904f3d015a354a0]));
      }

      ::org::hipparchus::Field FieldAbstractPropagator::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      ::org::orekit::frames::Frame FieldAbstractPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldAbstractPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_02cea343d9f71933]));
      }

      JArray< ::java::lang::String > FieldAbstractPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3]));
      }

      ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer FieldAbstractPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_805c1ec2ab9b09dd]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbstractPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_2cdae1c350dc3e9a], a0.this$, a1.this$));
      }

      jboolean FieldAbstractPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68], a0.this$);
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldAbstractPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_f6f1ea8aef3019eb], a0.this$));
      }

      void FieldAbstractPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_1463d3d0d52f94dd], a0.this$);
      }

      void FieldAbstractPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_3cff7c75ea06698c], a0.this$);
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
      static PyObject *t_FieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_of_(t_FieldAbstractPropagator *self, PyObject *args);
      static PyObject *t_FieldAbstractPropagator_addAdditionalStateProvider(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_getAdditionalStateProviders(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getAttitudeProvider(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getField(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getFrame(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getInitialState(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getManagedAdditionalStates(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getMultiplexer(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getPVCoordinates(t_FieldAbstractPropagator *self, PyObject *args);
      static PyObject *t_FieldAbstractPropagator_isAdditionalStateManaged(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_propagate(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_resetInitialState(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_setAttitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_get__additionalStateProviders(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__attitudeProvider(t_FieldAbstractPropagator *self, void *data);
      static int t_FieldAbstractPropagator_set__attitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg, void *data);
      static PyObject *t_FieldAbstractPropagator_get__field(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__frame(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__initialState(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__managedAdditionalStates(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__multiplexer(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__parameters_(t_FieldAbstractPropagator *self, void *data);
      static PyGetSetDef t_FieldAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_FieldAbstractPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, field),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, frame),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, initialState),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, multiplexer),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbstractPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, propagate, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, setAttitudeProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbstractPropagator)[] = {
        { Py_tp_methods, t_FieldAbstractPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbstractPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAbstractPropagator, t_FieldAbstractPropagator, FieldAbstractPropagator);
      PyObject *t_FieldAbstractPropagator::wrap_Object(const FieldAbstractPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbstractPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbstractPropagator *self = (t_FieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbstractPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbstractPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbstractPropagator *self = (t_FieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbstractPropagator), &PY_TYPE_DEF(FieldAbstractPropagator), module, "FieldAbstractPropagator", 0);
      }

      void t_FieldAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "class_", make_descriptor(FieldAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "wrapfn_", make_descriptor(t_FieldAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldAbstractPropagator::wrap_Object(FieldAbstractPropagator(((t_FieldAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbstractPropagator_of_(t_FieldAbstractPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldAbstractPropagator_addAdditionalStateProvider(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldAdditionalStateProvider a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldAdditionalStateProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldAdditionalStateProvider::parameters_))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_getAdditionalStateProviders(t_FieldAbstractPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getAttitudeProvider(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getField(t_FieldAbstractPropagator *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getFrame(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getInitialState(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getManagedAdditionalStates(t_FieldAbstractPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_FieldAbstractPropagator_getMultiplexer(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getPVCoordinates(t_FieldAbstractPropagator *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_isAdditionalStateManaged(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_propagate(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.propagate(a0));
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_resetInitialState(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_setAttitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }
      static PyObject *t_FieldAbstractPropagator_get__parameters_(t_FieldAbstractPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbstractPropagator_get__additionalStateProviders(t_FieldAbstractPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__attitudeProvider(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_FieldAbstractPropagator_set__attitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg, void *data)
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

      static PyObject *t_FieldAbstractPropagator_get__field(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__frame(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__initialState(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__managedAdditionalStates(t_FieldAbstractPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_FieldAbstractPropagator_get__multiplexer(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *FieldGeodeticPoint::class$ = NULL;
      jmethodID *FieldGeodeticPoint::mids$ = NULL;
      bool FieldGeodeticPoint::live$ = false;

      jclass FieldGeodeticPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/FieldGeodeticPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_82fa7e789a6ae1f6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getAltitude_eba8e72a22c984ac] = env->getMethodID(cls, "getAltitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEast_716f50c86ffc8da7] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getLatitude_eba8e72a22c984ac] = env->getMethodID(cls, "getLatitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLongitude_eba8e72a22c984ac] = env->getMethodID(cls, "getLongitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNadir_716f50c86ffc8da7] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNorth_716f50c86ffc8da7] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getSouth_716f50c86ffc8da7] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getWest_716f50c86ffc8da7] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getZenith_716f50c86ffc8da7] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldGeodeticPoint::FieldGeodeticPoint(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_82fa7e789a6ae1f6, a0.this$, a1.this$, a2.this$)) {}

      jboolean FieldGeodeticPoint::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getAltitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAltitude_eba8e72a22c984ac]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getEast_716f50c86ffc8da7]));
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getLatitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLatitude_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getLongitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLongitude_eba8e72a22c984ac]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNadir_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNorth_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getSouth_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getWest_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getZenith_716f50c86ffc8da7]));
      }

      jint FieldGeodeticPoint::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      ::java::lang::String FieldGeodeticPoint::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_FieldGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldGeodeticPoint_of_(t_FieldGeodeticPoint *self, PyObject *args);
      static int t_FieldGeodeticPoint_init_(t_FieldGeodeticPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldGeodeticPoint_equals(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_getAltitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getEast(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getLatitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getLongitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getNadir(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getNorth(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getSouth(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getWest(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getZenith(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_hashCode(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_toString(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_get__altitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__east(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__latitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__longitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__nadir(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__north(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__south(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__west(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__zenith(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__parameters_(t_FieldGeodeticPoint *self, void *data);
      static PyGetSetDef t_FieldGeodeticPoint__fields_[] = {
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, altitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, east),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, latitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, longitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, nadir),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, north),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, south),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, west),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, zenith),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldGeodeticPoint__methods_[] = {
        DECLARE_METHOD(t_FieldGeodeticPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldGeodeticPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldGeodeticPoint, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getEast, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getLatitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getLongitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getNadir, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getNorth, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getSouth, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getWest, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getZenith, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldGeodeticPoint)[] = {
        { Py_tp_methods, t_FieldGeodeticPoint__methods_ },
        { Py_tp_init, (void *) t_FieldGeodeticPoint_init_ },
        { Py_tp_getset, t_FieldGeodeticPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldGeodeticPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldGeodeticPoint, t_FieldGeodeticPoint, FieldGeodeticPoint);
      PyObject *t_FieldGeodeticPoint::wrap_Object(const FieldGeodeticPoint& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldGeodeticPoint::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldGeodeticPoint *self = (t_FieldGeodeticPoint *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldGeodeticPoint::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldGeodeticPoint::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldGeodeticPoint *self = (t_FieldGeodeticPoint *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldGeodeticPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldGeodeticPoint), &PY_TYPE_DEF(FieldGeodeticPoint), module, "FieldGeodeticPoint", 0);
      }

      void t_FieldGeodeticPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "class_", make_descriptor(FieldGeodeticPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "wrapfn_", make_descriptor(t_FieldGeodeticPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldGeodeticPoint::initializeClass, 1)))
          return NULL;
        return t_FieldGeodeticPoint::wrap_Object(FieldGeodeticPoint(((t_FieldGeodeticPoint *) arg)->object.this$));
      }
      static PyObject *t_FieldGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldGeodeticPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldGeodeticPoint_of_(t_FieldGeodeticPoint *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldGeodeticPoint_init_(t_FieldGeodeticPoint *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldGeodeticPoint object((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldGeodeticPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldGeodeticPoint_equals(t_FieldGeodeticPoint *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldGeodeticPoint_getAltitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAltitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getEast(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getLatitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getLongitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLongitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getNadir(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getNorth(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getSouth(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getWest(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getZenith(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_hashCode(t_FieldGeodeticPoint *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldGeodeticPoint_toString(t_FieldGeodeticPoint *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldGeodeticPoint_get__parameters_(t_FieldGeodeticPoint *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldGeodeticPoint_get__altitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAltitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__east(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__latitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__longitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLongitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__nadir(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__north(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__south(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__west(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__zenith(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/GroundOptimizationProblemBuilder.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "java/util/List.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *GroundOptimizationProblemBuilder::class$ = NULL;
        jmethodID *GroundOptimizationProblemBuilder::mids$ = NULL;
        bool GroundOptimizationProblemBuilder::live$ = false;

        jclass GroundOptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/GroundOptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3534ee2ed547a8c5] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/rugged/adjustment/measurements/Observables;Lorg/orekit/rugged/api/Rugged;)V");
            mids$[mid_build_fb782eefc76cd888] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_createTargetAndWeight_0fa09c18fee449d5] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_initMapping_0fa09c18fee449d5] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_createFunction_9751b2e3b68b45ea] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundOptimizationProblemBuilder::GroundOptimizationProblemBuilder(const ::java::util::List & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1, const ::org::orekit::rugged::api::Rugged & a2) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(env->newObject(initializeClass, &mids$, mid_init$_3534ee2ed547a8c5, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem GroundOptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_fb782eefc76cd888], a0, a1));
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
        static PyObject *t_GroundOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundOptimizationProblemBuilder_init_(t_GroundOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundOptimizationProblemBuilder_build(t_GroundOptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_GroundOptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundOptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_GroundOptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) t_GroundOptimizationProblemBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundOptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::adjustment::OptimizationProblemBuilder),
          NULL
        };

        DEFINE_TYPE(GroundOptimizationProblemBuilder, t_GroundOptimizationProblemBuilder, GroundOptimizationProblemBuilder);

        void t_GroundOptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundOptimizationProblemBuilder), &PY_TYPE_DEF(GroundOptimizationProblemBuilder), module, "GroundOptimizationProblemBuilder", 0);
        }

        void t_GroundOptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "class_", make_descriptor(GroundOptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "wrapfn_", make_descriptor(t_GroundOptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundOptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_GroundOptimizationProblemBuilder::wrap_Object(GroundOptimizationProblemBuilder(((t_GroundOptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_GroundOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundOptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundOptimizationProblemBuilder_init_(t_GroundOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          ::org::orekit::rugged::api::Rugged a2((jobject) NULL);
          GroundOptimizationProblemBuilder object((jobject) NULL);

          if (!parseArgs(args, "Kkk", ::java::util::List::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, ::org::orekit::rugged::api::Rugged::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
          {
            INT_CALL(object = GroundOptimizationProblemBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundOptimizationProblemBuilder_build(t_GroundOptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GroundOptimizationProblemBuilder), (PyObject *) self, "build", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/MersenneTwister.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *MersenneTwister::class$ = NULL;
      jmethodID *MersenneTwister::mids$ = NULL;
      bool MersenneTwister::live$ = false;

      jclass MersenneTwister::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/MersenneTwister");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d147d7ce001e2d45] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_setSeed_d147d7ce001e2d45] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_99803b0791f320ff] = env->getMethodID(cls, "setSeed", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MersenneTwister::MersenneTwister() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      MersenneTwister::MersenneTwister(const JArray< jint > & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_d147d7ce001e2d45, a0.this$)) {}

      MersenneTwister::MersenneTwister(jint a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      MersenneTwister::MersenneTwister(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

      jint MersenneTwister::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
      }

      void MersenneTwister::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d147d7ce001e2d45], a0.this$);
      }

      void MersenneTwister::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_99803b0791f320ff], a0);
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
      static PyObject *t_MersenneTwister_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MersenneTwister_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MersenneTwister_init_(t_MersenneTwister *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MersenneTwister_nextInt(t_MersenneTwister *self, PyObject *args);
      static PyObject *t_MersenneTwister_setSeed(t_MersenneTwister *self, PyObject *args);
      static int t_MersenneTwister_set__seed(t_MersenneTwister *self, PyObject *arg, void *data);
      static PyGetSetDef t_MersenneTwister__fields_[] = {
        DECLARE_SET_FIELD(t_MersenneTwister, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MersenneTwister__methods_[] = {
        DECLARE_METHOD(t_MersenneTwister, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MersenneTwister, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MersenneTwister, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_MersenneTwister, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MersenneTwister)[] = {
        { Py_tp_methods, t_MersenneTwister__methods_ },
        { Py_tp_init, (void *) t_MersenneTwister_init_ },
        { Py_tp_getset, t_MersenneTwister__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MersenneTwister)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(MersenneTwister, t_MersenneTwister, MersenneTwister);

      void t_MersenneTwister::install(PyObject *module)
      {
        installType(&PY_TYPE(MersenneTwister), &PY_TYPE_DEF(MersenneTwister), module, "MersenneTwister", 0);
      }

      void t_MersenneTwister::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MersenneTwister), "class_", make_descriptor(MersenneTwister::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MersenneTwister), "wrapfn_", make_descriptor(t_MersenneTwister::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MersenneTwister), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MersenneTwister_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MersenneTwister::initializeClass, 1)))
          return NULL;
        return t_MersenneTwister::wrap_Object(MersenneTwister(((t_MersenneTwister *) arg)->object.this$));
      }
      static PyObject *t_MersenneTwister_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MersenneTwister::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MersenneTwister_init_(t_MersenneTwister *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            MersenneTwister object((jobject) NULL);

            INT_CALL(object = MersenneTwister());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            MersenneTwister object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = MersenneTwister(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            MersenneTwister object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = MersenneTwister(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            MersenneTwister object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = MersenneTwister(a0));
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

      static PyObject *t_MersenneTwister_nextInt(t_MersenneTwister *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(MersenneTwister), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_MersenneTwister_setSeed(t_MersenneTwister *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(MersenneTwister), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_MersenneTwister_set__seed(t_MersenneTwister *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTNewtonianAttractionContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTNewtonianAttractionContext::class$ = NULL;
            jmethodID *FieldDSSTNewtonianAttractionContext::mids$ = NULL;
            bool FieldDSSTNewtonianAttractionContext::live$ = false;

            jclass FieldDSSTNewtonianAttractionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTNewtonianAttractionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getGM_eba8e72a22c984ac] = env->getMethodID(cls, "getGM", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTNewtonianAttractionContext::getGM() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGM_eba8e72a22c984ac]));
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
            static PyObject *t_FieldDSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_of_(t_FieldDSSTNewtonianAttractionContext *self, PyObject *args);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_getGM(t_FieldDSSTNewtonianAttractionContext *self);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__gM(t_FieldDSSTNewtonianAttractionContext *self, void *data);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__parameters_(t_FieldDSSTNewtonianAttractionContext *self, void *data);
            static PyGetSetDef t_FieldDSSTNewtonianAttractionContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTNewtonianAttractionContext, gM),
              DECLARE_GET_FIELD(t_FieldDSSTNewtonianAttractionContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTNewtonianAttractionContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, getGM, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTNewtonianAttractionContext)[] = {
              { Py_tp_methods, t_FieldDSSTNewtonianAttractionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTNewtonianAttractionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTNewtonianAttractionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTNewtonianAttractionContext, t_FieldDSSTNewtonianAttractionContext, FieldDSSTNewtonianAttractionContext);
            PyObject *t_FieldDSSTNewtonianAttractionContext::wrap_Object(const FieldDSSTNewtonianAttractionContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTNewtonianAttractionContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTNewtonianAttractionContext *self = (t_FieldDSSTNewtonianAttractionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTNewtonianAttractionContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTNewtonianAttractionContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTNewtonianAttractionContext *self = (t_FieldDSSTNewtonianAttractionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTNewtonianAttractionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTNewtonianAttractionContext), &PY_TYPE_DEF(FieldDSSTNewtonianAttractionContext), module, "FieldDSSTNewtonianAttractionContext", 0);
            }

            void t_FieldDSSTNewtonianAttractionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "class_", make_descriptor(FieldDSSTNewtonianAttractionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "wrapfn_", make_descriptor(t_FieldDSSTNewtonianAttractionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTNewtonianAttractionContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTNewtonianAttractionContext::wrap_Object(FieldDSSTNewtonianAttractionContext(((t_FieldDSSTNewtonianAttractionContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTNewtonianAttractionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_of_(t_FieldDSSTNewtonianAttractionContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_getGM(t_FieldDSSTNewtonianAttractionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGM());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__parameters_(t_FieldDSSTNewtonianAttractionContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__gM(t_FieldDSSTNewtonianAttractionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGM());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *Ndm::class$ = NULL;
          jmethodID *Ndm::mids$ = NULL;
          bool Ndm::live$ = false;

          jclass Ndm::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/Ndm");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6701c064a13f8d2f] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;)V");
              mids$[mid_getComments_2afa36052df4765d] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
              mids$[mid_getConstituents_2afa36052df4765d] = env->getMethodID(cls, "getConstituents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Ndm::Ndm(const ::java::util::List & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6701c064a13f8d2f, a0.this$, a1.this$)) {}

          ::java::util::List Ndm::getComments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_2afa36052df4765d]));
          }

          ::java::util::List Ndm::getConstituents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getConstituents_2afa36052df4765d]));
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
          static PyObject *t_Ndm_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Ndm_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Ndm_init_(t_Ndm *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Ndm_getComments(t_Ndm *self);
          static PyObject *t_Ndm_getConstituents(t_Ndm *self);
          static PyObject *t_Ndm_get__comments(t_Ndm *self, void *data);
          static PyObject *t_Ndm_get__constituents(t_Ndm *self, void *data);
          static PyGetSetDef t_Ndm__fields_[] = {
            DECLARE_GET_FIELD(t_Ndm, comments),
            DECLARE_GET_FIELD(t_Ndm, constituents),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Ndm__methods_[] = {
            DECLARE_METHOD(t_Ndm, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Ndm, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Ndm, getComments, METH_NOARGS),
            DECLARE_METHOD(t_Ndm, getConstituents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Ndm)[] = {
            { Py_tp_methods, t_Ndm__methods_ },
            { Py_tp_init, (void *) t_Ndm_init_ },
            { Py_tp_getset, t_Ndm__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Ndm)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Ndm, t_Ndm, Ndm);

          void t_Ndm::install(PyObject *module)
          {
            installType(&PY_TYPE(Ndm), &PY_TYPE_DEF(Ndm), module, "Ndm", 0);
          }

          void t_Ndm::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "class_", make_descriptor(Ndm::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "wrapfn_", make_descriptor(t_Ndm::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Ndm_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Ndm::initializeClass, 1)))
              return NULL;
            return t_Ndm::wrap_Object(Ndm(((t_Ndm *) arg)->object.this$));
          }
          static PyObject *t_Ndm_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Ndm::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Ndm_init_(t_Ndm *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            Ndm object((jobject) NULL);

            if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = Ndm(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Ndm_getComments(t_Ndm *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_Ndm_getConstituents(t_Ndm *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getConstituents());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_Ndm_get__comments(t_Ndm *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_Ndm_get__constituents(t_Ndm *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getConstituents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/UnitSphereRandomVectorGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UnitSphereRandomVectorGenerator::class$ = NULL;
      jmethodID *UnitSphereRandomVectorGenerator::mids$ = NULL;
      bool UnitSphereRandomVectorGenerator::live$ = false;

      jclass UnitSphereRandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UnitSphereRandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_2b71fcb2111892eb] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextVector_60c7040667a7dc5c] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnitSphereRandomVectorGenerator::UnitSphereRandomVectorGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      UnitSphereRandomVectorGenerator::UnitSphereRandomVectorGenerator(jint a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2b71fcb2111892eb, a0, a1.this$)) {}

      JArray< jdouble > UnitSphereRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_60c7040667a7dc5c]));
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
      static PyObject *t_UnitSphereRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnitSphereRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UnitSphereRandomVectorGenerator_init_(t_UnitSphereRandomVectorGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UnitSphereRandomVectorGenerator_nextVector(t_UnitSphereRandomVectorGenerator *self);

      static PyMethodDef t_UnitSphereRandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnitSphereRandomVectorGenerator)[] = {
        { Py_tp_methods, t_UnitSphereRandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) t_UnitSphereRandomVectorGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnitSphereRandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnitSphereRandomVectorGenerator, t_UnitSphereRandomVectorGenerator, UnitSphereRandomVectorGenerator);

      void t_UnitSphereRandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UnitSphereRandomVectorGenerator), &PY_TYPE_DEF(UnitSphereRandomVectorGenerator), module, "UnitSphereRandomVectorGenerator", 0);
      }

      void t_UnitSphereRandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "class_", make_descriptor(UnitSphereRandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "wrapfn_", make_descriptor(t_UnitSphereRandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnitSphereRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnitSphereRandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_UnitSphereRandomVectorGenerator::wrap_Object(UnitSphereRandomVectorGenerator(((t_UnitSphereRandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_UnitSphereRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnitSphereRandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UnitSphereRandomVectorGenerator_init_(t_UnitSphereRandomVectorGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            UnitSphereRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = UnitSphereRandomVectorGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
            UnitSphereRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UnitSphereRandomVectorGenerator(a0, a1));
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

      static PyObject *t_UnitSphereRandomVectorGenerator_nextVector(t_UnitSphereRandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *LocalizedException::class$ = NULL;
      jmethodID *LocalizedException::mids$ = NULL;
      bool LocalizedException::live$ = false;

      jclass LocalizedException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/LocalizedException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMessage_3cd873bfb132c4fd] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_b93c730013ce64c6] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_517615caa9b88a24] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cd873bfb132c4fd], a0.this$));
      }

      JArray< ::java::lang::Object > LocalizedException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_b93c730013ce64c6]));
      }

      ::org::hipparchus::exception::Localizable LocalizedException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_517615caa9b88a24]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg);
      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self);
      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self);
      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data);
      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data);
      static PyGetSetDef t_LocalizedException__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedException, parts),
        DECLARE_GET_FIELD(t_LocalizedException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedException__methods_[] = {
        DECLARE_METHOD(t_LocalizedException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, getMessage, METH_O),
        DECLARE_METHOD(t_LocalizedException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedException)[] = {
        { Py_tp_methods, t_LocalizedException__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedException)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LocalizedException, t_LocalizedException, LocalizedException);

      void t_LocalizedException::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedException), &PY_TYPE_DEF(LocalizedException), module, "LocalizedException", 0);
      }

      void t_LocalizedException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "class_", make_descriptor(LocalizedException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "wrapfn_", make_descriptor(t_LocalizedException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedException::initializeClass, 1)))
          return NULL;
        return t_LocalizedException::wrap_Object(LocalizedException(((t_LocalizedException *) arg)->object.this$));
      }
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getMessage(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getMessage", arg);
        return NULL;
      }

      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data)
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
#include "org/orekit/propagation/events/handlers/EventMultipleHandler.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/EventMultipleHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *EventMultipleHandler::class$ = NULL;
          jmethodID *EventMultipleHandler::mids$ = NULL;
          bool EventMultipleHandler::live$ = false;

          jclass EventMultipleHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/EventMultipleHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addHandler_2c820fcef7e4ced8] = env->getMethodID(cls, "addHandler", "(Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/handlers/EventMultipleHandler;");
              mids$[mid_addHandlers_231f1812abdf722a] = env->getMethodID(cls, "addHandlers", "([Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/handlers/EventMultipleHandler;");
              mids$[mid_eventOccurred_abc543fa9701720f] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getHandlers_2afa36052df4765d] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
              mids$[mid_init_2e343080aa0c9516] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_resetState_7a28fd3585a5b57c] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_setHandlers_de3e021e7266b71e] = env->getMethodID(cls, "setHandlers", "(Ljava/util/List;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EventMultipleHandler::EventMultipleHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          EventMultipleHandler EventMultipleHandler::addHandler(const ::org::orekit::propagation::events::handlers::EventHandler & a0) const
          {
            return EventMultipleHandler(env->callObjectMethod(this$, mids$[mid_addHandler_2c820fcef7e4ced8], a0.this$));
          }

          EventMultipleHandler EventMultipleHandler::addHandlers(const JArray< ::org::orekit::propagation::events::handlers::EventHandler > & a0) const
          {
            return EventMultipleHandler(env->callObjectMethod(this$, mids$[mid_addHandlers_231f1812abdf722a], a0.this$));
          }

          ::org::hipparchus::ode::events::Action EventMultipleHandler::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_abc543fa9701720f], a0.this$, a1.this$, a2));
          }

          ::java::util::List EventMultipleHandler::getHandlers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_2afa36052df4765d]));
          }

          void EventMultipleHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::propagation::events::EventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_2e343080aa0c9516], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::SpacecraftState EventMultipleHandler::resetState(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_7a28fd3585a5b57c], a0.this$, a1.this$));
          }

          void EventMultipleHandler::setHandlers(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setHandlers_de3e021e7266b71e], a0.this$);
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
      namespace events {
        namespace handlers {
          static PyObject *t_EventMultipleHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventMultipleHandler_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EventMultipleHandler_init_(t_EventMultipleHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EventMultipleHandler_addHandler(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_addHandlers(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_eventOccurred(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_getHandlers(t_EventMultipleHandler *self);
          static PyObject *t_EventMultipleHandler_init(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_resetState(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_setHandlers(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_get__handlers(t_EventMultipleHandler *self, void *data);
          static int t_EventMultipleHandler_set__handlers(t_EventMultipleHandler *self, PyObject *arg, void *data);
          static PyGetSetDef t_EventMultipleHandler__fields_[] = {
            DECLARE_GETSET_FIELD(t_EventMultipleHandler, handlers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EventMultipleHandler__methods_[] = {
            DECLARE_METHOD(t_EventMultipleHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventMultipleHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventMultipleHandler, addHandler, METH_O),
            DECLARE_METHOD(t_EventMultipleHandler, addHandlers, METH_O),
            DECLARE_METHOD(t_EventMultipleHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, getHandlers, METH_NOARGS),
            DECLARE_METHOD(t_EventMultipleHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, resetState, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, setHandlers, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EventMultipleHandler)[] = {
            { Py_tp_methods, t_EventMultipleHandler__methods_ },
            { Py_tp_init, (void *) t_EventMultipleHandler_init_ },
            { Py_tp_getset, t_EventMultipleHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EventMultipleHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EventMultipleHandler, t_EventMultipleHandler, EventMultipleHandler);

          void t_EventMultipleHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(EventMultipleHandler), &PY_TYPE_DEF(EventMultipleHandler), module, "EventMultipleHandler", 0);
          }

          void t_EventMultipleHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "class_", make_descriptor(EventMultipleHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "wrapfn_", make_descriptor(t_EventMultipleHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EventMultipleHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EventMultipleHandler::initializeClass, 1)))
              return NULL;
            return t_EventMultipleHandler::wrap_Object(EventMultipleHandler(((t_EventMultipleHandler *) arg)->object.this$));
          }
          static PyObject *t_EventMultipleHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EventMultipleHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EventMultipleHandler_init_(t_EventMultipleHandler *self, PyObject *args, PyObject *kwds)
          {
            EventMultipleHandler object((jobject) NULL);

            INT_CALL(object = EventMultipleHandler());
            self->object = object;

            return 0;
          }

          static PyObject *t_EventMultipleHandler_addHandler(t_EventMultipleHandler *self, PyObject *arg)
          {
            ::org::orekit::propagation::events::handlers::EventHandler a0((jobject) NULL);
            EventMultipleHandler result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addHandler(a0));
              return t_EventMultipleHandler::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addHandler", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_addHandlers(t_EventMultipleHandler *self, PyObject *arg)
          {
            JArray< ::org::orekit::propagation::events::handlers::EventHandler > a0((jobject) NULL);
            EventMultipleHandler result((jobject) NULL);

            if (!parseArg(arg, "[k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addHandlers(a0));
              return t_EventMultipleHandler::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addHandlers", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_eventOccurred(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_getHandlers(t_EventMultipleHandler *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getHandlers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::handlers::PY_TYPE(EventHandler));
          }

          static PyObject *t_EventMultipleHandler_init(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_resetState(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_setHandlers(t_EventMultipleHandler *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setHandlers(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setHandlers", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_get__handlers(t_EventMultipleHandler *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getHandlers());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_EventMultipleHandler_set__handlers(t_EventMultipleHandler *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setHandlers(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "handlers", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonFieldTimeStampedCache.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalStateException.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonFieldTimeStampedCache::class$ = NULL;
      jmethodID *PythonFieldTimeStampedCache::mids$ = NULL;
      bool PythonFieldTimeStampedCache::live$ = false;

      jclass PythonFieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonFieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEarliest_f8d8d28f6791aa76] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_f8d8d28f6791aa76] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_92d676459a63dcda] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_570ce0828f81a2c1] = env->getMethodID(cls, "getNeighborsSize", "()I");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeStampedCache::PythonFieldTimeStampedCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonFieldTimeStampedCache::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFieldTimeStampedCache::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFieldTimeStampedCache::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStampedCache_of_(t_PythonFieldTimeStampedCache *self, PyObject *args);
      static int t_PythonFieldTimeStampedCache_init_(t_PythonFieldTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeStampedCache_finalize(t_PythonFieldTimeStampedCache *self);
      static PyObject *t_PythonFieldTimeStampedCache_pythonExtension(t_PythonFieldTimeStampedCache *self, PyObject *args);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getNeighbors2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jint JNICALL t_PythonFieldTimeStampedCache_getNeighborsSize3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldTimeStampedCache_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeStampedCache_get__self(t_PythonFieldTimeStampedCache *self, void *data);
      static PyObject *t_PythonFieldTimeStampedCache_get__parameters_(t_PythonFieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_PythonFieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeStampedCache, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeStampedCache)[] = {
        { Py_tp_methods, t_PythonFieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeStampedCache_init_ },
        { Py_tp_getset, t_PythonFieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeStampedCache, t_PythonFieldTimeStampedCache, PythonFieldTimeStampedCache);
      PyObject *t_PythonFieldTimeStampedCache::wrap_Object(const PythonFieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStampedCache *self = (t_PythonFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStampedCache *self = (t_PythonFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeStampedCache), &PY_TYPE_DEF(PythonFieldTimeStampedCache), module, "PythonFieldTimeStampedCache", 1);
      }

      void t_PythonFieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "class_", make_descriptor(PythonFieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "wrapfn_", make_descriptor(t_PythonFieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeStampedCache::initializeClass);
        JNINativeMethod methods[] = {
          { "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;", (void *) t_PythonFieldTimeStampedCache_getEarliest0 },
          { "getLatest", "()Lorg/orekit/time/FieldTimeStamped;", (void *) t_PythonFieldTimeStampedCache_getLatest1 },
          { "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;", (void *) t_PythonFieldTimeStampedCache_getNeighbors2 },
          { "getNeighborsSize", "()I", (void *) t_PythonFieldTimeStampedCache_getNeighborsSize3 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeStampedCache_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeStampedCache::wrap_Object(PythonFieldTimeStampedCache(((t_PythonFieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeStampedCache_of_(t_PythonFieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeStampedCache_init_(t_PythonFieldTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeStampedCache object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeStampedCache());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeStampedCache_finalize(t_PythonFieldTimeStampedCache *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeStampedCache_pythonExtension(t_PythonFieldTimeStampedCache *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarliest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeStamped::initializeClass, &value))
        {
          throwTypeError("getEarliest", result);
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getLatest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeStamped::initializeClass, &value))
        {
          throwTypeError("getLatest", result);
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getNeighbors2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNeighbors", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
        {
          throwTypeError("getNeighbors", result);
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

      static jint JNICALL t_PythonFieldTimeStampedCache_getNeighborsSize3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNeighborsSize", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNeighborsSize", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static void JNICALL t_PythonFieldTimeStampedCache_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeStampedCache_get__self(t_PythonFieldTimeStampedCache *self, void *data)
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
      static PyObject *t_PythonFieldTimeStampedCache_get__parameters_(t_PythonFieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07Data::class$ = NULL;
              jmethodID *SsrIgm07Data::mids$ = NULL;
              bool SsrIgm07Data::live$ = false;

              jclass SsrIgm07Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSsrUra_dff5885c2c873297] = env->getMethodID(cls, "getSsrUra", "()D");
                  mids$[mid_setSsrUra_17db3a65980d3441] = env->getMethodID(cls, "setSsrUra", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07Data::SsrIgm07Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jdouble SsrIgm07Data::getSsrUra() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSsrUra_dff5885c2c873297]);
              }

              void SsrIgm07Data::setSsrUra(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrUra_17db3a65980d3441], a0);
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
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm07Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm07Data_init_(t_SsrIgm07Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm07Data_getSsrUra(t_SsrIgm07Data *self);
              static PyObject *t_SsrIgm07Data_setSsrUra(t_SsrIgm07Data *self, PyObject *arg);
              static PyObject *t_SsrIgm07Data_get__ssrUra(t_SsrIgm07Data *self, void *data);
              static int t_SsrIgm07Data_set__ssrUra(t_SsrIgm07Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm07Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm07Data, ssrUra),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm07Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Data, getSsrUra, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm07Data, setSsrUra, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07Data)[] = {
                { Py_tp_methods, t_SsrIgm07Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07Data_init_ },
                { Py_tp_getset, t_SsrIgm07Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm07Data, t_SsrIgm07Data, SsrIgm07Data);

              void t_SsrIgm07Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07Data), &PY_TYPE_DEF(SsrIgm07Data), module, "SsrIgm07Data", 0);
              }

              void t_SsrIgm07Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "class_", make_descriptor(SsrIgm07Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "wrapfn_", make_descriptor(t_SsrIgm07Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07Data::wrap_Object(SsrIgm07Data(((t_SsrIgm07Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm07Data_init_(t_SsrIgm07Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm07Data object((jobject) NULL);

                INT_CALL(object = SsrIgm07Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm07Data_getSsrUra(t_SsrIgm07Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSsrUra());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm07Data_setSsrUra(t_SsrIgm07Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSsrUra(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrUra", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm07Data_get__ssrUra(t_SsrIgm07Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSsrUra());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm07Data_set__ssrUra(t_SsrIgm07Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSsrUra(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrUra", arg);
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
#include "org/hipparchus/special/Erf.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *Erf::class$ = NULL;
      jmethodID *Erf::mids$ = NULL;
      bool Erf::live$ = false;

      jclass Erf::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/Erf");

          mids$ = new jmethodID[max_mid];
          mids$[mid_erf_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "erf", "(D)D");
          mids$[mid_erf_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "erf", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erf_86ffecc08a63eff0] = env->getStaticMethodID(cls, "erf", "(DD)D");
          mids$[mid_erf_6746cc1cd9210d54] = env->getStaticMethodID(cls, "erf", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfInv_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "erfInv", "(D)D");
          mids$[mid_erfInv_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "erfInv", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfc_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "erfc", "(D)D");
          mids$[mid_erfc_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "erfc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfcInv_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "erfcInv", "(D)D");
          mids$[mid_erfcInv_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "erfcInv", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Erf::erf(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erf_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erf(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erf_a4b1871f4d29e58b], a0.this$));
      }

      jdouble Erf::erf(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erf_86ffecc08a63eff0], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erf(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erf_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      jdouble Erf::erfInv(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfInv_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfInv(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfInv_a4b1871f4d29e58b], a0.this$));
      }

      jdouble Erf::erfc(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfc_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfc(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfc_a4b1871f4d29e58b], a0.this$));
      }

      jdouble Erf::erfcInv(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfcInv_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfcInv(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfcInv_a4b1871f4d29e58b], a0.this$));
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
      static PyObject *t_Erf_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Erf_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Erf_erf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfInv(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfc(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfcInv(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Erf__methods_[] = {
        DECLARE_METHOD(t_Erf, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Erf, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Erf, erf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfInv, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfc, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfcInv, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Erf)[] = {
        { Py_tp_methods, t_Erf__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Erf)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Erf, t_Erf, Erf);

      void t_Erf::install(PyObject *module)
      {
        installType(&PY_TYPE(Erf), &PY_TYPE_DEF(Erf), module, "Erf", 0);
      }

      void t_Erf::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "class_", make_descriptor(Erf::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "wrapfn_", make_descriptor(t_Erf::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Erf_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Erf::initializeClass, 1)))
          return NULL;
        return t_Erf::wrap_Object(Erf(((t_Erf *) arg)->object.this$));
      }
      static PyObject *t_Erf_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Erf::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Erf_erf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0, a1));
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
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erf", args);
        return NULL;
      }

      static PyObject *t_Erf_erfInv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfInv(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfInv(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfInv", args);
        return NULL;
      }

      static PyObject *t_Erf_erfc(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfc(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfc(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfc", args);
        return NULL;
      }

      static PyObject *t_Erf_erfcInv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfcInv(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfcInv(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfcInv", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresOptimizer::class$ = NULL;
            jmethodID *LeastSquaresOptimizer::mids$ = NULL;
            bool LeastSquaresOptimizer::live$ = false;

            jclass LeastSquaresOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_optimize_3488934cadbbcc09] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LeastSquaresOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_3488934cadbbcc09], a0.this$));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer_optimize(t_LeastSquaresOptimizer *self, PyObject *arg);

            static PyMethodDef t_LeastSquaresOptimizer__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer, optimize, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresOptimizer)[] = {
              { Py_tp_methods, t_LeastSquaresOptimizer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresOptimizer, t_LeastSquaresOptimizer, LeastSquaresOptimizer);

            void t_LeastSquaresOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresOptimizer), &PY_TYPE_DEF(LeastSquaresOptimizer), module, "LeastSquaresOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "Optimum", make_descriptor(&PY_TYPE_DEF(LeastSquaresOptimizer$Optimum)));
            }

            void t_LeastSquaresOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "class_", make_descriptor(LeastSquaresOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "wrapfn_", make_descriptor(t_LeastSquaresOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresOptimizer::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresOptimizer::wrap_Object(LeastSquaresOptimizer(((t_LeastSquaresOptimizer *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresOptimizer_optimize(t_LeastSquaresOptimizer *self, PyObject *arg)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ObservableSatellite::class$ = NULL;
        jmethodID *ObservableSatellite::mids$ = NULL;
        bool ObservableSatellite::live$ = false;
        ::java::lang::String *ObservableSatellite::CLOCK_DRIFT_PREFIX = NULL;
        ::java::lang::String *ObservableSatellite::CLOCK_OFFSET_PREFIX = NULL;

        jclass ObservableSatellite::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ObservableSatellite");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getClockDriftDriver_a25ed222178aa59f] = env->getMethodID(cls, "getClockDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getClockOffsetDriver_a25ed222178aa59f] = env->getMethodID(cls, "getClockOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPropagatorIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getPropagatorIndex", "()I");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CLOCK_DRIFT_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_DRIFT_PREFIX", "Ljava/lang/String;"));
            CLOCK_OFFSET_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_OFFSET_PREFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ObservableSatellite::ObservableSatellite(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

        jboolean ObservableSatellite::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        ::org::orekit::utils::ParameterDriver ObservableSatellite::getClockDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockDriftDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::ParameterDriver ObservableSatellite::getClockOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockOffsetDriver_a25ed222178aa59f]));
        }

        jint ObservableSatellite::getPropagatorIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getPropagatorIndex_570ce0828f81a2c1]);
        }

        jint ObservableSatellite::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
        static PyObject *t_ObservableSatellite_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservableSatellite_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ObservableSatellite_init_(t_ObservableSatellite *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ObservableSatellite_equals(t_ObservableSatellite *self, PyObject *args);
        static PyObject *t_ObservableSatellite_getClockDriftDriver(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_getClockOffsetDriver(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_getPropagatorIndex(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_hashCode(t_ObservableSatellite *self, PyObject *args);
        static PyObject *t_ObservableSatellite_get__clockDriftDriver(t_ObservableSatellite *self, void *data);
        static PyObject *t_ObservableSatellite_get__clockOffsetDriver(t_ObservableSatellite *self, void *data);
        static PyObject *t_ObservableSatellite_get__propagatorIndex(t_ObservableSatellite *self, void *data);
        static PyGetSetDef t_ObservableSatellite__fields_[] = {
          DECLARE_GET_FIELD(t_ObservableSatellite, clockDriftDriver),
          DECLARE_GET_FIELD(t_ObservableSatellite, clockOffsetDriver),
          DECLARE_GET_FIELD(t_ObservableSatellite, propagatorIndex),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ObservableSatellite__methods_[] = {
          DECLARE_METHOD(t_ObservableSatellite, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservableSatellite, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservableSatellite, equals, METH_VARARGS),
          DECLARE_METHOD(t_ObservableSatellite, getClockDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, getClockOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, getPropagatorIndex, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ObservableSatellite)[] = {
          { Py_tp_methods, t_ObservableSatellite__methods_ },
          { Py_tp_init, (void *) t_ObservableSatellite_init_ },
          { Py_tp_getset, t_ObservableSatellite__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ObservableSatellite)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ObservableSatellite, t_ObservableSatellite, ObservableSatellite);

        void t_ObservableSatellite::install(PyObject *module)
        {
          installType(&PY_TYPE(ObservableSatellite), &PY_TYPE_DEF(ObservableSatellite), module, "ObservableSatellite", 0);
        }

        void t_ObservableSatellite::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "class_", make_descriptor(ObservableSatellite::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "wrapfn_", make_descriptor(t_ObservableSatellite::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "boxfn_", make_descriptor(boxObject));
          env->getClass(ObservableSatellite::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "CLOCK_DRIFT_PREFIX", make_descriptor(j2p(*ObservableSatellite::CLOCK_DRIFT_PREFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "CLOCK_OFFSET_PREFIX", make_descriptor(j2p(*ObservableSatellite::CLOCK_OFFSET_PREFIX)));
        }

        static PyObject *t_ObservableSatellite_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ObservableSatellite::initializeClass, 1)))
            return NULL;
          return t_ObservableSatellite::wrap_Object(ObservableSatellite(((t_ObservableSatellite *) arg)->object.this$));
        }
        static PyObject *t_ObservableSatellite_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ObservableSatellite::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ObservableSatellite_init_(t_ObservableSatellite *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          ObservableSatellite object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ObservableSatellite(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ObservableSatellite_equals(t_ObservableSatellite *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ObservableSatellite), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_ObservableSatellite_getClockDriftDriver(t_ObservableSatellite *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ObservableSatellite_getClockOffsetDriver(t_ObservableSatellite *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ObservableSatellite_getPropagatorIndex(t_ObservableSatellite *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPropagatorIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ObservableSatellite_hashCode(t_ObservableSatellite *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ObservableSatellite), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_ObservableSatellite_get__clockDriftDriver(t_ObservableSatellite *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ObservableSatellite_get__clockOffsetDriver(t_ObservableSatellite *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ObservableSatellite_get__propagatorIndex(t_ObservableSatellite *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPropagatorIndex());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/AbstractUnscentedTransform.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *AbstractUnscentedTransform::class$ = NULL;
      jmethodID *AbstractUnscentedTransform::mids$ = NULL;
      bool AbstractUnscentedTransform::live$ = false;

      jclass AbstractUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/AbstractUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_unscentedTransform_596ac2a258d0a23b] = env->getMethodID(cls, "unscentedTransform", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)[Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_dff5885c2c873297] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractUnscentedTransform::AbstractUnscentedTransform(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      JArray< ::org::hipparchus::linear::RealVector > AbstractUnscentedTransform::unscentedTransform(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_unscentedTransform_596ac2a258d0a23b], a0.this$, a1.this$));
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
      static PyObject *t_AbstractUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractUnscentedTransform_init_(t_AbstractUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractUnscentedTransform_unscentedTransform(t_AbstractUnscentedTransform *self, PyObject *args);

      static PyMethodDef t_AbstractUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_AbstractUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractUnscentedTransform, unscentedTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractUnscentedTransform)[] = {
        { Py_tp_methods, t_AbstractUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_AbstractUnscentedTransform_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractUnscentedTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractUnscentedTransform, t_AbstractUnscentedTransform, AbstractUnscentedTransform);

      void t_AbstractUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractUnscentedTransform), &PY_TYPE_DEF(AbstractUnscentedTransform), module, "AbstractUnscentedTransform", 0);
      }

      void t_AbstractUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "class_", make_descriptor(AbstractUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "wrapfn_", make_descriptor(t_AbstractUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_AbstractUnscentedTransform::wrap_Object(AbstractUnscentedTransform(((t_AbstractUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_AbstractUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractUnscentedTransform_init_(t_AbstractUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        AbstractUnscentedTransform object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = AbstractUnscentedTransform(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractUnscentedTransform_unscentedTransform(t_AbstractUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.unscentedTransform(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "unscentedTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *UnivariateVectorFunction::class$ = NULL;
      jmethodID *UnivariateVectorFunction::mids$ = NULL;
      bool UnivariateVectorFunction::live$ = false;

      jclass UnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/UnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_cd41055053027787] = env->getMethodID(cls, "value", "(D)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > UnivariateVectorFunction::value(jdouble a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_cd41055053027787], a0));
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
      static PyObject *t_UnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateVectorFunction_value(t_UnivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_UnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_UnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnivariateVectorFunction)[] = {
        { Py_tp_methods, t_UnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnivariateVectorFunction, t_UnivariateVectorFunction, UnivariateVectorFunction);

      void t_UnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(UnivariateVectorFunction), &PY_TYPE_DEF(UnivariateVectorFunction), module, "UnivariateVectorFunction", 0);
      }

      void t_UnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "class_", make_descriptor(UnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "wrapfn_", make_descriptor(t_UnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_UnivariateVectorFunction::wrap_Object(UnivariateVectorFunction(((t_UnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_UnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnivariateVectorFunction_value(t_UnivariateVectorFunction *self, PyObject *arg)
      {
        jdouble a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/TidalDisplacement.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *TidalDisplacement::class$ = NULL;
          jmethodID *TidalDisplacement::mids$ = NULL;
          bool TidalDisplacement::live$ = false;

          jclass TidalDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/TidalDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_41baa2835134b5c4] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/IERSConventions;Z)V");
              mids$[mid_displacement_dc5338a5a1255d1d] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TidalDisplacement::TidalDisplacement(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::PVCoordinatesProvider & a3, const ::org::orekit::utils::PVCoordinatesProvider & a4, const ::org::orekit::utils::IERSConventions & a5, jboolean a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_41baa2835134b5c4, a0, a1, a2, a3.this$, a4.this$, a5.this$, a6)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TidalDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_dc5338a5a1255d1d], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_TidalDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TidalDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TidalDisplacement_init_(t_TidalDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TidalDisplacement_displacement(t_TidalDisplacement *self, PyObject *args);

          static PyMethodDef t_TidalDisplacement__methods_[] = {
            DECLARE_METHOD(t_TidalDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TidalDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TidalDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TidalDisplacement)[] = {
            { Py_tp_methods, t_TidalDisplacement__methods_ },
            { Py_tp_init, (void *) t_TidalDisplacement_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TidalDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TidalDisplacement, t_TidalDisplacement, TidalDisplacement);

          void t_TidalDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(TidalDisplacement), &PY_TYPE_DEF(TidalDisplacement), module, "TidalDisplacement", 0);
          }

          void t_TidalDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "class_", make_descriptor(TidalDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "wrapfn_", make_descriptor(t_TidalDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TidalDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TidalDisplacement::initializeClass, 1)))
              return NULL;
            return t_TidalDisplacement::wrap_Object(TidalDisplacement(((t_TidalDisplacement *) arg)->object.this$));
          }
          static PyObject *t_TidalDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TidalDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TidalDisplacement_init_(t_TidalDisplacement *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            ::org::orekit::utils::PVCoordinatesProvider a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a4((jobject) NULL);
            ::org::orekit::utils::IERSConventions a5((jobject) NULL);
            PyTypeObject **p5;
            jboolean a6;
            TidalDisplacement object((jobject) NULL);

            if (!parseArgs(args, "DDDkkKZ", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::utils::t_IERSConventions::parameters_, &a6))
            {
              INT_CALL(object = TidalDisplacement(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TidalDisplacement_displacement(t_TidalDisplacement *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
